#include <iostream>
#include <vector>
#include <random>
#include <cassert>
#include <cmath>
#include <algorithm>

using namespace std;

int findMin(int ar[], int size) {
    int m = ar[0];
    for (int i=1; i<size; i++) {
        if (m > ar[i]) {
            m = ar[i];
        }
    }
    return m;
}

int findMax(int ar[], int size) {
    int m = ar[0];
    for (int i=1; i<size; i++) {
        if (m < ar[i]) {
            m = ar[i];
        }
    }
    return m;
}

// find middle value of an unsort array.
int findMiddleValue(int ar[], int size) {
    // return middle value of ar.
    sort(ar, ar+size);

    return size / 2;
}

void assignValues(int ar[], int size) {
    srand(1000);
    for (int i=0; i<size; i++) {
        ar[i] = rand() % 1000;
    }
}

int sum(int ar[], int size) {
    int total = 0;
    for (int i=0; i<size; i++) {
        total += ar[i];
    }
    return total;
}

// calculate the average by using the sum function.
double average(int ar[], int size) {
    double a = (double) sum(ar, size) / size;
    return a;
}

void printVec(vector<int> vec) {
    for (size_t i=0; i<vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

void print(int ar[], int size) {
    for (int i=0; i<size; i++) {
        cout << ar[i] << endl;
    }
}

int findMiddleValue2(int ar[], int size) {
    int copyAr[size];
    int c = 0;
    for (int i=0; i<size; i++) {
        // copyAr[i] = ar[i];
        int v = ar[i];

        if (c == 0) {
            copyAr[c] = v;
            c++;
        }
        else {
            int j;
            for (j=0; j<c; j++) {
                if (copyAr[j] > v) {
                    break;
                }
            }
            int k;
            for (k=c; k > j;  k--) {
                copyAr[k] =copyAr[k-1];
            }
//            int k = c;
//            while (k >= j) {
//                copyAr[k+1] = copyAr[k];
//                k--;
//            }

            copyAr[k] = v;
            c++;
        }
        // 38
        // 221
        // 304
        // 509
        // 849
        //


    }

}

int main() {

//    myList[0] = 1;
//    myList[4] = 2;
//    myList[5] = 3;
//    myList[7] = 4;
//    // how to access read from array
//    for (int i=0; i<4; i++) {
//        cout << myList[i] << endl;
//    }
//    // wrtie to array
//    for (int i=0; i<4; i++) {
//        myList[i] = i * 2;
//        cout << myList[i] << endl;
//    }
//
//    for (int i=0; i<4; i++) {
//        cout << myList[i] << endl;
//    }

//    int k;
//    cout << &k << endl;
//    cout << myList << endl;
//    cout << *(myList+1) << endl;
//
//
//    vector<int> myVector;
//
//    myVector.push_back(1);
//    myVector.push_back(2);
//    myVector.push_back(3);
//    myVector.push_back(4);
//    myVector.push_back(5);
//    cout << myVector.size() << endl;

//    for (size_t i=0; i<10; i++)
//    {
//        cout << myVector.at(i) << endl;
//    }

//    myVector[0] = 10;
//    myVector[1] = 20;
//
//    myVector.at(3) = 30;
//    myVector.at(4) = 40;
//
//    for (size_t i=0; i<5; i++)
//    {
//        cout << myVector[i] << endl;
//    }
//
//    myVector[0] = 10;
//    myVector[2] = 20;
    int size = 10;
    int myList[size];
    assignValues(myList, size);
    print(myList, 10);
    cout << "Min: " << findMin(myList, 10) << endl;
    assert(findMin(myList, 10) == 38);
    cout << "Max: " << findMax(myList, 10) << endl;
    assert(findMax(myList, 10) == 968);
    cout << "Average: " << average(myList, 10) << endl;
    double avg = average(myList,10);
    assert(fabs(avg - 463.4) < 0.000001);

    int m = findMiddleValue2(myList, 10);
    cout << m << endl;
    cout << myList[m] << endl;
    print(myList, 10);
    return 0;

}
