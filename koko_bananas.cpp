#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>

using namespace std;

int hoursRequired(const vector<int> &piles, int k)
{
    int h = 0;
    if (k == 0)
        return -1;
    for (int i : piles)
    {
        if (i % k != 0)
        {
            h++;
        }

        h += (i / k);
    }
    return h;
}

int main(int argc, char const *argv[])
{
    vector<int> piles = {3, 6, 7, 11};
    int H = 8;
    int sum = 0;
    int mx = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        sum += piles[i];
        mx = max(mx, piles[i]);
    }
    int l = sum / H, r = mx, ans;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        int ans = hoursRequired(piles, mid);
        // If hours required is greater than our limit, ignore mid
        if (ans > H)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << l;
    return 0;
}
