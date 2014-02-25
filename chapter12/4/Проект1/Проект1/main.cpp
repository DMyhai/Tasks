#include "stack.h"
#include <iostream>



int main(){
	
	char ch;
	unsigned long po;
	int n;
	std::cout << "Enter quantity of purchases (less than 10):  ";
	std::cin >> n;
	Stack st(n);
	
	

	// A -add; p - processing , q - end
	std::cout << "Please enter A to add a purchase order, \n"
		<< "P to process a PO, or Q to quit. \n ";
	while (std::cin>>ch && toupper(ch) !='Q'){
		while (std::cin.get() != '\n')
			continue;
			if (!isalpha(ch)){
				std::cout << '\a';
				continue;
			}
			switch (ch){
				case 'A':
				case 'a': std::cout << "Enter a PO number to add: ";
					std::cin >> po;
					if (st.isfull()){
						std::cout << "stack already full \n";
					}
					else { 
						st.push(po);
						break;
					}
				case 'P':
				case 'p': if (st.isempty()){
							  std::cout << "stack already empty \n";
							}
						  else {
							  st.pop(po);
							  std::cout << "PO #" << po << "popped \n";
						  }
						  break;
				}
			std::cout << "Please enter A to add a purchase orde, \n"
				<< "P to process a PO, or Q to quit. \n  ";
			}

	
	
	std::cout << "Copying of you data/ ";
	Stack st_copy(st);

	
	
	std::cout << "Bye\n";
	return 0;
}
