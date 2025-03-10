#pragma once
#include "All_Instruments.h"

class TClassical : public TAllInstruments
{
protected:
  bool orchestra;
public:
  //Конструктор
  TClassical();
  TClassical(int count);
  TClassical(TClassical& ins);
  //Деструктор
  virtual ~TClassical();
  //Геттеры
  virtual bool GetOrchestra();
  //Сеттеры
  virtual void SetOrchestra(bool orch);

  friend ostream& operator<<(ostream& o, TClassical& ins);
  friend istream& operator>>(istream& i, TClassical& ins);
};