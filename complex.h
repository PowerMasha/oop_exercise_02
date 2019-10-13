#ifndef D_COMPLEX_H
#define D_COMPLEX_H

#include <iostream>

struct Complex{
  Complex();
  Complex(double a, double b);

  double get(int i);
  double cosi()const;
  double sini()const;
  Complex sopr();
  Complex& operator+= (const Complex& rhs);
  Complex& operator-= (const Complex& rhs);
  Complex& operator*= (const Complex& rhs);
  Complex& operator/= (const Complex& rhs);
  Complex operator+ (const Complex& rhs) const;
  Complex operator- (const Complex& rhs) const;
  Complex operator* (const Complex& rhs) const;
  Complex operator/ (const Complex& rhs) const;

  bool operator== (const Complex& rhs) const;
  friend std::istream& operator>> (std::istream& in, Complex& rhs);
  friend std::ostream& operator<< (std::ostream& out, const Complex& rhs);		

public:
  double arr[2];

};

Complex operator ""_c(const char* str, size_t size);
#endif
