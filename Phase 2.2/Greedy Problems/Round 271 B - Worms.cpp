/*---{وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ ۚ عَلَيْهِ تَوَكَّلْتُ وَإِلَيْهِ أُنِيبُ} -------------------- */
/*------------------  #Abu_Farhat  -----------------------------------*/
/*- -----------------#Farmer _ Coder----------------------------------*/
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define loop(n) for(int i=0;i<n;i++)
#define jloop(n) for(int j=0;j<n;j++)
#define loop1(n) for(int i=1;i<=n;i++)
#define all(v) v.begin(), v.end()
#define sz(x) (int)(x).size()
#define IN() freopen("input.txt", "r", stdin);
#define OUT() freopen("output.txt", "w", stdout);
#define test int t; cin >> t; while(t--){abufarhat();}
#define el <<"\n"
#define pi 3.14159265358979323846
using namespace std;
ll counter[100000];
ll allo[100000];
/*************************************************************/
/*********************{بسم الله الرحمن الرحيم}***************/
void abufarhat()
{
    ll n;cin>>n;ll sum=0;
    loop(n)
    {
        cin>>counter[i];
        sum+=counter[i];
        allo[i+1]=sum;
    }
    ll m;
    cin>>m;
    loop(m)
    {
        ll x;cin>>x;
        ll star=1,en=n,mid;
        while(star+1<=en)
        {
            mid=star+(en-star)/2;
            if(allo[mid]>=x)
            {
                en = mid;
            }

            else
            {
                star=mid+1;
            }

        }
        cout<<star el;
    }
}
int main()
{
    IOS;
    //  IN()
    // OUT()
    abufarhat();
    //test
}