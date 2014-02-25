#include <iostream>
class complex {
	private:
		double a;
		double b;

	public:
		complex() { a = b = 0; }
		complex(double , double );

		friend complex operator~(complex &);
		friend complex operator+(complex &, complex &);
		friend complex operator-(complex &, complex &);
		friend complex operator*(complex &, complex &);
		friend complex operator*(double , complex &); 
		friend std::ostream & operator<<(std::ostream&, complex &);
		friend std::istream & operator>>(std::istream&, complex &);
};