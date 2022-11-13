#include <iostream>
using namespace std;




class car {
	public:
	void start() {
		cout << "get ready" << endl;
	}
	private:
	void move(){
			cout << "moving forward" <<endl;
	}
};



class engine : public car {
	public:
	void start(){
		cout << "engine is ready" << endl;
	}
	void acsel() {
		cout << "turning right" << endl;
	}
};

class gearBox : public car {
	public:
		void start() {
			cout <<"gearBox is ready" << endl;
			 
		}
		int SwitchGear(int gear =1) {
			gear++;
			cout << "gear is " << gear << endl;
			return 0;
		}
};


int main() {
	engine engine1;
	gearBox gearbox1;
	car car1;
	engine1.start();
	car1.start();
	gearbox1.start();
	return 0;
}


