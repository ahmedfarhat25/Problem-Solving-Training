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
#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <string>
#include <cmath>
#include <algorithm>
#define Palastine ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define loop(n) for(int i=0;i<n;i++)
#define jloop(n) for(int j=1;j<=n;j++)
#define loop1(n) for(int i=1;i<=n;i++)
#define dv vector<ll>
#define input(n,v) loop(n) { ll in; cin >> in; v.push_back(in);}
#define cin(vec) for(auto& i : vec) cin >> i
#define dvp vector<vector<ll>>
#define dm map<ll,ll>
#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define IN() freopen("input.txt", "r", stdin);
#define OUT() freopen("output.txt", "w", stdout);
#define test int t; cin >> t; while(t--){abufarhat();}
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
//////===========================================================
void abufarhat()
{
    ll a; string s ;cin>>a>>s;
    while(true)
    {
        a++;
        string tmp = to_string(a);
        string ans;
        for (size_t i = 0; i <sz(tmp);++i)
        {
            if (tmp[i]=='4' or tmp[i]=='7')
                ans.push_back(tmp[i]);
        }
        if(ans==s )
        {
            cout << a; return;
        }
    }
}

int32_t main()
{
    Palastine;
    // IN()
    //OUT()
    abufarhat();
    //test
}