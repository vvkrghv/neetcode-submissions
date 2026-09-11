class Solution {
public:
    int solve(vector<int>&f){
        int mx=f[0];
        for(int i=1;i<f.size();i++){
            mx=max(mx,f[i]);
        }
        return mx;
    }
    int characterReplacement(string s, int k) {
        int n=s.size();
        int low=0,high=0;
        int res=INT_MIN;
        vector<int>f(256,0);
        for(high=0;high<n;high++){
            f[s[high]]++;
            int len=high-low+1;
            int mxcnt=solve(f);
            int diff=len-mxcnt;
            while(diff>k){
                f[s[low]]--;
                low++;
                len=high-low+1;
                mxcnt=solve(f);
                diff=len-mxcnt;
            }
            res=max(res,len);
        }
        return res;
    }
};