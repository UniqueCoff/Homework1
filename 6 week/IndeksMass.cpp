#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int const size = 10;
    int c = 0;
    int arr[size];

    for (int i = 0; i < size; i++) {

        arr[i] = rand() % 20 - 10;

    }

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	cout << arr[5] << endl;
	cout << arr[6] << endl;
	cout << arr[7] << endl;
	cout << arr[8] << endl;
	cout << arr[9] << endl;





	int maxznach = arr[1];
	int nomerZnach = 0;

	for (int i = 0; i < size; i++)
	{
		if ((i + 1) % 2 != 0 && arr[i] > maxznach)
		{
			maxznach = arr[i];
			nomerZnach = i + 1;
		}

	}
	cout << "Nomer elementa massiva raven " << nomerZnach << endl;
	cout << "Element massiva raven " << maxznach << endl;
}

