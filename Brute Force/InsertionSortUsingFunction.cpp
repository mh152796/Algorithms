#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int a[],int n)
{
    int i;
    for(i=1; i<n; i++)
    {
        int key = a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"[ ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    InsertionSort(a,n);
}







