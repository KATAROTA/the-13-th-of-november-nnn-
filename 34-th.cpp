#include <iostream>
using namespace std;

class fish {
	public:
		fish() {
			cout << "fish is created " << endl;
		}
		~fish() {
			cout << "fish is decreated " << endl;
		}
		
		void virtual Swim() {
			cout << "Fish Swimin'" << endl;
		}
	
};



class carp : public fish{
	public:
		carp() {
			cout << "carp is created " << endl;
		}
		~carp() {
			cout << "carp is decreated " << endl;
		}
		void Swim () {
			cout << "carp is swimin'" << endl;
		}
	
};

class tuna : public fish{
	public:
		tuna() {
			cout << "tuna is created " << endl;
		}
		~tuna() {
			cout << "tune is decreated " << endl;
		}
		void Swim() {
			cout << "tuna is swimin'" << endl;
		}
	
};

void makeFishSwim(fish& InputFish) {
	InputFish.Swim();
}

int main() {
	tuna fish1;
	carp fish2;
	fish otherfish;

	otherfish.Swim();
	makeFishSwim(fish1);
	
	return 0;
	
}
