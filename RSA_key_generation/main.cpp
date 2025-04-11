#include "BigInt.h"
#include "RSA.h"
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;


int main(int argc, char** argv) {
    int n;
    if (argc == 1) {
        cout << "1. 512 bits\n";
        cout << "2. 1024 bits\n";
        cout << "3. 2048 bits\n";
        cout << "RSA Algorithm" << endl;
        cout << "Chon do dai khoa (VD: Nhap 512): ";
        cin >> n;
    }
    else if (argc == 2) {
        n = atoi(argv[1]);
    }
    else {
        cout << "Qua nhieu tham so\n";
        return 0;
    }
    n = n / 32;

    srand(unsigned(time(NULL)));
    auto start = high_resolution_clock::now();


    cout << "RSA Algorithm" << endl;
    RSABigInt rsa(100);
    cout << "Random Prime Number Generation" << endl;

    BigInt primeNumberP(100), primeNumberQ(100);
    rsa.primeGeneration(primeNumberP, n/2);
    cout << "\nprimeNumber, p=\n";
    primeNumberP.showDigits();

    rsa.primeGeneration(primeNumberQ, n/2);
    cout << "\nprimeNumber, q=\n";
    primeNumberQ.showDigits();

    rsa.init(primeNumberP, primeNumberQ);
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << "\n\nTime taken by function: "
        << duration.count() << " seconds" << endl;
    //rsa.printD();
    return 0;
}
