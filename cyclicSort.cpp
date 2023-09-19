#include<bits/stdc++.h>

using namespace std;

void cyclicSort(vector<int>& nums, int& n){

    int i = 0;
    while (i < n) {
        int j = nums[i] - 1;
        if (nums[i] != nums[j] && nums[i] != i+1) swap(nums[i], nums[j]);
        else i++;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {3,2,1,4,5};
    int n = nums.size();
    cyclicSort(nums, n);
    
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }cout << endl;
    
    return 0;
}
