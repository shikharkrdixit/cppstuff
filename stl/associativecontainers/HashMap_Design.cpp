class MyHashMap {
public:
    vector<int> map;
    int size;
    MyHashMap() {
        size=0;
    }
    
    void put(int key, int value) {
        if(key>=size){
            size=key+1;
            map.resize(size,-1);
        }
        map[key]=value;
    }
    
    int get(int key) {
        if(key>=size) return -1;
        return map[key];
    }
    
    void remove(int key) {
        if(key>=size) return;
        map[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */