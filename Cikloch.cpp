#include "Cikloch.h"
#include <ctime>
#include <iostream>

Cikloch::Cikloch(int count)
{
	srand(time (0));
	och1 = new och[count];
	cnt = count;
	for (int i = 0; i < count; i++)
	{
		och1[i].n = rand() % 21 + (-10);
		if (i + 1 >= count)
		{
			och1[i].next = &(och1[0]);
		}
		else
		{
			och1[i].next = &(och1[i + 1]);
		}
	}
}

Cikloch::~Cikloch()
{
	delete[] och1;
}

void Cikloch::show()
{
	char str[3];
	std::cout << "\n";
	for (int i = 0; i < cnt; i++)
	{
		std::cout << och1[i].n << std::endl;
	}
	std::cout << "\n";
}

Cikloch& Cikloch::operator ++(){
	int i,num;
	cnt++;
	och* och2 = new och[cnt];
	for (i = 0; i < cnt-1; i++) {
		och2[i].n = och1[i].n;
		och2[i].next = &(och2[i + 1]);
	}
	std::cout << "What number do you want" << std::endl;
	std::cin >> num;
	och2[cnt - 1].n = num;
	och2[cnt - 1].next = &(och2[0]);
	delete [] och1;
	och1 = och2;
	return *this;
}

Cikloch& Cikloch::operator --() {
	int i, koef = 0;
	cnt--;
	och* och2 = new och[cnt];
	for (i = 0; i < cnt; i++) {
			och2[i].n = och1[i+1].n;
			och2[i].next = &(och2[i+1]);
	}
	och2[cnt-1].next = &(och2[0]);
	delete[] och1;
	och1 = och2;
	return *this;
}

Cikloch& Cikloch::operator --(int) {
	int i, num;
	std::cout << "By what number do you want to decrease" << std::endl;
	std::cin >> num;
	for (i = 0; i < cnt; i++)
		och1[i].n = och1[i].n - num;
	return *this;
}

Cikloch& Cikloch::operator ++(int) {
	int i, num;
	std::cout << "By what number do you want to increase" << std::endl;
	std::cin >> num;
	for (i = 0; i < cnt; i++)
		och1[i].n = och1[i].n + num;
	return *this;
}


Cikloch& Cikloch::operator /(int a) {
	int i, num;
	std::cout << "What number do you want to delete on 2" << std::endl;
	std::cin >> num;
	for (i = 0; i < cnt; i++) {
		if (i == num) {
			och1[i].n = och1[i].n / a;
		}
	}
	return *this;
}

Cikloch& Cikloch::operator /=(int a) {
	int num;
	srand(time(0));
	num = 0 + rand() % (cnt - 1);
	std::cout << "Random number:" << std::endl;
	std::cout << num << std::endl;
	och1[num].n = och1[num].n / a;
	return *this;
}

Cikloch& Cikloch::operator =(Cikloch& a) {
	Cikloch tmp(a.cnt);
	for (int i = 0; i < a.cnt; i++)
	{
		tmp.och1[i].n = a.och1[i].n;
		tmp.och1[i].next = a.och1[i].next;
	}
	delete[] och1;
	och1 = new och[a.cnt];
	for (int i = 0; i < a.cnt; i++)
	{
		och1[i].n = tmp.och1[i].n;
		och1[i].next = tmp.och1[i].next;
	}
	return *this;
}

Cikloch& Cikloch::operator +(int a) {
	int i, num;
	std::cout << "What number do you want to increase" << std::endl;
	std::cin >> num;
	while (num >= cnt) {
		std::cout << "Do another try" << std::endl;
		std::cin >> num;
	}
	for (i = 0; i < cnt - 1; i++) {
		if (i == num) {
			och1[i].n = och1[i].n + a;
		}
	}
	return *this;
}

Cikloch& Cikloch::operator +=(int a) {
	int num;
	srand(time(0));
	num = 0 + rand() % (cnt - 1);
	std::cout << "Random number:" << std::endl;
	std::cout << num << std::endl;
	och1[num].n = och1[num].n + a;
	return *this;
}

Cikloch& Cikloch::operator -=(int a) {
	int num;
	srand(time(0));
	num = 0 + rand() % (cnt - 1);
	std::cout << "Random number:" << std::endl;
	std::cout << num << std::endl;
	och1[num].n = och1[num].n - a;
	return *this;
}

Cikloch& Cikloch::operator != (Cikloch& a) {
	if (cnt != a.cnt)
	{
		std::cout << "True" << std::endl;
		return *this;
	}
	else
	{
		for (int i = 0; i < cnt; i++)
		{
			if (och1[i].n != a.och1[i].n) { 
				std::cout << "True" << std::endl;
				return *this;
			}
		}
	}
	std::cout << "False" << std::endl;
	return *this;
}

Cikloch& Cikloch::operator == (Cikloch& a) {
	if (cnt != a.cnt)
	{
		std::cout << "False" << std::endl;
		return *this;
	}
	else
	{
		for (int i = 0; i < cnt; i++)
		{
			if (och1[i].n != a.och1[i].n) {
				std::cout << "False" << std::endl;
				return *this;
			}
		}
	}
	std::cout << "True" << std::endl;
	return *this;
}

Cikloch& Cikloch::operator >=(int a) {
	if (och1[0].n >= a) {
		std::cout << "True" << std::endl;
		return *this;
	}
	else
	{
		std::cout << "False" << std::endl;
	}
	return *this;
}

Cikloch& Cikloch::operator <=(int a) {
	if (och1[0].n <= a) {
		std::cout << "True" << std::endl;
		return *this;
	}
	else {
		std::cout << "False" << std::endl;
	}
	return *this;
}

Cikloch& Cikloch::operator <(int a) {
	int i, num;
	std::cout << "What number do you want to compare" << std::endl;
	std::cin >> num;
	while ((num >= cnt)||(num==a)) {
		std::cout << "Do another try" << std::endl;
		std::cin >> num;
	}
	for (i = 0; i < cnt; i++) {
		if (i == num) {
			if (och1[i].n < och1[a].n) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}
		}
	}
	return *this;
}

Cikloch& Cikloch::operator >(int a) {
	int i, num;
	std::cout << "What number do you want to compare" << std::endl;
	std::cin >> num;
	while ((num >= cnt) || (num == a)) {
		std::cout << "Do another try" << std::endl;
		std::cin >> num;
	}
	for (i = 0; i < cnt; i++) {
		if (i == num) {
			if (och1[i].n > och1[a].n) {
				std::cout << "True" << std::endl;
			}
			else {
				std::cout << "False" << std::endl;
			}
		}
	}
	return *this;
}

Cikloch& operator +(int a, Cikloch& y)
{
	y.och1[0].n += a;
	return y;
}

Cikloch& operator /(int a, Cikloch& y)
{
	y.och1[0].n = a / y.och1[0].n;
	return y;
}