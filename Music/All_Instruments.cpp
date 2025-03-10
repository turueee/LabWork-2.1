#include "All_Instruments.h"

using namespace std;


//Конструкторы
TAllInstruments::TAllInstruments()
{
  name = nullptr;
  count = 0;
}

TAllInstruments::TAllInstruments(int count_):TAllInstruments::TAllInstruments()
{
  if (count_ < 0)
  {
    throw(1);
  }
  else
    count = count_;
}
TAllInstruments::TAllInstruments(TAllInstruments& ins)
{
  count = ins.GetCount();
  if (ins.GetName() != nullptr)
  {
    name = new char[256];
    int i = 0;
    while (ins.GetName()[i] != '\0')
    {
      name[i] = ins.GetName()[i];
      ++i;
    }
    name[i] = '\0';
  }
  else
    name = nullptr;
}
//Деструкторы
TAllInstruments::~TAllInstruments()
{
  delete[] name;
}
//Сеттеры
void TAllInstruments::SetName(char* name_)
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
void TAllInstruments::SetCount(int count_)
{
  if (count_ >= 0)
    count = count_;
}
//Геттеры
char* TAllInstruments::GetName()
{
  if (name != nullptr)
    return name;
  else
    return nullptr;
}

int TAllInstruments::GetCount()
{
  return count;
}


ostream& operator<<(ostream& o, TAllInstruments& ins)
{
  o << "Musical instrument: " << ins.GetName() << "\n" << "Count: " << ins.GetCount() << endl;
  return o;
}
istream& operator>>(istream& i, TAllInstruments& ins)
{
  int count;
  char name[256];
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  if (count < 0)
    count = 0;
  ins.SetCount(count);
  ins.SetName(name);
  return i;
}