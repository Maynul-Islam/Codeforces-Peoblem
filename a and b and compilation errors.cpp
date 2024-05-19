#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0;
    cin>>n;
    long long int a[n];
    long long int b[n];
    long long int c[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    sort(b,b+(n-1));
    for(int i=0;i<n-2;i++)
    {
        cin>>c[i];
    }
    sort(c,c+(n-2));

    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<a[i]<< " ";break;
        }
        else x++;
    }
    if(x==n-1) cout<< a[n-1]<< " ";
    for(int i=0;i<n-2;i++)
    {
        if(b[i]!=c[i])
        {
            cout<<b[i]<< " ";break;

        }
        else y++;
    }
    if(y==n-2)
    {
        cout<<b[n-2];
    }
    return 0;
}
