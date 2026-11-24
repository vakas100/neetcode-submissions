class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 0;
        for(int i = 0; i < piles.size(); i++) {
            r = max(r, piles[i]);
        }
        int ans = r;

        while(l <= r){
            int mid = l + (r-l) / 2;

            long long hours = 0;
            for(int i = 0 ; i < piles.size() ; i++) {
                hours += (piles[i] + mid - 1) / mid;
            }
            if (hours <= h) {
                ans = min(mid, ans);
                r = mid - 1;
            }
            else if(hours > h) l = mid+1;
        }
        return ans;
    }
};
