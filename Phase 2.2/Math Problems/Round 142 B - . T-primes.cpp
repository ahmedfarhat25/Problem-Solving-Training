/*---{وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ ۚ عَلَيْهِ تَوَكَّلْتُ وَإِلَيْهِ أُنِيبُ} ----------------- */
/*------------------  #Abu_Farhat  -----------------------------------*/
/*------------------#Farmer _ Coder----------------------------------*/
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define loop(n) for(int i=0;i<n;i++)
#define jloop(n) for(int j=0;j<n;j++)
#define loop1(n) for(int i=1;i<=n;i++)
#define all(v) v.begin(), v.end()
#define IN() freopen("input.txt", "r", stdin);
#define OUT() freopen("output.txt", "w", stdout);
#define test int t; cin >> t; while(t--){abufarhat();}
#define el <<"\n"
#define pi 3.14159265358979323846
using namespace std;
/*************************************************************/
/*********************{بسم الله الرحمن الرحيم}***************/
void abufarhat()
{
    ll  n = 1000005;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    ll t; cin >> t;
    while (t--)
    {
        ll x; cin >> x;
        double w = sqrt(x);
        if (w == int(w) && is_prime[w])cout << "YES\n";
        else cout << "NO\n";
    }

}
int main()
{
    IOS;
    // IN()
// OUT
//test
    abufarhat();

}