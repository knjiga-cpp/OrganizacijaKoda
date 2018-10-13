#include "tocka.h"
#include "tockaImpl.h"

Tocka::Tocka(double x, double y)
	: pTocka(std::make_unique<TockaImpl>(x, y))
{ }

Tocka::~Tocka() = default;

Tocka::Tocka(const Tocka& t) 
	: pTocka(std::make_unique<TockaImpl>(*t.pTocka))
{}

Tocka::Tocka(Tocka&&) = default;
Tocka& Tocka::operator=(Tocka&&) = default;

double Tocka::X() const noexcept
{
	return pTocka->X();
}

double Tocka::Y() const noexcept
{
	return pTocka->Y();
}

void Tocka::Postavi(double noviX, double noviY)
{
	pTocka->Postavi(noviX, noviY);
}
