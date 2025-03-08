#pragma once
#include "All_Instruments.h"

class Electrical : public All_Instruments
{
protected:
  bool orchestra;
public:
  //Конструктор
  Electrical();
  Electrical(Electrical& ins);
  //Деструктор
  ~Electrical();
  //Геттеры
  virtual bool get_orchestra();
  //Сеттеры
  virtual void set_orchestra(bool orch);

  friend ostream& operator<<(ostream& o, Electrical& ins);
  friend istream& operator>>(istream& i, Electrical& ins);
};