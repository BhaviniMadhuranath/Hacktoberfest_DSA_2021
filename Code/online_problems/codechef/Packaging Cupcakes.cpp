#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long n;
        cin>>n;
        if(n%2 == 0)
        cout<<(n/2)+ 1<<endl;
        if(n%2 ==1)
        cout<<(n+ 1)/2<<endl;
    }
    return 0;
}
