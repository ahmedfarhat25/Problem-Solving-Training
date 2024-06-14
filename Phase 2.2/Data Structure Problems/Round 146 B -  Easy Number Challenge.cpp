/* ----{وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ ۚ عَلَيْهِ تَوَكَّلْتُ وَإِلَيْهِ أُنِيبُ} ----------------- */
/*------------   --#  Abu_Farhat    -------------------------------*/
/*------------------#Farmer _ Coder-------------------------------*/
#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define ld long double

#define test int t; cin >> t; while(t--){solve();}
#define sb << '\n'
#define pi 3.14159265358979323846
using namespace std;
/* **************************************************************/
void solve()//solve
{

}
const int N = 1e6 + 5;
int main() {
    ll a , b , c , sum = 0;
    cin >> a >> b >> c;
    const int mod1 = 1000000007;
    vector<ll>v(N , 1);
    for (int i = 2; i <= N; ++i)
    {
        for (int j = i; j <= N; j += i)
        {
            v[j]++;
        }
    }
    for (int i = 1; i <= a; ++i)
    {
        for (int j = 1; j <= b; ++j)
        {
            for (int k = 1; k <= c; ++k)
            {
                sum += v[i * j * k];
                sum %= mod1;
            }
        }
    }
    cout<<sum;
}