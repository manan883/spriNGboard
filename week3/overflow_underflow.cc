#include <iostream>

using namespace std;

int main ()
{
  {
    signed int32_t s = 0;
    unsigned int32_t u = 0;


    cout << "32-bit before decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
    --s;
    --u;


    cout << "32-bit after decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }

  {
    signed int16_t s = INT16_MAX;
    unsigned int16_t u = INT16_MAX;


    cout << "16-bit before increment:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;

    ++s;
    ++u;


    cout << "16-bit after increment:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }
}

