class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int j=0 ,count=0; int n= nums.size() ;
        int maxi = *max_element(nums.begin(),nums.end()) ;
        long long ans =0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==maxi)
           {count++ ; }
           
           while(count>=k){
            ans+=n-i ;
            if(nums[j]==maxi)
              count-- ;
            j++ ;
           }
            
        }
         
return  ans ;


    }
};