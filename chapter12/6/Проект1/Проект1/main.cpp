#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HOUR = 60;

bool newcustomer(double);

using namespace std;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	srand(time(0));
	cout << "Banck of Heather automatic teller " << endl;
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs);
	Queue line1(qs);
	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	long ciclelim = MIN_PER_HOUR*hours;
	cout << "Enter the avarage number of customer per hour: ";
	double perhour;
	cin >> perhour;
	double min_per_cast;
	min_per_cast = MIN_PER_HOUR / perhour;
	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	long sum_line1 = 0;
	int wait_time = 0;
	long line_wait = 0;
	//long line_wait1 = 0;
	long customers_wait_one_min = 0;

	int a = 0, b = 0;

	for (int cycle = 0; cycle < ciclelim; cycle++){
		if (newcustomer(min_per_cast)){
			if (line.isfull() && line1.isfull())
				turnaways++;
			else {
				customers++;
				temp.set(cycle);
				
				//cout <<"line 1:" << line.count() << endl;
				//cout << "line 2:" << line1.count() << endl;
				
				if (line.count() <= line1.count()){
					line.enqueue(temp);
					line.setcount();
					a++;
				}
				else{
					line1.enqueue(temp);
					line1.setcount();
					 b++;
				}
			}
		}


		if (wait_time <= 0 && !line.isempty() ){
			line.dequeue(temp);
			wait_time = temp.ptime();
			if (wait_time == 1)
				customers_wait_one_min++;
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time <= 0 && !line1.isempty()){
			line1.dequeue(temp);
			wait_time = temp.ptime();
			if (wait_time == 1)
				customers_wait_one_min++;
			line_wait += cycle - temp.when();
			served++;
		}

		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
		sum_line1 += line1.queuecount();
	}

	if (customers > 0){
		cout << "customer accepted: " << customers << endl;
		cout << "customer served: " << served << endl;
		cout << "turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)(sum_line + sum_line1) / ciclelim << endl;
		cout << "average wait time: "
			<< (double)line_wait / served << " minutes\n";
		cout << "Avaereng customers per hour, which waiting for 1 minute: " << (double)customers_wait_one_min / MIN_PER_HOUR << endl;
	}
	else
		cout << "No customers ! \n";

	cout << "a" << a++;
	cout << "b" << b++;
	cout << "Done\n";
	system("pause");
	return 0;
}


bool newcustomer(double x){
	return (std::rand()*x / RAND_MAX < 1);
}