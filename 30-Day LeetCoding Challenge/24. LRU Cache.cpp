class LRUCache {
public:
    LRUCache(int capacity) : _capacity(capacity) {}
    
    int get(int key) {
        auto it = cache.find(key);
        if (it == cache.end()) return -1;
        touch(it);
        return it->second.first;
    }
    
    void put(int key, int value) {
        auto it = cache.find(key);
        if (it != cache.end()) touch(it);
        else {
			if (cache.size() == _capacity) {
				cache.erase(used.back());
				used.pop_back();
			}
            used.push_front(key);
        }
        cache[key] = { value, used.begin() };
    }
    
private:
    typedef list<int> LI;
    typedef pair<int, LI::iterator> PII;
    typedef unordered_map<int, PII> HIPII;
    
    void touch(HIPII::iterator it) {
        int key = it->first;
        used.erase(it->second.second);
        used.push_front(key);
        it->second.second = used.begin();
    }
    
    HIPII cache;
    LI used;
    int _capacity;
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */


/*OR
class LRUCache {
public:
    list<int> q;
unordered_map<int,int> m;
int cap;
LRUCache(int capacity)
{
    cap=capacity;
}
int get(int key)
{   if(m.find(key)==m.end())
        return -1;
    else
    {   q.remove(key);
        q.push_back(key);
        return m[key];
        
    }
}

void put(int key, int value)
{   if(m.find(key)!=m.end())
    {   q.remove(key);
        m.erase(key);
    }   
    if(q.size()==cap)
    {   int cur=q.front();
        q.pop_front();
        m.erase(cur);
    }
    m[key]=value;
    q.push_back(key);
}
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

*/
