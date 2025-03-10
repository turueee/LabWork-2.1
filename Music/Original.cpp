#include "Original.h"

TOriginal::TOriginal()
{
  yearOfMade = 1901;
}


TOriginal::TOriginal(int count_, int year):TOriginal::TOriginal()
{
  if (count_ < 0 || year < 1901)
    throw(1);
  else
  {
    count = count_;
    yearOfMade = year;
  }
}


TOriginal::TOriginal(TOriginal& ins)
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
  orchestra = ins.GetOrchestra();
  yearOfMade = ins.GetYearOfMade();
}


TOriginal::~TOriginal()
{
}


int TOriginal::GetYearOfMade()
{
  return yearOfMade;
}


void TOriginal::SetYearOfMade(int year)
{
  if (year < 1901)
    year = 1901;
  yearOfMade = year;
}


ostream& operator<<(ostream& o, TOriginal& ins)
{
  cout << "This instrument is original electrical\n";
  if (ins.GetOrchestra() == true)
    o << "Musical Instrument: " << ins.GetName() << "\nYear of made: " << ins.GetYearOfMade() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.GetName() << "\nYear of made: " << ins.GetYearOfMade() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument not in orchestra." << endl;
  return o;
}


istream& operator>>(istream& i, TOriginal& ins)
{
  char name[256];
  int year;
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the year of made of the parent musical instrument: ";
  i >> year;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  cout << "Is this instrument in orchestra? ";
  i >> orch;
  if (count < 0)
    count = 0;
  if (year < 1901)
    count = 1901;
  ins.SetCount(count);
  ins.SetName(name);
  ins.SetOrchestra(orch);
  ins.SetYearOfMade(year);
  return i;
}