#include "Symphonic.h"

TSymphonic::TSymphonic()
{
  standartCountInOrchestra = 0;
}


TSymphonic::TSymphonic(int count_, int scount):TSymphonic::TSymphonic()
{
  if (count_ < 0 || scount < 0)
    throw(1);
  else
  {
    count = count_;
    standartCountInOrchestra = scount;
  }
}


TSymphonic::TSymphonic(TSymphonic& ins)
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
  standartCountInOrchestra = ins.GetStandartCountInOrchestra();
}


TSymphonic::~TSymphonic()
{
}


int TSymphonic::GetStandartCountInOrchestra()
{
  return standartCountInOrchestra;
}


void TSymphonic::SetStandartCountInOrchestra(int scount)
{
  if (scount < 0)
    scount = 0;
  standartCountInOrchestra = scount;
}


ostream& operator<<(ostream& o, TSymphonic& ins)
{
  cout << "This instrument is symphonic\n";
  if (ins.GetOrchestra() == true)
    o << "Musical Instrument: " << ins.GetName() << "\nStandart count in orchestra: " << ins.GetStandartCountInOrchestra() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.GetName() << "\nStandart count in orchestra: " << ins.GetStandartCountInOrchestra() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument not in orchestra." << endl;
  return o;
}


istream& operator>>(istream& i, TSymphonic& ins)
{
  char name[256];
  int scount;
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the standart count in orchestra: ";
  i >> scount;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  cout << "Is this instrument in orchestra? ";
  i >> orch;
  if (count < 0)
    count = 0;
  if (scount < 0)
    scount = 0;
  ins.SetCount(count);
  ins.SetName(name);
  ins.SetOrchestra(orch);
  ins.SetStandartCountInOrchestra(scount);
  return i;
}