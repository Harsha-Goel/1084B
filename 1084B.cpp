#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX

int main(int argc,char const * argv[]){
    ll n,s;
    cin>>n>>s;
    ll a[n];
    ll sum=0;
    loop(i,0,n-1){
        cin>>a[i];
        sum+=a[i];
    }
    ll t=0;
    sort(a,a+n);
    if(sum<s){
        cout<<-1 nn;
    }
    else if(sum==s){
        cout<<0 nn;
    }
    else{
        loop(i,1,n-1){
            t+=(a[i]-a[0]);
        }
        if(t>=s){
            cout<<a[0] nn;
        }
        else{
            loop(i,1,a[0]+1){
                t+=n;
                if(t>=s){
                    cout<<(a[0]-i) nn;
                    break;
                }
            }
        }
    }
  
    
    return 0;
}