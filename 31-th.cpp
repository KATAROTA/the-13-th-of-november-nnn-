#include <iostream>
using namespace std;


class fish {
	public: 
		bool isFreshWaterFish;
		void Swim() {
			if (isFreshWaterFish) cout << "Пресноводный " << endl;
			else cout << "морской " << endl;
		}
};
class carp : public fish {
	public:
		carp() {
			isFreshWaterFish = true;
		}
		void Swim(){
			cout << "карп плавает медленно " << endl;
		}
};
class Tuna : public fish {
	public:
		Tuna() {
			isFreshWaterFish = false;
		}
		void Swim(){
			cout << "тунец плавает быстро " << endl;
		}
};


int main() {
	carp carpFish;
	Tuna tunaFish;
	cout << "My food: " << endl;
	carpFish.Swim();
	tunaFish.Swim();
	tunaFish.fish::Swim();
		
	return 0;
}
