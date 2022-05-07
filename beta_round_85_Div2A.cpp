#include <bits/stdc++.h>
using namespace std;

// problem link : https://codeforces.com/contest/112/problem/A

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n1 = s1.length();
    int n2 = s2.length();

    for (int i = 0; i < n1; i++)
        if (s1[i] >= 'A' and s1[i] <= 'Z')
            s1[i] += 32;
    for (int i = 0; i < n2; i++)
        if (s2[i] >= 'A' and s2[i] <= 'Z')
            s2[i] += 32;

    if (s1 < s2)
        cout << "-1\n";
    else if (s1 > s2)
        cout << "1\n";
    else if (s1 == s2)
        cout << "0\n";
    return 0;
}