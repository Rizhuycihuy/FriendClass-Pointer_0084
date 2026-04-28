#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
  private:
          string Nama;

  public:
          void setNama (string pNama);
          friend class siswa;
};

class siswa
{
  private:
          int Id;
  
  public:
          void setId(int pId);
          void displayAll(orang &a);
};

void siswa::displayAll(orang &a)
{
  cout << Id << endl  << a.Nama;
}

void orang::setNama(string pNama)
{
  Nama = pNama;
}
void siswa::setId(int pId)
{
  Id = pId;
}

int main()
{
  orang joko;
  joko.setNama("joko susilo");
  siswa joko_siswa;
  joko_siswa.setId(1);
  joko_siswa.displayAll(joko);
  return 0;
}