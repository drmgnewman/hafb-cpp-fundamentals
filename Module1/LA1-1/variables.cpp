#include <iostream>
using namespace std;

int main()
{
    cout << "\nData Type Bytes"
         << "\n--------- ----"
         << "\nint       " << sizeof(int)   // integer
         << "\nchar      " << sizeof(char) // charaters 1 b
         << "\nlong      " << sizeof(long) // long integers
         << "\nbool      " << sizeof(bool) // boolean
         << endl;
    return 0;
}