class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int temp;
        int i,j,k;
        for(i=0; i<n; i++)      // Using Selection sort
        {
            for(j=k=i; j<n+1; j++)
            {
                if (nums[k] > nums[j])
                {
                    k=j;
                }
            }
            temp = nums[i];
            nums[i] = nums[k];
            nums[k] = temp;
        }
    }
};