class Node{
public:
    int key;
    int value;
    Node* next;
    Node(int k, int v){
        next = nullptr;
        key = k;
        value = v;
    }
};

class MyHashMap {
public:
    vector<Node*> mp;
    MyHashMap() {
        mp.assign(1000, nullptr);
    }
    
    int hash(int key){
        return key%1000;
    }

    void put(int key, int value) {
        int hashValue = hash(key);
        if (mp[hashValue] == nullptr){
            Node* temp = new Node(key, value);
            mp[hashValue] = temp;
            return;
        }
        Node* current = mp[hashValue];
        if (current -> key == key){
            current -> value = value;
            return;
        }
        Node* prev;
        while (current != nullptr){
            if (current -> key == key){
                current -> value = value;
                return;
            }
            prev = current;
            current = current -> next;
        }
        Node* temp = new Node(key, value);
        prev -> next = temp;
    }
    
    int get(int key) {
        int hashValue = hash(key);
        Node* current = mp[hashValue];

        while (current != nullptr){
            if (current -> key == key) return current -> value;
            current = current -> next;
        }
        return -1;
    }
    
    void remove(int key) {
        int hashValue = hash(key);
        Node* current = mp[hashValue];

        if (!current) return;

        if (current -> key == key){
            mp[hashValue] = current -> next;
            return;
        }

        Node* nextNode = current -> next;
        while (nextNode != nullptr){
            if (nextNode -> key == key){
                current -> next = nextNode -> next;
                return;
            }
            current = nextNode;
            nextNode = nextNode -> next; 
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */