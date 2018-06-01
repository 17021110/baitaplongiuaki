#ifndef PHRASE_H
#define PHRASE_H

#include <iostream>
#include "console.h"

using namespace std;

class phrase
{
	string name;
	int x, y, color;
	public:
	phrase(string name_ = "", int x_ = 0, int y_ = 0, int color_ = 7)
{
	name = name_;
	x = x_;
	y = y_;
	color = color_;
}
	void print();
};

#endif
