class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
    int n= arr.size();
    // s - sum = x-y
    // s2 -sum2;
    long long sum =  (long long) n * (n+1) /2;
    long long sum2 = ( (long long)n * (n+1) * (2*n+1)) /6;
    long long s=0,s2=0;
    for(int i=0;i<n;i++){
       s += arr[i];
       s2 +=(long long )arr[i] * (long long )arr[i] ;
    }
    long long value1 = s - sum;  // x-y ;
    long long value2 = s2 -sum2;
    value2 = value2 / value1;      // x+y ;
    long long x =(value1 +value2) /2;
    long long  y = x-value1;
    
    return {(int) x,(int)y};
    
    }
};