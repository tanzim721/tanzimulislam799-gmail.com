#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef double D;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef vector<vi> vvi;
const int mod = (int)1e7+7;




int main()
{
    faster();


    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a,b;
        vi x,y;
        for(int i=0;i<n;i++){
            cin>>a;
            x.push_back(a);
        }
        sort(x.begin(),x.end());
        for(int i=0;i<n;i++){
            cin>>b;
            y.push_back(b);
        }
        sort(y.rbegin(),y.rend());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(y[i]+x[i] <= m){
                cnt++;
            }
        }
        if(cnt==n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }


    return 0;
}





