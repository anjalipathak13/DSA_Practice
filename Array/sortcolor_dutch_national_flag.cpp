class Solution {
public:
    void swap(int *a,int *b)
    {
        int t=0;
        t=*a;
        *a=*b;
        *b=t;
    }
    void sortColors(vector<int>& nums) {
        int li=nums.size()-1;
        int l=0,h=li,mid=0;
        while(mid<=h)
        {
            
        switch(nums[mid]){
            case 0:
            swap(&nums[l++],&nums[mid++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(&nums[mid],&nums[h--]);
                break;
                
        }
        }
    }
};