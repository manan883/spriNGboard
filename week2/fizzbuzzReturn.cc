#include <iostream>
using namespace std;

string fizzbuzz (int num){
   if ((num % 3 == 0) && (num % 5 == 0)){
        return "fizzbuzz";
   }
   else if (num % 3 == 0){ 
        return "fizz";
      }
    else if (num % 5 == 0 ){ 
      return "buzz";
    }

    else{
      return "N";
      }
  }

  int main ()
  {
    string flag;
    int x;
    while (flag != "e") {

    cout << "Enter a positive number: ";
    cin >> x;
    string output = fizzbuzz(x);
    cout << output << endl;
    cout << "type e to exit or any other character to continue: ";
    cin >> flag;
  }
    return 0;
  }

