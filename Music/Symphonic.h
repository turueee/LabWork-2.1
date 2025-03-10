#pragma once
#include <Classical.h>

class TSymphonic :public TClassical
{
private:
  int standartCountInOrchestra;
public:
  TSymphonic();
  TSymphonic(int count, int scount);
  TSymphonic(TSymphonic& ins);
  ~TSymphonic();
  int GetStandartCountInOrchestra();
  void SetStandartCountInOrchestra(int scount);
  friend ostream& operator<<(ostream& o, TSymphonic& ins);
  friend istream& operator>>(istream& i, TSymphonic& ins);
};