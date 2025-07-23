class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0,end=0 ;
        int pre=0; int len=INT_MAX;
        while(end<nums.size()){
            pre+=nums[end] ;
            
            while(pre>=target&&start<=end){
               
               len= min(len,end-start+1) ;
               pre-=nums[start++] ;
            }


            end++ ;
        }


return len ==INT_MAX ? 0: len ;

    }
};