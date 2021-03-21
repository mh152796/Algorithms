#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mini;
    for(i=0; i<n-1; i++)
    {
        mini=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[mini]>a[j])
            {
                mini = j;
            }
        }
        swap(a[i],a[mini]);
    }
    cout<<"[ ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
}








