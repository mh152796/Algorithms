#include<bits/stdc++.h>
using namespace std;
int knapsack(int s1[],int v[],int n,int S)
{
    int V[n+1][S+1];
    int i,s;
    for(i=0; i<=n; i++)
    {
        for(s=0; s<=S; s++)
        {
            if(i==0||s==0)
            {
                V[i][s] = 0;
            }
            else if(s1[i-1]<=s)
            {
                V[i][s] =  max((v[i-1]+V[i-1][s-s1[i-1]]),V[i-1][s]);
            }
            else
                V[i][s] = V[i-1][s];
        }
    }
    for(i=0; i<=n; i++)
    {
        for(s=0; s<=S; s++)
        {
            cout<<V[i][s]<<" ";
        }
        cout<<endl;
    }
    cout<<"Back Tracking : "<<endl;
    i=4;
    s=5;
    while(i>0&&s>0)
    {
        if(V[i][s]==V[i-1][s])
        {
            i--;
        }
        else
        {
           // cout<<v[i-1]<<" ";
            cout<<i-1;
            i--;
            s=s-s1[i-1];
        }

    }
    cout<<endl;
    return V[n][S];
}
int main()
{
    int i,S;
    cout<<"Number Of Item : "<<endl;
    int n;
    cin>>n;
    int s1[n];
    int v[n];
    cout<<"Enter weight : "<<endl;
    for(i=0;i<n;i++)
        cin>>s1[i];
    cout<<"Enter value : "<<endl;
    for(i=0;i<n;i++)
        cin>>v[i];
    cout<<"Knapsack Size : ";
    cin>>S;
    int result = knapsack(s1,v,n,S);
    cout<<"The Maximum Profit : "<<result;
}

