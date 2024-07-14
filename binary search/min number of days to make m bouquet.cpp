class Solution {
public:
bool bloom(vector<int> &bloomDay ,int mid,int k ,int m)
{
    int count=0;
    int ans =0;
    for(int i=0;i<bloomDay.size();i++)
    {
        if(mid>=bloomDay[i])
        {
            count++;
            if(count>=k)
            {
                ans++;
                count=0;
                if(ans==m)
                {
                    return true;
                }
            }
            
        }
        else{
            count=0;
        }

    }
    return false;
}
int mini (vector<int> bloomDay)
{
    int minii=INT_MAX;
    for(int i=0;i<bloomDay.size();i++)
    {
        minii=min(minii,bloomDay[i]);
    }
    return minii;
}
int maxi(vector<int> bloomDay)
{
    int maxx = INT_MIN;
    for(int i=0;i<bloomDay.size();i++)
    {
        maxx = max(maxx,bloomDay[i]);
    }
    return maxx;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low =mini(bloomDay);
        int high = maxi(bloomDay);
        int mid = low +(high-low)/2;
       
          if ((long long)bloomDay.size() < (long long)m * (long long)k) {
            return -1;
        }
        while(low<=high)
        {
            if (bloom(bloomDay,mid,k,m))
            {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
             mid = low +(high-low)/2;
        }
        return low;
        
    }
};
