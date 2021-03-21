#include <bits/stdc++.h>
using namespace std;
int bestFit(int weight1[], int m, int C){
   int res = 0;
   int bin_rem[m];
   for (int i = 0; i < m; i++){
      int j;
      int min = C + 1, bi = 0;
      for (j = 0; j < res; j++){
         if (bin_rem[j] >= weight1[i] && bin_rem[j] - weight1[i] < min) {
         bi = j;
         min = bin_rem[j] - weight1[i];
      }
   }
   if (min == C + 1) {
         bin_rem[res] = C - weight1[i];
         res++;
      }
   else
   bin_rem[bi] -= weight1[i];
   }
   return res;
}
int main(){
   int weight1[] = { 2, 5, 4, 7, 1, 3, 8 };
   int C = 10;
   int m = sizeof(weight1) / sizeof(weight1[0]);
   cout<< "Number of bins required in Best Fit : "
   <<bestFit(weight1, m, C);
   return 0;
}
