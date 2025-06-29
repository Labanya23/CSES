#include<bits/stdc++.h>
using namespace std;
int main()
{

        long long n;
        cin>>n;

        for(long long i=1;i<=n;i++){
            long long position=i*i;
            long long way=(position*(position-1))/2;
            if(i>2){
                way-=4*(i-1)*(i-2);
            }

        cout<<way<<endl;

    }
    return 0;
}
