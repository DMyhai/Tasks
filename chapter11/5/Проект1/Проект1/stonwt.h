// stonewt1.h -- revised definition for the Stonewt class
#ifndef STONEWT1_H_
#define STONEWT1_H_
class Stonewt
{
public:
	enum Mode{ POUND_INT, POUND_DOUBLE };
private:
	Mode mode;
	enum { Lbs_per_stn = 14 };      // pounds per stone
	int stone;                    // whole stones
	double pds_left;              // fractional pounds
	double pounds;                // entire weight in pounds
public:
	Stonewt(double lbs, Mode form = POUND_INT);          // construct from double pounds
	Stonewt(int stn, double lbs, Mode form = POUND_DOUBLE); // construct from stone, lbs
	Stonewt();                    // default constructor
	~Stonewt();
	void show_lbs() const;        // show weight in pounds format
	void show_stn() const;        // show weight in stone format
	// conversion functions
	operator int() const;
	operator double() const;
	// new function 
	friend std::ostream &
		operator <<(std::ostream & os, const Stonewt & s);
	Stonewt operator +(Stonewt &s);
	Stonewt operator *(Stonewt &s);
	Stonewt operator -(Stonewt &s);
	
	void setModeToInt(void){ mode = POUND_INT; };
	void setModeToDouble(void) { mode = POUND_DOUBLE;};

	
};
#endif
