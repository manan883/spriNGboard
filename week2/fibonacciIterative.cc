#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;

int fibIterative(int n){
  int fibArr[n+2];
  fibArr[0] = 0;
  fibArr[1] = 1;
  for ( int i = 2; i <= n; ++i){
        fibArr[i] = fibArr[i-1] + fibArr[i-2];
    } 
    return fibArr[n];
}

int main () {
    auto start = chrono::high_resolution_clock::now();
    
    for ( int i = 0; i <= 45; ++i){
        cout << "Fib number " << i << " is " << fibIterative(i) << endl;
      }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();
    cout << "total time is: " << elapsed << endl;
    return 0;
}
