// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

void aj()
{
    int n, a;
    cin >> n >> a;
    a--;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    if (a == 0 or a == n - 1)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 1)
            {
                cnt++;
            }
        }

        cout << cnt << kk;
        return;
    }

    vector<int> l;
    vector<int> r;
    for (int i = 0; i < a; i++)
    {
        l.push_back(ar[i]);
    }

    for (int i = a + 1; i < n; i++)
    {
        r.push_back(ar[i]);
    }

    reverse(l.begin(), l.end());

    int cnt = 0;

    if (ar[a] == 1)
    {
        cnt++;
    }

    int mini = min(l.size(), r.size());
    int maxi = max(l.size(), r.size());

    // for (int i = 0; i < l.size(); i++)
    // {
    //     cout << l[i] << " ";
    // }
    // cout << kk;

    // for (int i = 0; i < r.size(); i++)
    // {
    //     cout << r[i] << " ";
    // }
    // cout << kk;

    for (int i = 0; i < mini; i++)
    {
        if (l[i] == 1 and r[i] == 1)
        {
            cnt++;
            cnt++;
        }
    }

    for (int i = mini; i < l.size(); i++)
    {
        if (l[i] == 1)
        {
            cnt++;
        }
    }

    for (int i = mini; i < r.size(); i++)
    {
        if (r[i] == 1)
        {
            cnt++;
        }
    }

    cout << cnt << kk;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    aj();
    // }
    return 0;
}

