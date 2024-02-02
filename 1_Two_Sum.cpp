class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first = 0, second;
        vector<int> result;
         while(first<nums.size()-1)
         {
             second = first+1;            
              while(second<nums.size())
                 {    
                        if((nums[first] + nums[second])==target)
                            { 
                                result.push_back(first);
                                result.push_back(second);
                                return result;     
                            }                          
                    second++;                  
                 }
             first++;
         }
    return result;
    }
};
