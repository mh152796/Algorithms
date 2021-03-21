#include<bits/stdc++.h>
using namespace std;
int c[10000][10000];
char b[10000][10000];
void printLCS(string X,int i,int j)
{
    if(i==0||j==0)
        return;
    if(b[i][j]=='c')
    {
        printLCS(X,i-1,j-1);
        cout<<X[i-1];
    }
    else if(b[i][j]=='u')
    {
        printLCS(X,i-1,j);
    }
    else
    {
        printLCS(X,i,j-1);
    }
}
int Lcs(string X,string Y)
{

    int i,j;
    int xl = X.size();
    int  yl = Y.size();
    for(i=0; i<=xl; i++)
    {
        for(j=0; j<=yl; j++)
        {

            if(i==0||j==0)
            {
                c[i][j] = 0;
            }
            else if(X[i-1]==Y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j] = 'c';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j] = 'u';
            }
            else
            {
                c[i][j] = c[i][j-1];
                b[i][j] = 'l';
            }
        }
    }
    cout<<"Tabular Presentation : "<<endl;
    for(i=0; i<=xl; i++)
    {
        for(j=0; j<=yl; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Maximum Scequence is : ";
    printLCS(X,xl,yl);
    return c[xl][yl];
}
int main()
{
    string X;
    string Y;
    cout<<"Input First String : "<<endl;
    getline (cin, X);
    cout<<"Input Second String : "<<endl;
    getline (cin, Y);

    int result = Lcs(X,Y);
    cout<<"\nNo Of Charecter : "<<result;

}
