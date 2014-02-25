#include <iostream>
#include <cstring>

using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo (student pa[], int n ){
    int elem = 0;
    for (int i=0; i<n ; i++ ){
        cout<<"Enter name of student: ";
        cin.getline(pa[i].fullname, 30);
        cout<<"Enter hobby of student: ";
        cin.getline(pa[i].hobby, 30);
        cout<<"Enter ooplevel:";
        cin>>pa[i].ooplevel;
        cin.get();
        elem++;
        if (!strcmp(pa[i].fullname, "")){
            cout<<"Entering is finised! "<<endl;
            break;
        }
    }
    return elem;
}

void display1(student st){
    cout<<"Name of student: "<< st.fullname <<endl;
    cout<<"Hobby of student: "<<st.hobby<<endl;
    cout<<"OOPLEVEL: "<<st.ooplevel<<endl;
}

void display2(const student *ps){
    cout<<"Name of student: "<< ps->fullname <<endl;
    cout<<"Hobby of student: "<<ps->hobby<<endl;
    cout<<"OOPLEVEL: "<<ps->ooplevel<<endl;
}

void display3(const student pa[], int n){
    for (int i=0; i<n; i++){
        cout<<"Name of student: "<< pa[i].fullname <<endl;
        cout<<"Hobby of student: "<<pa[i].hobby<<endl;
        cout<<"OOPLEVEL: "<<pa[i].ooplevel<<endl;
    }
}


int main()
{
    cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}
