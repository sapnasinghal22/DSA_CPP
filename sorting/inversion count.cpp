 long merge(vector<int> &arr,int mid,int s,int e,vector<int> &temp)
 {
     
     int i=s;
     int j=mid+1;
     int k=s;
     long c=0;
     while(i<=mid&& j<=e)
     {
         if(arr[i]<=arr[j])
         {
             temp[k++]=arr[i++];
         }
         else{
            //  count inversion
            temp[k++] = arr[j++];
            c += mid-i+1;
         }
     }
     while(i<=mid)
     {
         temp[k++]=arr[i++];
     }
     while(j<=e)
     {
         temp[k++]=arr[j++];
     }
     while(s<=e)
     {
         arr[s]=temp[s];
         s++;
     }
     return c;
 }
 long mergesort(vector<int>& arr,int s,int e,vector<int>& temp)
 {
     if(s>=e)
     {
         return 0;
     }
     int mid =(s+e)/2;
     long c=0;
     c += mergesort(arr,s,mid,temp);
     c+= mergesort(arr,mid+1,e,temp);
     c += merge(arr,mid,s,e,temp);
     return c;
     
 }

long countInversions(vector<int> arr) {
    int size = arr.size();
    vector<int> temp(size,0);
    long c=0;
    int s=0;
    int e=size-1;
   c= mergesort(arr,s,e,temp);
   return c;

}
