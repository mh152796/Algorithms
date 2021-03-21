#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int temp=0;
    for(i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"[ ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
}







