#pragma once
#ifndef RSA_H
#define RSA_H
#include "BigInt.h"

class RSABigInt
{
public:
    RSABigInt(int nSize);
    virtual ~RSABigInt();

    void CalculateD(BigInt& e, BigInt& phi, BigInt& d);
    void init(BigInt& p, BigInt& q);
    void eCalculate(BigInt& phi, BigInt& result);
    void randomNGeneration(BigInt& randResult, int n);
    void primeGeneration(BigInt& randPrime, int n);

private:
    int SIZE;
    BigInt N;
    BigInt d;
    BigInt e;
};

#endif // RSA_H


