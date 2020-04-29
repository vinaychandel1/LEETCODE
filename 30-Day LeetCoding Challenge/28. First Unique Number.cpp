class FirstUnique {
    unordered_map<int, int> cnt;
    queue<int> q;
public:
    FirstUnique(vector<int>& nums) {
        for (int i : nums)
            ++cnt[i];
        for (int i : nums)
            if (cnt[i] == 1)
                q.push(i);
    }
    
    int showFirstUnique() {
        return q.size() ? q.front() : -1;
    }
    
    void add(int value) {
        int x = ++cnt[value];
        if (x == 1)
            q.push(value);
        else while (q.size() && cnt[q.front()] > 1)
            q.pop();
    }
};
