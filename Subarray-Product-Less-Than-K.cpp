class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prod=1 , count=0;
        int start=0,end=0;
        int n= nums.size() ;
        while(end<n){
            prod*= nums[end] ;
           while(prod>=k&&start<=end){
            prod/= nums[start++] ;
           }

            count+= 1+(end-start) ;
            end++ ;
        }


        return count ;
    }
};