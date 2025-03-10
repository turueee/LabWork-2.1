#include "Electrical.h"

TElectrical::TElectrical()
{
  orchestra = false;
}


TElectrical::TElectrical(int count_) :TElectrical::TElectrical()
{
  if (count_ < 0)
  {
    throw(1);
  }
  else
    count = count_;
}
TElectrical::TElectrical(TElectrical& ins)
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
  name = nullptr;
  orchestra = ins.GetOrchestra();
}
TElectrical::~TElectrical()
{
}

bool TElectrical::GetOrchestra()
{
  return orchestra;
}

void TElectrical::SetOrchestra(bool orch)
{
  orchestra = orch;
}


ostream& operator<<(ostream& o, TElectrical& ins)
{
  cout << "This instrument is electrical\n";
  if (ins.GetOrchestra() == true)
    o << "Musical Instrument: " << ins.GetName() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.GetName() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument not in orchestra." << endl;
  return o;
}
istream& operator>>(istream& i, TElectrical& ins)
{
  char name[256];
  int count = 0;
  bool orch;
  cout << "Enter the name of the musical instrument: ";
  i >> name;
  cout << "Enter the count of the musical instruments: ";
  i >> count;
  cout << "Is this instrument in orchestra? ";
  i >> orch;
  if (count < 0)
    count = 0;
  ins.SetCount(count);
  ins.SetName(name);
  ins.SetOrchestra(orch);
  return i;
}