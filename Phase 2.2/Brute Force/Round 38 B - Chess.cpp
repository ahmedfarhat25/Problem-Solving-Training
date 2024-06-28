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
#include<bits/stdc++.h>
#define Palastine ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define loop(n) for(int i=0;i<n;i++)
#define jloop(n) for(int j=0;j<n;j++)
#define loop1(n) for(ll i=1;i<=n;i++)
#define jloop1(n) for(ll j=1;j<=n;j++)
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
//#pragma GCC optimize("Ofast,unroll-loops,O3")
//#pragma GCC target("avx2,tune=native")
//const string pi="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
/////*************************************************************/
/////*********************{بسم الله الرحمن الرحيم}***************/
//////============================================================
//
//
//
////////===========================================================
const ll  N = 5e6 + 5, MOD = 1e9 + 7, MAX = 500;
bool prime[N];
void sieve()
{
    memset(prime, 1, sizeof prime);
    prime[0] = prime[1] = 0;
    for (ll i = 2; i < N / i; i++)
        if (prime[i])
            for (ll j = i * i; j < N; j += i)
                prime[j] = 0;
}
bool ok(int a,int b){return (a<8 && b<8 && a>=0 && b>=0);}
void  abufarhat()
{
    string a,b;pair<int,int>cur;bool arr[8][8];int sum=0;
    cin >> a >> b;
    loop(8)jloop(8)arr[i][j]= true;
    cur.first=a[0]-'a',cur.second=a[1]-'0'-1;
    loop(8)
    {
        if(ok(cur.first,cur.second+i))
            arr[cur.first][cur.second+i]= false;
        if(ok(cur.first,cur.second-i))
            arr[cur.first][cur.second-i]= false;
        if(ok(cur.first+i,cur.second))
            arr[cur.first+i][cur.second]= false;
        if(ok(cur.first-i,cur.second))
            arr[cur.first-i][cur.second]= false;
    }
    if(ok(cur.first+1,cur.second+2))
        arr[cur.first+1][cur.second+2]= false;
    if(ok(cur.first-1,cur.second+2))
        arr[cur.first-1][cur.second+2]= false;
    if(ok(cur.first+2,cur.second+1))
        arr[cur.first+2][cur.second+1]= false;
    if(ok(cur.first+2,cur.second-1))
        arr[cur.first+2][cur.second-1]= false;
    if(ok(cur.first-1,cur.second-2))
        arr[cur.first-1][cur.second-2]= false;
    if(ok(cur.first+1,cur.second-2))
        arr[cur.first+1][cur.second-2]= false;
    if(ok(cur.first-2,cur.second-1))
        arr[cur.first-2][cur.second-1]= false;
    if(ok(cur.first-2,cur.second+1))
        arr[cur.first-2][cur.second+1]= false;
    cur.first=b[0]-'a',cur.second=b[1]-'0'-1;
    if(ok(cur.first+1,cur.second+2))
        arr[cur.first+1][cur.second+2]= false;
    if(ok(cur.first-1,cur.second+2))
        arr[cur.first-1][cur.second+2]= false;
    if(ok(cur.first+2,cur.second+1))
        arr[cur.first+2][cur.second+1]= false;
    if(ok(cur.first+2,cur.second-1))
        arr[cur.first+2][cur.second-1]= false;
    if(ok(cur.first-1,cur.second-2))
        arr[cur.first-1][cur.second-2]= false;
    if(ok(cur.first+1,cur.second-2))
        arr[cur.first+1][cur.second-2]= false;
    if(ok(cur.first-2,cur.second-1))
        arr[cur.first-2][cur.second-1]= false;
    if(ok(cur.first-2,cur.second+1))
        arr[cur.first-2][cur.second+1]= false;
    loop(8)jloop(8)if(arr[i][j])sum++;
    cout << sum-1;
}
int main()
{
    Palastine;
    // IN()
    //OUT()
    abufarhat();
//test

}

