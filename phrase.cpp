#include "phrase.h"

void phrase::print()
{
	gotoXY(x, y);
	TextColor(color);
	cout << name;
	return;
}
