////////\*------------------  #Abu_Farhat  -----------------------------------*/
////////\*----------------------------------    #فلسطين حرة  --------------------*/
///////*
////// *
////// | |  ____|  __ \|  ____|  ____| |  __ \ /\   | |        /\    / ____|__   __|_   _| \ | |  ____|
////// | |__  | |__) | |__  | |__    | |__) /  \  | |       /  \  | (___    | |    | | |  \| | |__
////// |  __| |  _  /|  __| |  __|   |  ___/ /\ \ | |      / /\ \  \___ \   | |    | | | . ` |  __|
////// | |    | | \ \| |____| |____  | |  / ____ \| |____ / ____ \ ____) |  | |   _| |_| |\  | |____
////// |_|    |_|  \_\______|______| |_| /_/    \_\______/_/    \_\_____/   |_|  |_____|_| \_|______|
////// */
////#include<bits/stdc++.h>
////#define Palastine ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
////#define ll long long
////#define ld long double
////#define loop(n) for(int i=0;i<n;i++)
////#define jloop(n) for(int j=1;j<=n;j++)
////#define loop1(n) for(ll i=1;i<=n;i++)
////#define jloop1(n) for(ll j=1;j<=n;j++)
////#define dv vector<ll>
////#define input(n,v) loop(n) { ll in; cin >> in; v.push_back(in);}
////#define cin(vec) for(auto& i : vec) cin >> i
////#define dvp vector<vector<ll>>
////#define dm map<ll,ll>
////#define all(v) v.begin(), v.end()
////#define sz(x) (int)(x).size()
////#define IN() freopen("input.txt", "r", stdin);
////#define OUT() freopen("output.txt", "w", stdout);
////#define test int t; cin >> t; while(t--){abufarhat();}
////#define el <<"\n"
////#define MAX_N 100005
////#define pi 3.14159265358979323
//////const ll MOD= 1000000007;
////using namespace std;
//////#pragma GCC optimize("Ofast,unroll-loops,O3")
//////#pragma GCC target("avx2,tune=native")
//////const string pi="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
/////////*************************************************************/
/////////*********************{بسم الله الرحمن الرحيم}***************/
//////////============================================================
//////
//////
//////
//////////===========================================================
//#include<bits/stdc++.h>
//using namespace std;
//
//long long freq[30];
//set <long long >st;
//void  abufarhat()
//{
//
//}
//
//int main()
//{
// //  Palastine;
//    // IN()
//    //OUT()
// // abufarhat();
//  //test
//}
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{

    int arr[5][5]; int mx = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j) {
            cin >>arr[i][j];
        }
    }
    int num[5]={0,1,2,3,4}; int sum=0;
    do
    {
        sum = arr[num[0]][num[1]] + arr[num[1]][num[0]];
        sum += arr[num[2]][num[3]] + arr[num[3]][num[2]];
        sum += arr[num[1]][num[2]] + arr[num[2]][num[1]];
        sum += arr[num[3]][num[4]] + arr[num[4]][num[3]];
        sum += arr[num[2]][num[3]] + arr[num[3]][num[2]];
        sum += arr[num[3]][num[4]] + arr[num[4]][num[3]];

        mx = max(mx,sum);
    }
    while(next_permutation(num, num+5));
    cout << mx << endl;
}