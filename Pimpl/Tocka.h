#pragma once
#ifndef TOCKA_H
#define TOCKA_H
#include <memory>               // definicija unique_ptr

class TockaImpl;                // deklaracija unaprijed

class Tocka
{
public:
	Tocka(double x = 0, double y = 0);
	~Tocka();                            // dodali smo destruktor!
	Tocka(const Tocka&);
	Tocka(Tocka&&);
	Tocka& operator=(Tocka&&);
	double X() const noexcept;
	double Y() const noexcept;
	void Postavi(double noviX, double noviY);

private:
	std::unique_ptr<TockaImpl> pTocka;   // pokazivaè na implementaciju
};

#endif  // TOCKA_H
