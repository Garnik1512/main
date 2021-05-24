#include <iostream>
using namespace std;
int main()
{
   const int n = 4;
   int zangvac[n];
   int sum = 0;
   int count,k;
   for (int i = 0; i < n; i++) {
     cin >> zangvac [i];
   }
   for (int i = 0; i < n; i++)
     if (zangvac[i] > 0)

     
      sum += zangvac [i]; 
      for (int i = 0; i < n; i++){
     if (zangvac[i] > 0) count++;
     
      }
      cout <<sum / count;

       return 0;
}