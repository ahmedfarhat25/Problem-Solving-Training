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
#pragma once
#define Palastine ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
//#define int long long int
#define loop(n) for(int i=0;i<n;i++)
#define jloop(n) for(int j=0;j<n;j++)
#define loop1(n) for(int i=1;i<n;i++)
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
const string pi="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
/////*************************************************************/
/////*********************{بسم الله الرحمن الرحيم}***************/
//////============================================================
//
//
//
//////===========================================================

int editedsort(int arr[], int n)
{
    int cnt=0;
    loop(n-1)
    {
        jloop(n-i-1)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                cnt++;
            }
        }
    }
    return cnt;
}
vector<int>freq(1000001,0);
//const int N=2e5;
void abufarhat()
{
    int n; cin>>n; string s,res; cin>>s;
    if(n%4==0)
    {
        int a=0,c=0,g=0,t=0;
        loop (sz(s))
        {
            if(s[i]=='A')a++;
            else if(s[i]=='C')c++;
            else if(s[i]=='G')g++;
            else if(s[i]=='T')t++;
        }
        if(a<n/4)
        {
            loop(sz(s))

            {
                if(s[i]=='?')
                {
                    s[i]='A';
                    a++;
                    if(a==n/4)
                    {
                        break;
                    }
                }
            }
        }
        if(c<n/4)
        {
            loop(sz(s))
            {
                if(s[i]=='?')
                {
                    s[i]='C';
                    c++;
                    if(c==n/4) break;

                }
            }
        }
        if(t<n/4)
        {
            loop(sz(s))
            {
                if(s[i]=='?')
                {
                    s[i]='T';
                    t++;
                    if(t==n/4) break;
                }
            }
        }
        if(g<n/4)
        {
            loop(sz(s))
            {
                if(s[i]=='?')
                {
                    s[i]='G';
                    g++;
                    if(g==n/4) break;
                }
            }
        }
        if(a==n/4 and c==n/4 and g==n/4 and t==n/4) cout << s el;
        else cout <<"===\n";
    }

    else cout <<"===\n";
}
int32_t main()
{
    //   Palastine;
    // IN()
// OUT()
    abufarhat();
//test
}