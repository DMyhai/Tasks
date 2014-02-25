#include <iostream>
#include "dma.h"
#include <string>

using std::cout;
using std::cin;
using  std::endl;

int main(){
	const int SIZE = 6;
	const int MAXLEN = 40;
	ABC *p[SIZE];
	char templab[MAXLEN];
	int temprat;
	char tempcol[MAXLEN];
	char tempstyl[MAXLEN];
	char state; 

	for (int i = 0; i < SIZE; i++){
		cout << "Enter label: ";
		cin.getline(templab, MAXLEN);
		cout << "Enter raiting:  ";
		cin >> temprat;
		cin.get();
	
		cout << "Enter state 1 - for 'lable and rating', 2 - for state 1 + 'color', 3 - for state 1 + 'style'"<<endl;
		while (cin >> state && (state != '1' && state != '2' && state != '3')){
			cout << "Enter either 1,2 or 3 \n ";
		}
		if (state == '1'){
			p[i] = new baseDMA(templab, temprat);
			cin.get();
		}
		else if (state == '2'){
			cout << "Enter cokor: ";
			cin.getline(tempcol, MAXLEN);
			p[i] = new lacksDMA(tempcol, templab, temprat);
			cin.clear();
			cin.get();
		}
		else if (state == '3'){
			cout << "Enter stile: ";
			cin.getline(tempstyl, MAXLEN);
			p[i] = new lacksDMA(tempstyl, templab, temprat);
			cin.get();

		}
	}

	for (int i = 0; i < SIZE; i++){
		p[i]->view();
		delete p[i];
	}

}
