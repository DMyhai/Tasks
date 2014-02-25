// stonewt1.cpp -- Stonewt class methods + conversion functions
#include <iostream>
using std::cout;
#include "stonwt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode form)
{
	mode = form;
	if (form == POUND_INT ){
		stone = int(lbs) / Lbs_per_stn;    // integer division
		pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
		pounds = lbs;
	} else {
		std::cout << "Incorrect 2nd argument to Stownt  ";
		std::cout << "Stonewt set to 0";
		stone = 0;
		pds_left = 0;
		pounds = 0;
	}


}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode  form)
{
	mode = form;
	if (form == POUND_DOUBLE){
		stone = stn;
		pds_left = lbs;
		pounds = stn * Lbs_per_stn + lbs;
	}
	else {
		std::cout << "Incorrect 3rd argument to Stownt  ";
		std::cout << "Stonewt set to 0";
		stone = 0;
		pds_left = 0;
		pounds = 0;
	}
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

// show weight in stones
void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}

// conversion functions
Stonewt::operator int() const
{

	return int(pounds + 0.5);

}

Stonewt::operator double()const
{
	return pounds;
}

Stonewt Stonewt::operator +(Stonewt & s){
	return Stonewt(stone + s.stone, pounds+ s.pounds);
}

Stonewt Stonewt::operator *(Stonewt & s){
	return Stonewt(stone * s.stone, pounds * s.pounds);
}

Stonewt Stonewt::operator -(Stonewt & s){
	return Stonewt(stone - s.stone, pounds - s.pounds);
}


 std::ostream & operator<<(std::ostream & os, const Stonewt & s){
	if (s.mode == Stonewt::POUND_INT){
		os << "Stone= " << s.stone << " Pounds=  " << s.pds_left << std::endl;
	}
	else if (s.mode == Stonewt::POUND_DOUBLE){
	
		os << " Pounds=  " << s.pounds << std::endl;
	}
	return os;

}