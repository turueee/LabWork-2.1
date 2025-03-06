#pragma once
#include <iostream>
#include "All_Instruments.h"

class Electrical : public All_Instruments
{
protected:
  bool orchestra;
public:
  //Конструктор
  Electrical();
  //Деструктор
  ~Electrical();
  //Геттеры
  bool get_orchestra();
  //Сеттеры
  void set_orchestra(bool orch);

  friend ostream& operator<<(ostream& o, Electrical& ins);
  friend istream& operator>>(istream& i, Electrical& ins);
};