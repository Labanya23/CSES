#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    long long int n,s=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        s+=a[i];
    }
    long long int v=n*(n+1);
    long long  int p=v/2;
    cout<<p-s<<endl;
}
