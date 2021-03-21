#include<bits/stdc++.h>
using namespace std;
void coinchange(int numberOfCoin[],int S,int n)
{
    sort(numberOfCoin,numberOfCoin+n);
    int j=n-1;
     int c;
     int count=0;
    while(S>0)
    {

       if(S>=numberOfCoin[j])
       {
           c= numberOfCoin[j];
       }
      else
       {
          --j;
          continue;
       }
        int num = S/c;
         count = count + num;

        S = S-num*c;

    }
    cout<<count;
}

int main()
{
    int n,i,S;
    cin>>n>>S;
    int numberOfCoin[n];
    for(i=0;i<n;i++)
    {
        cin>>numberOfCoin[i];
    }
    coinchange(numberOfCoin,S,n);
}
