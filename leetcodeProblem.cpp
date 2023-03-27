// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

vector<int> addToArrayForm(vector<int> &num, int k)
{
    string str;
    for (int i = 0; i < num.size(); i++)
    {
        char ch = num[i] - '0';
        cout << ch << endl;
        str = ch + str;
    }

    // for(auto i : str) cout << i << endl;

    string sum = to_string(std::stoi(str) + k);

    vector<int> ans;

    for (int i = 0; i < sum.length(); i++)
    {
        int number = sum[i] + '0';
        ans.push_back(number);
    }

    return ans;
}

int main()
{
    vector<int> num = {1, 2, 0, 0};
    int k = 34;

    string str = "";
    for (int i = 0; i < num.size(); i++)
    {
        char ch = num[i] + '0';
        str += ch;
    }

    string sum = to_string(stoi(str) + k);

    // cout << sum << endl;

    vector<int> ans;

    for (int i = 0; i < sum.length(); i++)
    {
        int number = sum[i] - '0';
        ans.push_back(number);
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}