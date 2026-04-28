#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
  private:
          string nama;
  public:
          friend void setnama(mahasiswa &a, string);
};