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
#define loop1(n) for(ll i=1;i<=n;i++)
#define jloop1(n) for(ll j=1;j<=n;j++)
#define dv vector<ll>
#define input(n,v) loop(n) { ll in; cin >> in; v.push_back(in);}
//#define cin(vec) for(auto& i : vec) cin >> i
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
//#pragma GCC optimize("Ofast,unroll-loops,O3")
//#pragma GCC target("avx2,tune=native")
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
    string s; ll x=0,y=0,z=0;
    for(int j=0 ; j<3 ; j++)
    {
        cin>>s;
        if(s[1]=='>')
        {
            if(s[0]=='A') x++;
            else if(s[0]=='B') y++;
            else if(s[0]=='C') z++;
        }
        else if(s[1]=='<')
        {
            if(s[2]=='A') x++;
            else if(s[2]=='B') y++;
            else if(s[2]=='C') z++;
        }
    }
    if(x > y and x > z and y > z)    cout << "CBA";
    else if(x > y and x > z and z > y) cout << "BCA";
    else if(z > x and z > y and y > x) cout << "ABC";
    else if(z > x and z > y and x > y) cout << "BAC";
    else if(y > x and y > z and z > x) cout << "ACB";
    else if(y > x and y > z and x > z) cout << "CAB";
    else cout<<"Impossible";
}

int32_t main()
{
    // Palastine;
    // IN()
    //OUT()
    abufarhat();
    //test

}
