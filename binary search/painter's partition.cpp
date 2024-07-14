bool ispossible(vector<int> boards,int n,int k,int mid)
{
    int c=1;
    int timesum=0;
    for(int i=0;i<n;i++)
    {
      if (timesum + boards[i] <= mid) {
        timesum += boards[i];
      }
    
    else
    {
        c++;
        if(c>k || boards[i]>mid)
        {
            return false;
        }
        timesum = boards[i];
    }
    if (c > k) {
        return false;
    }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n = boards.size();
    int s=0;
    int sum =0;
    for(int i =0;i<boards.size();i++)
    {
        sum += boards[i];
    }
    int e =sum;
    int ans =-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(ispossible(boards,n,k,mid))
        {
            ans=mid;
            e=mid-1;

        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans ;
}
