class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int, int> mpp;
        int i = 0;
        int j=0;
       
       vector<int>ans;
       while(j <arr.size()){
           mpp[arr[j]]++;
           if(j-i+1 <k){
               j++;
              
           }
           else if(j-i+1 ==k){
               ans.push_back(mpp.size());
               mpp[arr[i]]--;
               if(mpp[arr[i]] ==0){
                    mpp.erase(arr[i]);
            
               }
               i++;
               j++;
           }
       }
            
        return ans;
        
    }
};