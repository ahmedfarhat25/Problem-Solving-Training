////\*------------------  #Abu_Farhat  -----------------------------------*/
////\*----------------------------------    #فلسطين حرة  --------------------*/
///*
// *
// | |  ____|  __ \|  ____|  ____| |  __ \ /\   | |        /\    / ____|__   __|_   _| \ | |  ____|
// | |__  | |__) | |__  | |__    | |__) /  \  | |       /  \  | (___    | |    | | |  \| | |__
// |  __| |  _  /|  __| |  __|   |  ___/ /\ \ | |      / /\ \  \___ \   | |    | | | . ` |  __|
// | |    | | \ \| |____| |____  | |  / ____ \| |____ / ____ \ ____) |  | |   _| |_| |\  | |____
// |_|    |_|  \_\______|______| |_| /_/    \_\______/_/    \_\_____/   |_|  |_____|_| \_|______|
// */
#include <bits/stdc++.h>
#define Palastine ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
//#define int long long int
#define loop(n) for(int i=0;i<n;i++)
#define jloop(n) for(int j=1;j<=n;j++)
#define loop1(n) for(int i=1;i<=n;i++)
#define cin(vec) for(auto& i : vec) cin >> i
#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define IN() freopen("input.txt", "r", stdin);
#define OUT() freopen("output.txt", "w", stdout);
#define test int t; cin >> t; while(t--){abufarhat();}
#define el <<"\n"
#define MAX_N 100005
//#define pi=  31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
//const ll MOD= 1000000007;
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops,O3")
#pragma GCC target("avx2,tune=native")
const string pi="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
/////*************************************************************/
/////*********************{بسم الله الرحمن الرحيم}***************/
//////============================================================
//
//
//
//////===========================================================

vector<int>freq(1000001,0);
//const int N=2e5;
//const int MAX_N= 10000;
int getDigit(string s)
{
    return accumulate(s.begin(),s.end(),0)-s.size()*'0';
}

void abufarhat()
{
    int n,cnt=0 ; cin >> n;
    map<string,string > mp; map<string,int > mp1;
    vector<string>v;
    loop(n)
    {
        string a,b;cin>>a>>b;v.push_back(a);
        if(mp1[a])
        {
            mp[mp[a]]=b;
            mp[b]=mp[a];mp1[b]++;
        }
        else if(!mp1[b])
        {
            mp[a]=b;mp[b]=a;mp1[b]++;
            cnt++;
        }
    }
    cout << cnt el;
    loop(n)
    {
        if(!mp1[v[i]])cout<<v[i]<<" "<<mp[v[i]]el;
    }
}
int32_t main()
{
    Palastine;
    // IN()
// OUT()
    abufarhat();
//test
}