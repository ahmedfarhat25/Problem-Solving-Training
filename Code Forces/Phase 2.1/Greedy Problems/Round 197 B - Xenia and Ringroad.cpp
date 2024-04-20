/*---{وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ ۚ عَلَيْهِ تَوَكَّلْتُ وَإِلَيْهِ أُنِيبُ} ----------------- */
/*------------------  #Abu_Farhat  -----------------------------------*/
/*------------------#Farmer _ Coder----------------------------------*/
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long
#define ld long double
#define loop(n) for(int i=0;i<n;i++)
#define jloop(n) for(int j=0;j<n;j++)
#define loop1(n) for(int i=1;i<=n;i++)
#define all(v) v.begin(), v.end()
#define IN() freopen("input.txt", "r", stdin);
#define OUT() freopen("output.txt", "w", stdout);
#define test int t; cin >> t; while(t--){abufarhat();}
#define el <<"\n"
#define pi 3.14159265358979323846
using namespace std;
/*************************************************************/
/*********************{بسم الله الرحمن الرحيم}***************/
// bool isPalindrome(const string& s)
// {
//     int left = 0;
//     int right = s.length() - 1;
//     while (left < right)
//     {
//         if (s[left] != s[right])
//         {
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }
//shift f6 replace  variable name in all programm
//struct stackk
//{
//    int arr[100]{};ll top =-1;
//    void push(int x)
//    {
//        if(top==99) return;
//        top ++;
//        arr[top]=x;
//    }
//    void pop()
//    {
//        if (isEmpty()) return;
//        top--;
//    }
//    ll topp ()
//    {
//        if(isEmpty()) return -1;
//        return arr[top];
//    }
//    bool isEmpty()
//    {
//        if (top==-1) return true;
//        else return false;
//    }
//};
void abufarhat()
{
    ll h=0,m=0, n = 0, cnt = 0, tp = 0; cin >> h >> m >> n;
    cnt+=n-1;tp=n;m--;
    while (m--)
    {
        cin>>n;
        if (n>tp) cnt+=n-tp;
        else if (n < tp) cnt+=(n+(h-tp));
        tp=n;
    }
    cout << cnt;
}
int main()
{
    IOS;
    //IN()
    //OUT()
    abufarhat();
}