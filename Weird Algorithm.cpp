#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  /*ll n,s=0;
  cin>>n;
  cout<<n;
   while(n>1)
    {
        if(n%2==0)
            n/=2;
        else
            n=3*n+1;
        cout<<""<<'\n';
    }


    for(int i=1;i<n;++i){//Explanation:first print here n value 3.then the value is not even that time it goes to
                           else condition it check an the value come 10
                           in here its not 1 when n value come 1 it will be stop and print it
                           by the again check come 5 then go else 16 again go  if 8 and if 4 anf if
                           2 and if now it 1.and its now print all the value//the logic
        int a;
        cin>>a;
        s+=a;
    }
    cout<<n*(n+1)/2-s;
    */
    ll n;
    cin>>n;
    cout<<n;
    while(n>1){
        if(n%2==0)
            n/=2;
        else
            n=3*n+1;
        cout<<" "<< n;
    }
    return 0;
   }
