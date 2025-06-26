#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int maxLen = 1, count=1;
     for(int i=1;i<(int)s.size();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            if(count>maxLen)
                maxLen = count;
            count=1;
        }
     }
     if(count>maxLen)
        maxLen = count;
     cout<<maxLen<<endl;
     return 0;
}
