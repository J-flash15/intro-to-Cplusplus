#include "quickadder.h"

QuickAdder::QuickAdder()
{
	cents = 0;
}

void QuickAdder::button1_click()
{
	cents = (cents + 100) % 2000;

}

void QuickAdder::button2_click()
{
	cents = (cents + 10) % 2000;

}

void QuickAdder::button3_click()
{
	cents = (cents + 1) % 2000;

}

double QuickAdder::get_total() const
{
	return cents / 100.0;

}