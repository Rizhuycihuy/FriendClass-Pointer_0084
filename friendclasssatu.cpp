#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
  private:
          string nama;

  public:
          void setnama (string pnama);
          friend class siswa;
};

