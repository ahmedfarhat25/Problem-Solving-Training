/*---{وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ ۚ عَلَيْهِ تَوَكَّلْتُ وَإِلَيْهِ أُنِيبُ} -------------------- */
/*------------------  #Abu_Farhat  -----------------------------------*/
/*- -----------------#Farmer _ Coder----------------------------------*/
/*----------------------------------فلسطين حرة------------------------*/
/*
 *
/| | |  ____|  __ \|  ____|  ____| |  __ \ /\   | |        /\    / ____|__   __|_   _| \ | |  ____|
| | | |__  | |__) | |__  | |__    | |__) /  \  | |       /  \  | (___    | |    | | |  \| | |__
| | |  __| |  _  /|  __| |  __|   |  ___/ /\ \ | |      / /\ \  \___ \   | |    | | | . ` |  __|
| | | |    | | \ \| |____| |____  | |  / ____ \| |____ / ____ \ ____) |  | |   _| |_| |\  | |____
| | |_|    |_|  \_\______|______| |_| /_/    \_\______/_/    \_\_____/   |_|  |_____|_| \_|______|
| |
 */
#include <bits/stdc++.h>
#define Palastine ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define int long long int
#define loop(n) for(int i=0;i<n;i++)
#define jloop(n) for(int j=0;j<n;j++)
#define loop1(n) for(int i=1;i<=n;i++)
#define cin(vec) for(auto& i : vec) cin >> i
#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define IN() freopen("input.txt", "r", stdin);
#define OUT() freopen("output.txt", "w", stdout);
#define test int t; cin >> t; while(t--){abufarhat();}
#define el <<"\n"
#define pi 3.14159265358979323846
using namespace std;
/*************************************************************/
/*********************{بسم الله الرحمن الرحيم}***************/
//====================================================




// ============================================

void abufarhat()
{
    int a, b; cin >> a >> b;
    string s; cin >> s;
    loop(b)
    {
        jloop (s.size()-1)
        {
            if (s[j] == 'B' and s[j+1] == 'G')
            {
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    cout << s el;


}
int32_t main()
{
    Palastine;
    //IN()
    //OUT()
    abufarhat();
    //test

}