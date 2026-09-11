class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1,high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            long long hr=0;
            for(int i=0;i<n;i++){
                hr+=piles[i]/mid;
                if(piles[i]%mid!=0){
                    hr++;
                }
            }
            if(hr>h){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
