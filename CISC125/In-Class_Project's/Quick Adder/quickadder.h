#pragma once

class QuickAdder
{
private:
	int cents;
public:
	void button1_click();
	void button2_click();
	void button3_click();
	double get_total() const;
	QuickAdder();

};