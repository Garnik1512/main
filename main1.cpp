#include <iostream>
using namespace std;
int main()
{
   const int n = 10;
   int zangvac[n];
   int count = 0;
   int k;
   for (int i =0; i < n; i++) {
     cin >> zangvac [i];
   }
   for (int i = 0; i < n; i++){
     if (zangvac[i] > 0) count++;
   }
    cout <<count;

  
  return 0;
}