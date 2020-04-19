/*You are given a sorted array consisting of only integers where every element appears exactly twice,
 except for one element which appears exactly once. Find this single element that 
 appears only once.*/


int singleNonDuplicate(vector<int>& nums) {
        int x = 0;
        for(int n : nums){
            x = n ^ x;
        }
        return x;
    }