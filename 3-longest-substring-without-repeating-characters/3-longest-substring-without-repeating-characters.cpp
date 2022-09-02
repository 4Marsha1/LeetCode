class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> map;
        int len=0;
        int l=0,r=0;
        while(r<s.length()){
            if(map.find(s[r])!=map.end())
                l=max(map[s[r]]+1,l);
            map[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};