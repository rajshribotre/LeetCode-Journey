class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int j=1;
        int n=nums.size();
        if(n==0)
            return 0;
        
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                count++;
            } else {
                count=1;
            }
            if(count<=2){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
        
    }
};