#include <iostream>
#include <string>
#include <dog.h>

using namespace std;

class Dog {
public:
	Dog() : _legs(4), _bark(true) {}

	void setDogSize(string dogSize) {
		_dogSize = dogSize;
	}

	virtual void setEars(string type) {
		_earType = type;
	}
private:
	string _dogSize, _earType;
	int _legs;
	bool _bark;
};

class Breed : public Dog {
public:
	Breed(string color, string size) : _color(color) {
		setDogSize(size);
	}

	string getColor() {
		return _color;
	}

	void setEars(string length, string type) {
		_earLength = length;
		_earType = type;
	}

protected:
	string _color, _earLength, _earType;
};

void goDog() {
	Dog mongrel;
	Breed labrador("yellow", "large");
	mongrel.setEars("pointy");
	labrador.setEars("long", "floppy");
	cout << "Cody is a " << labrador.getColor() << " labrador" << endl;
}
