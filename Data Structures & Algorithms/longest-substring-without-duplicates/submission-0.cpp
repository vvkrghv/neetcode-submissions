class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char ,int>mp;
        int low=0,high=0;
        int res=0;
        for(high=0;high<n;high++){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
            }
            int len=high-low+1;
            res=max(len,res);
        }
        return res;
    }
};
