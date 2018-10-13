#pragma once
#ifndef TOCKAIMPL_H
#define TOCKAIMPL_H

class TockaImpl
{
public:
	TockaImpl(double x = 0, double y = 0)
		: x_koord(x), y_koord(y) { }

	double X() const noexcept { return x_koord; }
	double Y() const noexcept { return y_koord; }

	void Postavi(double noviX, double noviY)
	{
		x_koord = noviX;
		y_koord = noviY;
	}

private:
	double x_koord;
	double y_koord;
};

#endif  // TOCKAIMPL_H
