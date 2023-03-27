#include <bits/stdc++.h>
using namespace std;

void printNum(int n = 1)
{

    if (n == 10)
    {
        return;
    }

    printNum(n + 1);
    cout << n << endl;
}

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {

        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

int main(int argc, char const *argv[])
{
    // vector<int> nums = {1, 2, 3, 4};
    // vector<int> output;
    // vector<vector<int>> ans;
    // int index = 0;
    // solve(nums, output, index, ans);

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    printNum();
    return 0;
}
