#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int rozmiar_arr = 10;
    //int arr[rozmiar_arr];
    int * arr;
    arr = new int[10];

    // Wype³nienie tablicy liczbami pseudolosowymi z zakresu od 1 do 49
    for (int i = 0; i < rozmiar_arr; ++i) {
        arr[i] = rand() % 49 + 1;
    }

    // Wyœwietlenie wszystkich elementów tablicy
    cout << "Tablica liczb pseudolosowych:\n";
    for (int i = 0; i < rozmiar_arr; ++i) {
        cout << arr[i] << ", ";
    }
    cout << "\n";

    int firstMin, secondMin;

    if (arr[0] < arr[1]) {
        firstMin = arr[0];
        secondMin = arr[1];
    } else {
        firstMin = arr[1];
        secondMin = arr[0];
    }

    for (int i = 2; i < 10; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin) {
            secondMin = arr[i];
        }
    }

    cout << "Dwie najmniejsze liczby: " << firstMin << " i " << secondMin << endl;
    delete arr;
    return 0;
}


