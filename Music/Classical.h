#pragma once
#include <iostream>
#include "All_Instruments.h"

class Classical : public All_Instruments
{
protected:
  bool orchestra;
public:
  //Конструктор
  Classical();
  //Деструктор
  ~Classical();
  //Геттеры
  bool get_orchestra();
  //Сеттеры
  void set_orchestra(bool orch);

  friend ostream& operator<<(ostream& o, Classical& ins);
  friend istream& operator>>(istream& i, Classical& ins);
};