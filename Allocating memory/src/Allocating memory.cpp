//============================================================================
// Name        : Allocating memory.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Name {
private:
	string name;
public:
	Name(){
		cout << "Initialization" << endl;
	}
	~Name(){
		cout << "Quitting" << endl;
	}
	void setLetter(string letter){
		this->letter = letter;
	}
	void speak(){
		cout << "My name is " << name << endl;
	}
	void say(){
		cout << "Galymzhan is getting onto the stage!!!" << endl;
	}
	string calc {
		for(char c; int i = 0; i < 26; i++){
			cout << c << flush;
			c++;
		}
		return c;
	};
};

Name *function() {
	Name *gerber = new Name();
	gerber-> setName("Galymzhan");
	return gerber;
}


int main() {
/*	Name *pointer = new Name[5];
	pointer[1].setName("Galymzhan");
	pointer[1].speak();
	delete [] pointer; */
	Name letter1;
	letter1.setLetter('a');
	cout << c << endl;


	return 0;
}
