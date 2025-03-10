#pragma once
#include "Classical.h"

class TFolk final:public TClassical
{
private:
  char* country;
public:
  TFolk();
  TFolk(int count);
  TFolk(TFolk& ins);
  ~TFolk();
  char* GetCountry();
  void SetCountry(char* name_of_parent_);
  friend ostream& operator<<(ostream& o,TFolk& ins);
  friend istream& operator>>(istream& i,TFolk& ins);
};