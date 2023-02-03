#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;

int64_t factorialRecursive(int n){
    if (n == 0 || n == 1){
          return 1;
      }
      else{
        return n * factorialRecursive(n-1);
      }
  }

int main () {
    auto start = chrono::high_resolution_clock::now();
    cout << "Factorial 20 is " << factorialRecursive(20) << endl;
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();
    cout << "total time is: " << elapsed << endl;
    return 0;
}
