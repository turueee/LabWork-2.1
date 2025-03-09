#pragma once
#include <Classical.h>

class Symphonic :public Classical
{
private:
  int standart_count_in_orchestra;
public:
  Symphonic();
  Symphonic(int count, int scount);
  Symphonic(Symphonic& ins);
  ~Symphonic();
  int get_standart_count_in_orchestra();
  void set_standart_count_in_orchestra(int scount);
  friend ostream& operator<<(ostream& o, Symphonic& ins);
  friend istream& operator>>(istream& i, Symphonic& ins);
};