#include <bits/stdc++.h>
using namespace std;
int binary_s(int a[],int n,int ch)
{
   int l=0;
  int h=n-1;

    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]<ch)
        {
            l=mid+1;
        }
        else if(a[mid]>ch)
        {
            h=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
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

    int ch;
    cin>>ch;
    int c = binary_s(a,n,ch);
    if(c==-1)
        cout<<"Not found."<<endl;
    else
        cout<<"found"<<endl;
}












