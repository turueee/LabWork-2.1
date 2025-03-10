#pragma once
#include <Electrical.h>

class TOriginal final:public TElectrical
{
private:
  int yearOfMade;
public:
  TOriginal();
  TOriginal(int count, int year);
  TOriginal(TOriginal& ins);
  ~TOriginal();
  int GetYearOfMade();
  void SetYearOfMade(int year);
  friend ostream& operator<<(ostream& o, TOriginal& ins);
  friend istream& operator>>(istream& i, TOriginal& ins);
};