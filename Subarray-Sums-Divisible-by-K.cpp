class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1 ;

        int pre=0, total=0;
        for(int i=0;i<nums.size();i++){
            pre+=nums[i] ;
            int rem= pre%k ;
               
            if(rem<0)
               rem+=k ;
            if(m.count(rem))
              {
                total+= m[rem] ;
                m[rem]++ ;
              }
              else{
                m[rem]++ ;
              }
        }


return total ;
        
    }
};