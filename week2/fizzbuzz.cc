#include <iostream>
using namespace std;

void fizzbuzz (int num){
   if ((num % 3 == 0) && (num % 5 == 0)){
        cout << "fizzbuzz" << endl;
   }
   else if (num % 3 == 0){ 
        cout << "fizz" << endl;
      }
    else if (num % 5 == 0 ){ 
      cout << "buzz" << endl;
    }

    else{
      cout << "N" << endl;
      }
  }
  

  int main ()
  {
    string flag;
    int x;
    while (flag != "e") {

    cout << "Enter a positive number: ";
    cin >> x;
    fizzbuzz(x);
    cout << "type e to exit or any other character to continue: ";
    cin >> flag;
  }
    return 0;
  }

