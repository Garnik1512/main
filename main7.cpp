#include <iostream>
using namespace std;
int main()
{
   const int n = 7;
   int zangvac[n];
   int sum = 0;
   int count = 0;
   int k = 3;
    for (int i = 0; i < n; i++) {
     cin >> zangvac [i];
     }
         
        for (int i = 1; i < n; i++){
          if (i % k == 0 ) count++;
         
        }
          cout <<count;

          return 0;
                    }