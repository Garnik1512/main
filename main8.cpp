#include <iostream>
using namespace std;
int main()
{
   const int n = 7;
   int zangvac[n];
   int count = 0;
    for (int i = 0; i < n; i++) {
     cin >> zangvac [i];
     }
         
    for (int i = 0; i < n; i++){
       if (4 >= zangvac[i] && zangvac[i] <= 21) count++;
        
     }
       cout << count ;
       return 0;
}