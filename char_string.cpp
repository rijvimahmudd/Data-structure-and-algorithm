#include <bits/stdc++.h>

using namespace std;

char toLowerCase(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return a;
    }
    else
    {
        char temp = a - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }

    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char getMaxOccurringCharacter(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;

        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
            // cout << number << endl;
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAnswer = 'a' + ans;
    return finalAnswer;
}

int main(int argc, char const *argv[])
{
    // char name[20];

    // cout << "enter your name " << endl;
    // cin >> name;

    // cout << "your name is " << name << endl;

    // int len = getLength(name);

    // cout << "length is " << len << endl;

    // reverse(name, len);

    // cout << "reverse name is " << name << endl;
    // cout << "palindrome or not " << checkPalindrome(name, len) << endl;

    string s;
    cin >> s;

    cout << getMaxOccurringCharacter(s) << endl;

    return 0;
}
