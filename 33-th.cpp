#include <iostream>
using namespace std;

class car{
	public:
		void start() {
			cout << "started" << endl;
			
		}
		void move() {
			cout << "move forward" << endl;
		}
};


class BMW : public car{
	public:
		void start() {
			cout << "BMW X5 has started " << endl;;
		}
		void style() {
			 cout << "sportcar " << endl;
		}
};


class merc : public car{
	public:
		void start() {
			cout << "mercedes has started " << endl;
		}
		void style() {
			cout << "comfort " << endl;
		}
};

int main () {
	car car1;
	BMW BMW1;
	merc merc1;
	car1.start();
	car1.move();
	BMW1.start();
	BMW1.style();
	merc1.start();
	merc1.style();
	cout << "BMW X5 is ";
	BMW1.car::move();
	
	
}
