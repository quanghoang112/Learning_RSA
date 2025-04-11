
#ifndef BigInt_H
#define BigInt_H


class BigInt
{
public:
    int nSize; 
    unsigned int* digit;
    BigInt() {}
    BigInt(int n);
    BigInt(const BigInt& obj);
    ~BigInt();


    void add(BigInt& a, BigInt& b);
    void subtract(BigInt& a, BigInt& b);
    void multiply(BigInt& a, BigInt& b);
    void copyTo(BigInt& a, int index);
    void expoModNBigInt(BigInt& x, BigInt& y, BigInt& N, BigInt& result);
    void setSize(int n);
    int msb();
    void clearBit();
    void showDigits();
    void setDigits(int index);
};

int compare(BigInt& first, BigInt& second);
int divideAndRemainder(BigInt& u, BigInt& v, BigInt& q, BigInt& r);
void gcd(BigInt& a, BigInt& b, BigInt& result);

#endif // BigInt_H
