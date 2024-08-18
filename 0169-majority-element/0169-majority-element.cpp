class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int number=0;
        for(int i: nums){
            if(count==0){
                number=i;
            }
            if(i==number){
                count+=1;
            } else {
                count-=1;
            }
        }
        return number;
    }
};