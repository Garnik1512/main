#include <iostream>
using namespace std;
int main()
{
   const int n = 7;
   int zangvac[n];
   int sum = 1;
   int count,k;
    for (int i = 0; i < n; i++) {
     cin >> zangvac [i];
     }
         
        for (int i = 0; i < n; i++){
        if (i % 2 == 1) 
          sum *= zangvac [i];
        }
          cout <<sum;

          return 0;
                    }