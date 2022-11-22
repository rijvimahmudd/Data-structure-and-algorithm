#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &weights, int n, int days, int mid)
{
    cout << "mid " << mid << endl;
    // vector<int> weights = {10, 20, 30, 40};
    int day = 1;
    int totalWeight = 0;
    for (int i = 0; i < n; i++)
    {
        if (totalWeight + weights[i] <= mid)
        {

            cout << "total weight =  total weight : " << totalWeight << " + i : " << weights[i] << endl;
            totalWeight += weights[i];
        }
        else
        {
            day++;
            cout << "days " << day << endl;
            if (day > days || weights[i] > mid)
            {
                cout << " I Triggered \n";
                return false;
            }
            totalWeight = weights[i];
            cout << "total weight else " << totalWeight << endl;
        }
    }
    return true;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int s = 0;
    int sum = 0;
    int ans = -1;
    int n = weights.size();

    for (int i = 0; i < n; i++)
    {
        sum += weights[i];
    }

    int e = sum;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(weights, n, days, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> weights = {10, 20, 30, 40};
    int day = 2;
    int ans = shipWithinDays(weights, day);
    cout << ans;
    return 0;
}
