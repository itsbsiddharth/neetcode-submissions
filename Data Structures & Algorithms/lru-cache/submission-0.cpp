#include <unordered_map>
using namespace std;

class Node {
public:
    int key;
    int val;
    Node* prev;
    Node* next;

    // Explicit constructor: using k and v avoids naming conflicts
    Node(int k, int v) {
        key = k;
        val = v;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {
private:
    int cap;
    unordered_map<int, Node*> cache;
    Node* left;  // Dummy node: left->next points to LRU (oldest)
    Node* right; // Dummy node: right->prev points to MRU (newest)

    // Bypass 'node' by connecting its left neighbor directly to its right neighbor
    void remove(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    // Always place new/accessed node right before 'right' (MRU position)
    void insert(Node* node) {
        Node* prevNode = right->prev;
        prevNode->next = node;
        node->prev = prevNode;
        node->next = right;
        right->prev = node;
    }

public:
    LRUCache(int capacity) {
        cap = capacity;
        cache.clear();
        
        // Connect dummy boundaries to avoid NULL pointer checks
        left = new Node(0, 0);
        right = new Node(0, 0);
        left->next = right;
        right->prev = left;
    }

    int get(int key) {
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            remove(node); // Take out from current list position
            insert(node); // Move to right side (mark as MRU)
            return node->val;
        }
        return -1;
    }

    void put(int key, int value) {
        // 1. If key exists, remove its old node from the list first
        if (cache.find(key) != cache.end()) {
            remove(cache[key]);
        }

        // 2. Create node, link to map, and insert at MRU position
        Node* newNode = new Node(key, value);
        cache[key] = newNode;
        insert(newNode);

        // 3. If capacity exceeded, evict LRU node (3 total cleanup steps required)
        if (cache.size() > cap) {
            Node* lru = left->next; // Real LRU item sits right after left dummy
            remove(lru);            // Step A: Unlink from list
            cache.erase(lru->key);  // Step B: Erase key from hash map
            delete lru;             // Step C: Delete object from RAM
        }
    }
};