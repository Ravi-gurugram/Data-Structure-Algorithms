class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int result =0, i=0,j=0;
        int n= nums.size() , count=0;

        while(j<n){
            if(nums[j]==0)
               count++ ;
            while(count>k){
                if(nums[i]==0)
                   count--;
                i++ ;
            }
            result= max(result, j-i+1) ;
            j++ ;
        }


return result ;

    }
};