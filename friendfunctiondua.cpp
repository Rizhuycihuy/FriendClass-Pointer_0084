#include <iostream>
using namespace std;

class pelajar;
class manusia
{
  public:
        void shownilaipelajar(pelajar &x);

};

class pelajar
{
  private:
          int nilai;
  
  public:
          pelajar() {nilai = 100;}
          friend void manusia::shownilaipelajar(pelajar &x);

};

void manusia::shownilaipelajar(pelajar &x)
{
  cout << x.nilai;
}

int main()
{
  manusia budi;
  pelajar pbudi;
  budi.shownilaipelajar(pbudi);
  return 0;
}