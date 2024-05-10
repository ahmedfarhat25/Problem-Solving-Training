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
#define IN() freopen("input.txt", "arr2", stdin);
#define OUT() freopen("output.txt", "w", stdout);
#define test int t; cin >> t; while(t--){abufarhat();cout el;}
#define el <<"\n"
#define MAX_N 100005
#define pi 3.14159265358979323
//const ll MOD= 1000000007;
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops,O3")
#pragma GCC target("avx2,tune=native")
//const string pi="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
/////*************************************************************/
/////*********************{بسم الله الرحمن الرحيم}***************/
//////============================================================
//
//
//
//////===========================================================;
vector<int>arr1(100005),arr2(100005);
void abufarhat()
{
    int n,a1=0,a2=0,ans=0,cnt=0;cin>>n;
    loop(n)
    {
        cin>>arr1[i]>>arr2[i];
        a1+=arr1[i];
        a2+=arr2[i];
    }
    ans=abs(a1-a2);
    loop(n)
    {
        a1+=arr2[i]-arr1[i];
        a2+=arr1[i]-arr2[i];
        if(abs(a1 - a2)>ans)
        {
            ans=abs(a1-a2);
            cnt=i+1;
        }
        a2+=arr2[i]-arr1[i];
        a1+=arr1[i]-arr2[i];
    }
    cout << cnt;

}
int32_t main()
{
    // Palastine;
    //IN()
    //OUT()
    abufarhat();
    // test
}

