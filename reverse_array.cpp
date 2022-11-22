#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 3, e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> v;

    v.insert(v.end(), {11, 7, 3, 12, 4});
    // v.push_back(11);
    // v.push_back(7);
    // v.push_back(3);
    // v.push_back(12);
    // v.push_back(4);
    print(v);
    vector<int> ans = reverse(v);

    print(ans);

    cout << "Hi";
    return 0;
}
