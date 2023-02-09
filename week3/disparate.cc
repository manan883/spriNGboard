#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
  {
    /////////////////////////////////
    // CREATE THREE int32_t VALUES //
    // (big, small, sum)           //
    /////////////////////////////////
    int32_t big = 100000000;
    int32_t small = 1;
    int32_t sum = big + small;

    cout << "int32_t:" << endl;
    cout << "  big   = " << big   << endl;
    cout << "  small = " << small << endl;
    cout << "  sum   = " << sum   << endl;
  }

  {
    float big = 100000000.0f;
    float small = 1.0f;
    float sum = big + small;
    ///////////////////////////////
    // CREATE THREE float VALUES //
    // (big, small, sum)         //
    ///////////////////////////////


    cout << "float:" << endl;
    cout << "  big   = " << fixed << setprecision(1) << big   << endl;
    cout << "  small = " << fixed << setprecision(1) << small << endl;
    cout << "  sum   = " << fixed << setprecision(1) << sum   << endl;
  }
}

