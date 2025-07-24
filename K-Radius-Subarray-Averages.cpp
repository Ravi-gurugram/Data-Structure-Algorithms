class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
         vector<int>ans(nums.size(),-1) ;
          int n= nums.size() ;
          if(n<2*k+1)
            return ans ;
        int i=0,j=0 ; long long sum=0 ;
       for(;i<=2*k;i++)
          sum+=nums[i] ;
        ans[k]=(sum/(2*k+1)) ;
        for(int j=k+1;j<n-k;j++){
            sum+=nums[i] ;i++ ;
            sum-=nums[j-k-1] ;
            ans[j]= sum/(2*k+1) ;
        }


return ans ;
    }
};