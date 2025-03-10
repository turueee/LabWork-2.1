#include "Classical.h"

TClassical::TClassical():TAllInstruments()
{
  orchestra = false;
}

TClassical::TClassical(int count_) :TClassical::TClassical()
{
  if (count_ < 0)
  {
    throw(1);
  }
  else
    count = count_;
}
TClassical::TClassical(TClassical& ins)
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
}
TClassical::~TClassical()
{
}

bool TClassical::GetOrchestra()
{
  return orchestra;
}

void TClassical::SetOrchestra(bool orch)
{
  orchestra = orch;
}


ostream& operator<<(ostream& o, TClassical& ins)
{
  cout << "This instrument is classical\n";
  if (ins.GetOrchestra() == true)
    o << "Musical Instrument: " << ins.GetName() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument in orchestra." << endl;
  else
    o << "Musical Instrument: " << ins.GetName() << "\n" << "Count: " << ins.GetCount() << "\nThis instrument not in orchestra." << endl;
  return o;
}
istream& operator>>(istream& i, TClassical& ins)
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