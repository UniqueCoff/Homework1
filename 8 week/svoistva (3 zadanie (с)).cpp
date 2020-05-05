#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

struct Flower {

	string Flowername;
	int Numberofpetals;
	float Numberofstamens;
};

void bubbleSortNumberofpetals(Flower flowers[], int Size);
void bubbleSortNumberofstamens(Flower flowers[], int Size);
void showFlower(const Flower p);
void randString(string& str);
void Cout(Flower flowers[], int Size);
void File(Flower flowers[], int Size);

int main() {

	int const Size = 8;
	Flower flowers[Size];
	cout << "\tFlower name\t" << "Number of petals\t" << "Number of stamens\n";
	for (int i = 0; i < Size; i++) {

		flowers[i].Numberofpetals = 1 + rand() % 121;
		flowers[i].Numberofstamens = 1 + rand() % 12;
		randString(flowers[i].Flowername);

		showFlower(flowers[i]);

	}
	Cout(flowers, Size);
	File(flowers, Size);

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

	cout << "\t" << p.Flowername << "\t\t\t"
		<< p.Numberofpetals << "\t\t"
		<< "   " << p.Numberofstamens << endl;
}

void bubbleSortNumberofstamens(Flower flowers[], int Size) {

	int j = 0;
	Flower tmp;
	
	for (int i = 0; i < Size; i++) {
		
		for (int j = Size - 1; j >= i + 1; j--) {
			if (flowers[j].Numberofstamens > flowers[i].Numberofstamens) {
				
				tmp = flowers[i];
				flowers[i] = flowers[j];
				flowers[j] = tmp;
			}
		}
	}
}

void bubbleSortNumberofpetals(Flower flowers[], int Size) {

	int j = 0;
	Flower tmp;
	
	for (int i = 0; i < Size; i++) {
		
		for (int j = Size - 1; j >= i + 1; j--) {
			if (flowers[j].Numberofpetals > flowers[i].Numberofpetals) {
				
				tmp = flowers[i];
				flowers[i] = flowers[j];
				flowers[j] = tmp;
			}
		}
	}
}

void Cout(Flower flowers[], int Size) {

	cout << endl << endl << "Sorted Number of stamens" << endl << endl;
	cout << "\tFlower name\t" << "Number of petals\t" << "Number of stamens\n";
	bubbleSortNumberofstamens(flowers, Size);

	for (int i = 0; i < Size; i++)
		showFlower(flowers[i]);

	cout << endl << endl << "Sorted Number of petals" << endl << endl;
	cout << "\tFlower name\t" << "Number of petals\t" << "Number of stamens\n";
	bubbleSortNumberofpetals(flowers, Size);

	for (int i = 0; i < Size; i++)
		showFlower(flowers[i]);
}

void File(Flower flowers[], int Size) {

	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << endl << endl << "Sorted Number of stamens" << endl << endl;
	f << "\tFlower name\t" << "Number of petals\t" << "Number of stamens\n";
	bubbleSortNumberofstamens(flowers, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << flowers[i].Flowername << "\t\t\t"
		<< flowers[i].Numberofpetals << "\t\t"
		<< "   " << flowers[i].Numberofstamens << endl;

	f << endl << endl << "Sorted Number of petals" << endl << endl;
	f << "\tFlower name\t" << "Number of petals\t" << "Number of stamens\n";
	bubbleSortNumberofpetals(flowers, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << flowers[i].Flowername << "\t\t\t"
		<< flowers[i].Numberofpetals << "\t\t"
		<< "   " << flowers[i].Numberofstamens << endl;
	f.close();
}