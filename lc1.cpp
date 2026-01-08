//-----method 1----------

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
   
        for(int k=0;k<nums.size();k++){
           for(int m=k+1;m<nums.size();m++){

                int sum=nums[k]+nums[m];
                if(sum==target){ 
                   
                    return {k,m};
                
                }
                
           }
        }

return {};
    }
};
//-----------method 2----------------


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){

            if(mpp.find(target-nums[i])!=mpp.end()){
                return {mpp[target-nums[i]],i};
            }

                mpp.insert({nums[i], i});

        }
        return{};
    }
};
