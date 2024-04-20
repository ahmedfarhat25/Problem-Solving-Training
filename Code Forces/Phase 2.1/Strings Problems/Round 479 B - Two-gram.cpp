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
    map<string,ll>mp;
    string str,res; ll n = 0, mx = 0; cin >> n >> str;
    loop(n-1)
    {
        string s; s += str[i]; s += str[i + 1];
        mp[s]++;
        if (mp[s] >= mx) { mx = mp[s]; res = s; }
    }
    cout << res;
}
int main()
{
    //   IN()
    // OUT()
    abufarhat();
}