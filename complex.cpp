#include "complex.h"
#include <cstring>
#include <sstream>
#include <cmath>

double PI=3.1415926535;


Complex::Complex(): arr{0,0} {}
Complex::Complex(double a,double b): arr{a, b} {}

double Complex::get(int i) {
	return arr[i];
}

double Complex::cosi()const{
	double k;
	if (arr[1]==90 || arr[1]==270){
		 k=0;} 
			else{
			k=arr[0]*cos(arr[1]*PI/180);}
	return k;
}

double Complex::sini()const{
	double s;
	if (arr[1]==0 || arr[1]==180) {
		s=0;}
			else {
			s=arr[0]*sin(arr[1]*PI/180);}
	return s;
}

Complex Complex::operator+ (const Complex& rhs) 
{
	Complex res= *this;
	double x1 = this->cosi();
	double y1 = this->sini();
	double x2 = rhs.cosi();
	double y2 = rhs.sini();
	double x=x1+x2;
	double y=y1+y2;

        res.arr[0]=std::sqrt(x*x+y*y);
	res.arr[1]=atan2(y,x);
	
	return res;
}

Complex Complex::operator- (const Complex& rhs) 
{
	Complex res = *this;
	double x1 = this->cosi();
	double y1 = this->sini();
	double x2 = rhs.cosi();
	double y2 = rhs.sini();
	double x=x1-x2;
	double y=y1-y2;

        res.arr[0]=std::sqrt(x*x+y*y);
	res.arr[1]=atan2(y,x);
	return res;
}

Complex Complex::operator* (const Complex& rhs) 
{
	Complex res = *this;
	res.arr[0] = arr[0]*rhs.arr[0];
	res.arr[1] = arr[1]+ rhs.arr[1];

	return res;
}

Complex Complex::operator/ (const Complex& rhs) 
{
	Complex res = *this;
	if (rhs.arr[0]!=0){res.arr[0] = arr[0]/rhs.arr[0];} 
	res.arr[1] = arr[1]-rhs.arr[1];
	return res;
}

bool Complex::operator== (const Complex& rhs) const
{
		return (arr[0]==rhs.arr[0] && arr[1]==rhs.arr[1]); 	
}


Complex Complex::sopr()
{
	Complex sop{0,0};
	sop.arr[0]=arr[0];
	sop.arr[1]=-arr[1];
return sop;
}

Complex operator ""_c(const char* str, size_t size){   
  std::istringstream is(str);
    char tmp;
    double c, z;
    is >> tmp >> c >> tmp >> z;
    return {c, z};
}

std::istream& operator>> (std::istream& in, Complex& rhs){
  in >> rhs.arr[0] >> rhs.arr [1];
  return in;
}

std::ostream& operator<< (std::ostream& out, const Complex& rhs)
{
	out << rhs.arr[0] <<"*(cos("<<rhs.arr[1]<<")+i*sin("<<rhs.arr[1]<<"))";
	return out;
}
