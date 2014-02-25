#include "complex1.h"

complex::complex(double a1, double b1) :a(a1), b(b1) {
	//this->a = a;
	//this->b = b;
}

complex operator~(complex& c)  {
	complex out;
	out.a = ~(int)(c.a);
	out.b = ~(int)(c.b);
	return out;
}

complex operator+(complex &c, complex &d){
	return complex(d.a + c.a, d.b + c.b);
}

complex operator-(complex &c, complex &d){
	return complex(d.a - c.a, d.b - c.b);
}

complex operator*(complex &c, complex &d){
	return complex(d.a * c.a, d.b * c.b);
}

complex operator*(double  k, complex & d) {
	return complex(k * d.a, k * d.b);
}

std::ostream & operator<<(std::ostream &os, complex & d){
	 os << "(" << d.a << " , "<< d.b <<"i)";
	 return os;
}

std::istream & operator>>(std::istream &is, complex & d) {
	 is >> d.a;
	 is >> d.b; 
	 return is;
 }