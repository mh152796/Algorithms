#include <bits/stdc++.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
int main()
{
    int n1,n2;
    cout<<"Input 1st number: ";
    cin>>n1;
    cout<<"Input 2nd number: ";
    cin>>n2;
    printf("The GCD of %d and %d is: %d",n1,n2,gcd(n1,n2));
    return 0;
}

