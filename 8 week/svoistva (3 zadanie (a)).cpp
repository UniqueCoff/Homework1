#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

struct Car {

	string Carmodel;
	int Horsepower;
	float Speed;
};

void bubbleSortHorsepower(Car car[], int Size);
void bubbleSortSpeed(Car car[], int Size);
void showCar(const Car p);
void randString(string& str);
void Cout(Car car[], int Size);
void File(Car car[], int Size);

int main() {

	int const Size = 8;
	Car carmodel[Size];
	cout << "\tCar model\t" << "Horsepower\t\t" << "Speed\n";
	for (int i = 0; i < Size; i++) {

		carmodel[i].Horsepower = 15 + rand() % 610;
		carmodel[i].Speed = 100 + rand() % 600;
		randString(carmodel[i].Carmodel);

		showCar(carmodel[i]);

	}
	Cout(carmodel, Size);
	File(carmodel, Size);

	return 0;
}



void randString(string& str) {

	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";


	for (int i = 0; i < str.length(); i++) {

		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];

	}
	str[str.length()] = 0;

}

void showCar(const Car p) {

	cout << "\t" << p.Carmodel << "\t\t\t"
		<< p.Horsepower << "\t\t"
		<< "   " << p.Speed << endl;
}

void bubbleSortSpeed(Car car[], int Size) {

	int j = 0;
	Car tmp;

	for (int i = 0; i < Size; i++) {

		for (int j = Size - 1; j >= i + 1; j--) {
			if (car[j].Speed > car[i].Speed) {

				tmp = car[i];
				car[i] = car[j];
				car[j] = tmp;
			}
		}
	}
}

void bubbleSortHorsepower(Car car[], int Size) {

	int j = 0;
	Car tmp;

	for (int i = 0; i < Size; i++) {

		for (int j = Size - 1; j >= i + 1; j--) {
			if (car[j].Horsepower > car[i].Horsepower) {

				tmp = car[i];
				car[i] = car[j];
				car[j] = tmp;
			}
		}
	}
}

void Cout(Car car[], int Size) {

	cout << endl << endl << "Sorted Speed" << endl << endl;
	cout << "\tCar model\t" << "Horsepower\t\t" << "Speed\n";
	bubbleSortSpeed(car, Size);

	for (int i = 0; i < Size; i++)
		showCar(car[i]);

	cout << endl << endl << "Sorted Horsepower" << endl << endl;
	cout << "\tCar model\t" << "Horsepower\t\t" << "Speed\n";
	bubbleSortHorsepower(car, Size);

	for (int i = 0; i < Size; i++)
		showCar(car[i]);
}

void File(Car car[], int Size) {

	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << endl << endl << "Sorted Speed" << endl << endl;
	f << "\tCar model\t" << "Number of petals\t\t" << "Speed\n";
	bubbleSortSpeed(car, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << car[i].Carmodel << "\t\t\t"
		<< car[i].Horsepower << "\t\t"
		<< "   " << car[i].Speed << endl;

	f << endl << endl << "Sorted Horsepower" << endl << endl;
	f << "\tCar model\t" << "Horsepower\t\t" << "Speed\n";
	bubbleSortHorsepower(car, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << car[i].Carmodel << "\t\t\t"
		<< car[i].Horsepower << "\t\t"
		<< "   " << car[i].Speed << endl;
	f.close();
}