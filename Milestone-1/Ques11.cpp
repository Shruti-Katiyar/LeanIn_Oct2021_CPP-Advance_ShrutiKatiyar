//Make a Distinct Digit Array
class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums){
   	    // Code here
   	    int n=nums.size();
   	    unordered_set<int> s;
   	    vector<int> ans;
   	    for(int i=0;i<n;i++){
   	        int x=nums[i];
   	        while(x!=0){
   	            int rem=x%10;
   	            s.insert(rem);
   	            x=x/10;
   	        }
   	    }
   	    for(auto ele:s){
   	        ans.push_back(ele);
   	    }
   	    sort(ans.begin(),ans.end());
   	    return ans;
   	
   	}    
};

