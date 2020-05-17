#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;
const int string_len = 5;

std::string arrmemory[10] = {"512", "1024", "2048", "4096"};

struct HDD
{
	string name;
	string memory;
	
};

struct computer
{
	string name;
	int number;
	HDD HDD;
};

void randString(string &str, const int len){
	static const char alphabet[] =
        	"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	
	str.clear();
	str.append(len, ' ');

	for(int i=0; i < str.length(); i++){
    	int r = rand() % (sizeof(alphabet)-1);
    	str[i] = alphabet[r];
	}
	str[str.length()] = 0;  
}

void showHDD(const computer l){
    cout << l.name << "\t"
		 << l.number << "\t"
         << l.HDD.name << "\t\t"
		 << l.HDD.memory << endl;
		
}

void showcomputer(const computer HDD[], const int len){
	cout << "name \t"
     	<< "number \t"
     	<< "ComputerName\t"
     	<< "ComputerMemory "<< endl;

	for(int i=0; i<len; i++){
		showHDD(HDD[i]);
	}

	cout << endl;
}

void initcomputer(computer HDDs[], const int len){
	for(int i=0; i<len; i++){
    	
		randString(HDDs[i].name, string_len);
    	HDDs[i].number = rand() % 20;

    	
    	randString(HDDs[i].HDD.name, string_len);
		HDDs[i].HDD.memory = arrmemory[rand() % 3];
	}
}

void writeTextFile(const computer HDDs[], const int l){
	ofstream f;

	f.open("9 week.txt");
	for(int i = 0; i < l; i++)  
    	  f << HDDs[i].name << " "
		    << HDDs[i].number << "  "
      		<< HDDs[i].HDD.name << "  "
			<< HDDs[i].HDD.memory << endl;
	f.close();
}

void writeBinFile(computer lib[], const int l) {
	
	fstream f;
	f.open("9 week.txt", ios::out | ios::binary);
	f.write((char*)lib, sizeof(computer) * l);
	f.close();
}

void openBinFile(computer lib[], const int l) {
	fstream f;
	f.open("9 week.txt", ios::in | ios::binary);
	f.read((char*)lib, sizeof(computer) * l);
	f.close();
}


void openTextFile(computer HDDs[], const int l){
	ifstream f;

	f.open("9 week.txt");
	for(int i = 0; i < l; i++)
    	f   >> HDDs[i].name
		    >> HDDs[i].number
      		>> HDDs[i].HDD.name
			>> HDDs[i].HDD.memory;
	f.close();
}

int main()
{
	
	const int len = 20;
	const int Showmassive = 5;
	computer arrHDD[len];

	cout << "First massive computer:\n";
	initcomputer(arrHDD, len);
	writeTextFile(arrHDD, len);
	writeBinFile(arrHDD, len);
	showcomputer(arrHDD, Showmassive);

	cout << "New massive computer:\n";
	initcomputer(arrHDD, len);
	showcomputer(arrHDD, Showmassive);

	cout << "Read massive computer txt:\n";
	openTextFile(arrHDD, len);
	showcomputer(arrHDD, Showmassive);

	cout << "Read massive computer bin:\n";
	openBinFile(arrHDD, len);
	showcomputer(arrHDD, Showmassive);
	

	std::getchar();
	std::getchar();
	return 0;
}