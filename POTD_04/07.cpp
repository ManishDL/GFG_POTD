class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int result=0;
        int i=0;
        int j=0;
        long ans=1;
        for(j=0;j<n;j++)
        {   ans*=a[j];
            
            while(ans>=k && i<j)
            {
                ans=ans/a[i];
                i++;
            }
            if(ans<k)result+=(j-i+1);
        }
        return result;
    }
};