#include <iostream>
#include "complex.h"

int main(){

	Complex m1;
	Complex m2;
	Complex m3;
printf("Введите первое комплексное число\n");
    std::cin >> m1;


printf("Введите второе комплексное число\n");
    std::cin >> m2;


printf("Первое комплексное число\n");
std::cout << m1 <<std::endl;

printf("Второе комплексное число\n");
std::cout << m2<<std::endl;

std::cout << "Сумма:\n";
std::cout << m1 + m2 <<std::endl;
	    

std::cout << "Разность:\n";
std::cout << m1 - m2<<std::endl ;
  		 	    
std::cout << "Произведение: \n";
std::cout << m1 * m2 <<std::endl;
  
std::cout << "Деление :\n";
std::cout << m1 / m2<<std::endl ;
  

std::cout << "Сравнение комплексных чисел по длине вектора и углу:\n";
if (m1 == m2) 
	std::cout << "Комплексные числа равны\n";
else 
	std::cout << "Комплексные числа не равны\n";
std::cout << "sopr_m1:\n";
std::cout << m1.sopr() <<std::endl;

std::cout << "sopr_m2:\n";
std::cout << m2.sopr()<<std::endl ;
std::cout << "Третье комплексное число:\n";
m3 = "[2:45]"_c;
  std::cout << m3 <<std::endl;

return (0);

}
