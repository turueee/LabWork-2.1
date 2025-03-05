#include "All_Instruments.h"

using namespace std;


//Конструкторы
All_Instruments::All_Instruments()
{
  cout << "Ready 1" << endl;
  name = nullptr;
  count = 0;
}
//Деструкторы
All_Instruments::~All_Instruments()
{
  delete[] name;
}
//Сеттеры
void All_Instruments::set_name(char* name_)
{
  name = new char[256];
  int i = 0;
  while (name_[i] != '\0')
  {
    name[i] = name_[i];
    ++i;
  }
  name[i] = '\0';
}
void All_Instruments::set_count(int count_)
{
  if (count_ >= 0)
    count = count_;
}
//Геттеры
char* All_Instruments::get_name()
{
  cout << "Ready 2" << endl;
  if (name != nullptr)
    return name;
  else
    return nullptr;
}

int All_Instruments::get_count()
{
  cout << "Ready 3" << endl;
  return count;
}


ostream& operator<<(ostream& o, All_Instruments& ins)
{
  o << "Musical Instrument: " << ins.get_name() << "\n" << "Count: " << ins.get_count() << endl;
  return o;
}
istream& operator>>(istream& i, All_Instruments& ins)
{
  char name[256];
  int count = 0;
  i >> count >> name;
  ins.set_count(count);
  ins.set_name(name);
  return i;
}