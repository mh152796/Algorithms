#include <bits/stdc++.h>
using namespace std;

int bin(int weight[], int n, int C){
   int bin_count = 0;
   int j;
   int Bin[n];
   for (int i = 0; i < n; i++) {

      for (j = 0; j < bin_count; j++) {
         if (Bin[j] >= weight[i]) {
            Bin[j] = Bin[j] - weight[i];
            break;
         }
      }
      if (j == bin_count) {
         Bin[bin_count] = C - weight[i];
         bin_count++;
      }
   }
   return bin_count;
}
int main(){
    int n;
    cin>>n;
   int weight[n];
   for(int i=0;i<n;i++)
   {
           cin>>weight[i];

   }
   int C;
   cin>>C;
   cout<<"Total Number of bin : "<<bin(weight, n, C);
   return 0;
}
