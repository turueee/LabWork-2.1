#include <iostream>
#include "All_Instruments.h"
#include "Electrical.h"
#include "Classical.h"
#include "Synthesizer.h"
#include "Original.h"
#include "Symphonic.h"
#include "Folk.h"

using namespace std;


int main()
{
	Folk arf;
	///char name_[256];
	///cin >> name_;
	///a.set_name(name_);
	cin >> arf;
	cout << arf;
	Folk b(arf);
	cout << b;
}