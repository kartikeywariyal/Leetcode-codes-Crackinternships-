class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long min1=LLONG_MAX;
        for(int i=0;i<n-m+1;i++){
            min1=min(min1,a[i+m-1]-a[i]);
        }
        return min1;
    }   
};
