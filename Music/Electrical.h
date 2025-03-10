#pragma once
#include "All_Instruments.h"

class TElectrical : public TAllInstruments
{
protected:
  bool orchestra;
public:
  //Конструктор
  TElectrical();
  TElectrical(int count);
  TElectrical(TElectrical& ins);
  //Деструктор
  virtual ~TElectrical();
  //Геттеры
  virtual bool GetOrchestra();
  //Сеттеры
  virtual void SetOrchestra(bool orch);

  friend ostream& operator<<(ostream& o, TElectrical& ins);
  friend istream& operator>>(istream& i, TElectrical& ins);
};