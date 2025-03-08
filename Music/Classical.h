#pragma once
#include "All_Instruments.h"

class Classical : public All_Instruments
{
protected:
  bool orchestra;
public:
  //Конструктор
  Classical();
  Classical(Classical& ins);
  //Деструктор
  ~Classical();
  //Геттеры
  virtual bool get_orchestra();
  //Сеттеры
  virtual void set_orchestra(bool orch);

  friend ostream& operator<<(ostream& o, Classical& ins);
  friend istream& operator>>(istream& i, Classical& ins);
};