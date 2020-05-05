#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

struct Flower {

	string name;
	int numberofpetals;
	float cost;
};

void bubbleSortnumberofpetals(Flower flower[], int Size);
void bubbleSortcost(Flower flower[], int Size);
void showFlower(const Flower p);
void randString(string& str);
void Cout(Flower flower[], int Size);
void File(Flower flower[], int Size);

int main() {

	int const Size = 8;
	Flower flower[Size];
	cout << "The name of Flower\t" << "number of petals\t\t" << "cost\n";
	for (int i = 0; i < Size; i++)
	{
		flower[i].numberofpetals = 1 + rand() % 120;
		flower[i].cost = 100 + rand() % 1000;
		randString(flower[i].name);

		showFlower(flower[i]);
	}

	Cout(flower, Size);
	File(flower, Size);


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

void showFlower(const Flower p) {

	cout << "\t" << p.name << "\t\t\t"
		<< p.numberofpetals << "\t\t"
		<< "   " << p.cost << endl;
}

void bubbleSortcost(Flower flower[], int Size) {
	int j = 0;
	Flower tmp;
	
	for (int i = 0; i < Size; i++) {
		
		for (int j = Size - 1; j >= i + 1; j--) {
			if (flower[j].cost > flower[i].cost) {
				
				tmp = flower[i];
				flower[i] = flower[j];
				flower[j] = tmp;
			}
		}
	}
}

void bubbleSortnumberofpetals(Flower flower[], int Size) {
	int j = 0;
	Flower tmp;
	
	for (int i = 0; i < Size; i++) {
		
		for (int j = Size - 1; j >= i + 1; j--) {
			if (flower[j].numberofpetals > flower[i].numberofpetals) {
				
				tmp = flower[i];
				flower[i] = flower[j];
				flower[j] = tmp;
			}
		}
	}
}

void Cout(Flower flower[], int Size) {
	cout << endl << endl << "Sorted number of petals > 10" << endl << endl;
	cout << "The name of Flower\t" << "number of petals\t\t" << "cost\n";
	bubbleSortcost(flower, Size);

	for (int i = 0; i < Size; i++)
		if (flower[i].numberofpetals > 10) {
			showFlower(flower[i]);
		}

	cout << endl << endl << "Sorted cost < 500" << endl << endl;
	cout << "The name of Flower\t" << "number of petals\t\t" << "cost\n";
	bubbleSortnumberofpetals(flower, Size);

	for (int i = 0; i < Size; i++)
		if (flower[i].cost < 500) {

			showFlower(flower[i]);
		}

}

void File(Flower flower[], int Size) {
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << endl << endl << "Sorted cost" << endl << endl;
	f << "The name of Flower\t" << "number of petals\t\t" << "cost\n";
	bubbleSortcost(flower, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << flower[i].name << "\t\t\t"
		<< flower[i].numberofpetals << "\t\t"
		<< "   " << flower[i].cost << endl;

	f << endl << endl << "Sorted number of petals" << endl << endl;
	f << "The name of Flower\t" << "number of petals\t\t" << "cost\n";
	bubbleSortnumberofpetals(flower, Size);

	for (int i = 0; i < Size; i++)
		if (flower[i].cost > 250) {
			f << "\t" << flower[i].name << "\t\t\t"
				<< flower[i].numberofpetals << "\t\t"
				<< "   " << flower[i].cost << endl;
		}
	f.close();
}