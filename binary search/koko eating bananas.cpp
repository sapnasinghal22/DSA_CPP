class Solution {
public:
int maxi(vector<int> piles)
{
    int maxV = INT_MIN;
    for(int pile :piles)
    {
        maxV=max(maxV,pile);
    }
    return maxV;
}
int calcHours(vector<int>piles,int mid)
{
    long long totalHours =0;
    for(int i=0;i<piles.size();i++)
    {
        totalHours += (piles[i] + mid - 1) / mid;
    }
    return totalHours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end = maxi(piles);
        int mid = start+(end-start)/2;
        int ans =end;
        while(start<end)
        {
            int totalHours = calcHours(piles,mid);
            if(totalHours<=h)
            {
                ans = mid;
                end = mid;
            }
            else{
                start= mid+1;
            }
            mid = start+(end-start)/2;
        }
        return ans ;
        
    }
};
