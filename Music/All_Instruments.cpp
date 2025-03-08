#include "All_Instruments.h"

using namespace std;


//Конструкторы
All_Instruments::All_Instruments()
{
  name = nullptr;
  count = 0;
}
All_Instruments::All_Instruments(All_Instruments& ins)
{
  count = ins.get_count();
  name = new char[256];
  int i = 0;
  while (ins.get_name()[i] != '\0')
  {
    name[i] = ins.get_name()[i];
    ++i;
  }
  name[i] = '\0';
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
  if (name != nullptr)
    return name;
  else
    return nullptr;
}

int All_Instruments::get_count()
{
  return count;
}


ostream& operator<<(ostream& o, All_Instruments& ins)
{
  o << "Musical instrument: " << ins.get_name() << "\n" << "Count: " << ins.get_count() << endl;
  return o;
}
istream& operator>>(istream& i, All_Instruments& ins)
{
  int count;
  char name[256];
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  if (count < 0)
    count = 0;
  ins.set_count(count);
  ins.set_name(name);
  return i;
}