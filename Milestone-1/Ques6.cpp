//Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ans=0;
        for(int x:nums){
            if(cnt==0){
                ans=x;
            }
            if(x==ans){
                cnt+=1;
            }
            else{
                cnt-=1;
            }
        }
        return ans;
        
    }
};
