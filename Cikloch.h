#pragma once


struct och {
	int n = 0;
	och* next = 0;
};
class Cikloch
{


private:
	och* och1;
	int cnt;
public:
	Cikloch(int count);
	~Cikloch();
	void show();

	Cikloch& operator ++ (); //Add element
	Cikloch& operator ++ (int); //Add a number to all elements of a queue

	Cikloch& operator -- (); //Delete element
	Cikloch& operator -- (int); //Subtract a number to all elements of the queue

	Cikloch& operator / (int a);//Divide the element by 2
	Cikloch& operator /= (int a);//Divide by 2 a randomly selected element
	Cikloch& operator = (Cikloch& a);//Copy queue
	Cikloch& operator + (int a);//Add to selected number
	Cikloch& operator += (int a);// Add a custom number to a random element
	Cikloch& operator -= (int a);// Subtract custom number from random element
	Cikloch& operator != (Cikloch& a);// Check the queue and the previously copied queue for differences
	Cikloch& operator == (Cikloch& a);// Check the queue and the previously copied queue for identity
	Cikloch& operator >= (int a);// Greater than or equal to the first element of the given number
	Cikloch& operator <= (int a);//  Less than or equal to the first element of the given number
	Cikloch& operator > (int a);// Greater than the selected element of the given number
	Cikloch& operator < (int a);// Less than the selected element of the given number

	friend Cikloch& operator+(int a, Cikloch& y);//Add to first number
	friend Cikloch& operator/(int a, Cikloch& y);//Divide 100 by the first element

};

