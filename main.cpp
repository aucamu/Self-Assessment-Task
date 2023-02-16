#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class car {
protected:
  string acc,model,color;
  const char* my_accesories[4] = { "AC","USB charger", "GPS Navigator", "Parking Camera" };
  const char* models[5] = { "BMW", "BENTLEY" , "FORD", "HONDA", "JAGUAR" };
  const char* colors[5] = { "YELLOW", "BLACK" , "BLUE", "ORANGE", "GREY" };
public:
    void setCar (string a, string b, string c){
        acc = a;
		model = b;
		color = c;
    }

    		void getAcc() {
		    for(int i=0; i<4; i++){
		    	cout << to_string(i) << " - " << my_accesories[i] << "\n";
			}
		}

		void getModel() {
		        for(int i=0; i<5; i++){
		    	cout << to_string(i) << " - " << models[i] << "\n";
			}
		};

		void getColor() {
		        for(int i=0; i<5; i++){
		    	cout << to_string(i) << " - " << colors[i] << "\n";
			}
		};

  virtual void customizeCar() {
  }
};

class myCar : public car {

public:
  void customizeCar() {
        cout << "Car Customitation\n";
		cout << "Color: " << color << "\n";
		cout << "Model: " << model << "\n";
		cout << "Accesories: " << acc << "\n";
  }
};

int main()
{
    string mod,col,ac;

    car *p;   // crear un puntero al tipo base.

   myCar t;  // crear objetos de tipos derivados

   p = &t;

   	cout << "Starting customization\n";
	cout << "Choose model\n";
	p->getModel();
	cin >> mod;
	cout << "Choose color\n";
	p->getColor();
	cin >> col;
	cout << "Choose accesorie\n";
	p->getAcc();
	cin >> ac;

   p->setCar(ac,mod, col);
   p->customizeCar();

   return 0;
}
