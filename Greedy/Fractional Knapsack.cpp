#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    float aV[N],aW[N],K;
    float aR[N],sum=0.00;
    for(int i=0;i<N;i++)
    {
        cin>>aW[i]>>aV[i];
        aR[i] = aV[i]/ aW[i];
    }
    cin>>K;
   for(int i=0;i<N;i++)
   {
       for(int j=i+1;j<N;j++)
       {
           if(aR[i]<aR[j])
           {
               swap(aR[i],aR[j]);
               swap(aV[i],aV[j]);
               swap(aW[i],aW[j]);
           }
       }
   }
   for(int i=0;i<N&&K>0;i++)
   {
       if(K<aW[i])
       {
         sum += aV[i]*(K/aW[i]);
         K = 0;
       }
       else
       {
           sum += aV[i];
           K = K-aW[i];
       }
   }
   cout<<sum;
}
