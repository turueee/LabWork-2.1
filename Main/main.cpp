#include <iostream>
#include "All_Instruments.h"
#include "Electrical.h"
#include "Classical.h"

using namespace std;


int main()
{
	All_Instruments a;
	Electrical b;
	Classical c;
	///char name_[256];
	///cin >> name_;
	///a.set_name(name_);
	cin >> a;
	cin >> b;
	cin >> c;
	cout << a;
	cout << b;
	cout << c;
}