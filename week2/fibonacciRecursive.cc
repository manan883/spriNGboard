#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;

int fibRec(int n){
  if (n<=0){
    return 0;
    }
  else if (n == 1){
    return 1;
    }
  else {
    return fibRec(n-1) + fibRec(n-2);
    }
}

int main () {
    auto start = chrono::high_resolution_clock::now();
    for ( int i = 0; i <= 45; ++i){
      cout << "Fib number " << i << "is: " << fibRec(i) << endl;
      }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();
    cout << "total time is: " << elapsed << endl;
    return 0;
}
