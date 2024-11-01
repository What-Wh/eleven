#include <iostream>
#include <cmath>

using namespace std;

//1 task
//bool isPrime(int num) {
//    if (num <= 1) return false;
//    if (num <= 3) return true;
//    if (num % 2 == 0 || num % 3 == 0) return false;
//    for (int i = 5; i <= sqrt(num); i += 6) {
//        if (num % i == 0 || num % (i + 2) == 0)
//            return false;
//    }
//    return true;
//}
//
//int* removePrimes(int* arr, int& size) {
//    int newSize = 0;
//    for (int i = 0; i < size; i++) {
//        if (!isPrime(arr[i])) {
//            newSize++;
//        }
//    }
//
//    int* newArr = new int[newSize];
//    int index = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (!isPrime(arr[i])) {
//            newArr[index++] = arr[i];
//        }
//    }
//    size = newSize;
//    return newArr;
//}

//2 task
//void distributeElements(int* staticArray, int size, int*& positiveArray, int& posSize,
//    int*& negativeArray, int& negSize, int*& zeroArray, int& zeroSize) {
//
//    posSize = 0;
//    negSize = 0;
//    zeroSize = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (staticArray[i] > 0) {
//            posSize++;
//        }
//        else if (staticArray[i] < 0) {
//            negSize++;
//        }
//        else {
//            zeroSize++;
//        }
//    }
//
//    positiveArray = new int[posSize];
//    negativeArray = new int[negSize];
//    zeroArray = new int[zeroSize];
//
//    int posIndex = 0, negIndex = 0, zeroIndex = 0;
//    for (int i = 0; i < size; i++) {
//        if (staticArray[i] > 0) {
//            positiveArray[posIndex++] = staticArray[i];
//        }
//        else if (staticArray[i] < 0) {
//            negativeArray[negIndex++] = staticArray[i];
//        }
//        else {
//            zeroArray[zeroIndex++] = staticArray[i];
//        }
//    }
//}

int main() {
    // 1 task
    /*int size;
    cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int* newArr = removePrimes(arr, size);

    for (int i = 0; i < size; i++) {
        cout << newArr[i] << " ";
    }

    delete[] arr;
    delete[] newArr;

    return 0;*/

    //2 task
    /*const int size = 10; 
    int staticArray[size] = { 1, -2, 0, 3, -4, 5, 0, -6, 7, -8 };

    int* positiveArray = nullptr;
    int* negativeArray = nullptr;
    int* zeroArray = nullptr;
    int posSize, negSize, zeroSize;

    distributeElements(staticArray, size, positiveArray, posSize, negativeArray, negSize, zeroArray, zeroSize);

    for (int i = 0; i < posSize; i++) {
        cout << positiveArray[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < negSize; i++) {
        cout << negativeArray[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < zeroSize; i++) {
        cout << zeroArray[i] << " ";
    }
    cout << endl;

    delete[] positiveArray;
    delete[] negativeArray;
    delete[] zeroArray;*/
}