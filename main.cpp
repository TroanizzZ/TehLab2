#include <iostream>
#include <locale.h>
#include "Cikloch.h"


int main()
{
	int n, m;
	int flag=1;
	int num = 0;
	int dd;
	std::cout << "Specify the size of the circular queue" << std::endl;
	std::cin >> dd;
	Cikloch oc1(dd);
	Cikloch oc2(dd);
	while (flag != 0) {
		std::cout << "\n\nChoose what operations you want to work with: " << std::endl;
		std::cout << "1. Binare operation" << std::endl;
		std::cout << "2. Unary operation" << std::endl;
		do {
			std::cin >> m;
		} while (m < 1 || m>2);
		if (m == 1) {
			std::cout << "\n\nMenu:" << std::endl;
			std::cout << "1. Add element" << std::endl;
			std::cout << "2. Delete element" << std::endl;
			std::cout << "3. Add a number to all elements of a queue" << std::endl;
			std::cout << "4. Subtract a number to all elements of the queue " << std::endl;
			std::cout << "5. Show queue" << std::endl;
			std::cout << "0. End programm" << std::endl;
			do {
				std::cin >> flag;
			} while (flag < 0 || flag>5);
			if (flag == 1) {
				Cikloch a(dd);
				a = ++oc1;
				std::cout << "\na:" << std::endl;
				a.show();
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				dd++;
				continue;
			}
			if (flag == 2) {
				Cikloch a(dd);
				a = --oc1;
				std::cout << "a:" << std::endl;
				a.show();
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				dd--;
				continue;
			}
			if (flag == 3) {
				Cikloch a(dd);
				a = oc1++;
				std::cout << "a:" << std::endl;
				a.show();
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				a = oc1;

				continue;
			}
			if (flag == 4) {
				Cikloch a(dd);
				a = oc1--;
				std::cout << "a:" << std::endl;
				a.show();
				std::cout << "Oc1:" << std::endl;
				a = oc1;
				oc1.show();

				continue;
			}
			if (flag == 5) {
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				continue;
			}
			if (flag == 0) {
				break;
			}

		}
		if (m == 2) {
			std::cout << "\n\nMenu:" << std::endl;
			std::cout << "1. Divide the selected element by 2 or divide 100 by the first element" << std::endl;
			std::cout << "2. Divide by 2 a randomly selected element" << std::endl;
			std::cout << "3. Copy queue" << std::endl;
			std::cout << "4. Add to selected number or to first number " << std::endl;
			std::cout << "5. Show queue" << std::endl;
			std::cout << "6. Add a custom number to a random element " << std::endl;
			std::cout << "7. Subtract custom number from random element " << std::endl;
			std::cout << "8. Check the queue and the previously copied queue for differences " << std::endl;
			std::cout << "9. Check the queue and the previously copied queue for identity " << std::endl;
			std::cout << "10. Greater than or equal to the first element of the given number " << std::endl;
			std::cout << "11. Less than or equal to the first element of the given number " << std::endl;
			std::cout << "12. Greater than the selected element of the given number " << std::endl;
			std::cout << "13. Less than the selected element of the given number " << std::endl;
			std::cout << "0. End programm" << std::endl;
			do {
				std::cin >> flag;
			} while (flag < 0 || flag>13);
			if (flag == 1) {
				Cikloch a(dd);
				std::cout << "1 - Divide the element by 2 " << std::endl;
				std::cout << "2 - Divide 100 by the first element " << std::endl;
				do {
					std::cin >> num;
				} while ((num > 2) || (num < 1));
				std::cout << "\nOc1:" << std::endl;
				oc1.show();

				if (num == 1) {
					a = oc1 / 2;
				}
				else {
					a = 100 / oc1;
				}
				std::cout << "\na:" << std::endl;
				a.show();
				

				continue;
			}
			if (flag == 2) {
				Cikloch a(dd);
				std::cout << "\nOc1:" << std::endl;
				oc1.show();
				a = oc1 /= 2;
				std::cout << "a:" << std::endl;
				a.show();


				continue;
			}
			if (flag == 3) {

				oc2 = oc1;
				std::cout << "Oc2:" << std::endl;
				oc2.show();
				std::cout << "Oc1:" << std::endl;
				oc1.show();

				continue;
			}
			if (flag == 4) {
				Cikloch a(dd);
				std::cout << "1 - Add to selected number " << std::endl;
				std::cout << "2 - Add to first number " << std::endl;
				do {
					std::cin >> num;
				} while ((num > 2) || (num < 1));
				std::cout << "By what number you want to increase " << std::endl;
				std::cin >> n;
				std::cout << "\nOc1:" << std::endl;
				oc1.show();
				if (num == 1) {
					a = oc1 + n;
				}
				else {
					a = n + oc1;
				}
				std::cout << "\na:" << std::endl;
				a.show();
				std::cout << "n:" << std::endl;
				std::cout << n << std::endl;

				continue;
			}
			if (flag == 5) {
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				continue;
			}
			if (flag == 6) {
				Cikloch a(dd);
				std::cout << "By what number you want to increase " << std::endl;
				std::cin >> n;
				std::cout << "\nOc1:" << std::endl;
				oc1.show();
				a = oc1 += n;
				std::cout << "\na:" << std::endl;
				a.show();
				std::cout << "n:" << std::endl;
				std::cout << n << std::endl;

				continue;
			}
			if (flag == 7) {
				Cikloch a(dd);
				std::cout << "By what number you want to decrease " << std::endl;
				std::cin >> n;
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				a = oc1 -= n;
				std::cout << "\na:" << std::endl;
				a.show();

				std::cout << "n:" << std::endl;
				std::cout << n << std::endl;

				continue;
			}
			if (flag == 8) {
				oc2 != oc1;
				std::cout << "\nOc2:" << std::endl;
				oc2.show();
				std::cout << "Oc1:" << std::endl;
				oc1.show();

				system("pause");
				system("cls");
				continue;
			}
			if (flag == 9) {
				oc2 == oc1;
				std::cout << "\nOc2:" << std::endl;
				oc2.show();
				std::cout << "Oc1:" << std::endl;
				oc1.show();


				continue;
			}
			if (flag == 10) {
				std::cout << "What number do you want to compare with " << std::endl;
				std::cin >> n;
				oc1>=n;
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				std::cout << "n:" << std::endl;
				std::cout << n << std::endl;

				continue;
			}
			if (flag == 11) {
				std::cout << "What number do you want to compare with " << std::endl;
				std::cin >> n;
				oc1 <= n;
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				std::cout << "n:" << std::endl;
				std::cout << n << std::endl;

				continue;
			}
			if (flag == 12) {
				std::cout << "What number of the queue do you want to compare with " << std::endl;
				do {
					std::cin >> n;
				} while ((n > dd-1) || (n < 0));
				oc1 > n;
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				std::cout << "n:" << std::endl;
				std::cout << n << std::endl;

				continue;
			}
			if (flag == 13) {
				std::cout << "What number of the queue do you want to compare with " << std::endl;
				do {
					std::cin >> n;
				} while ((n > dd-1) || (n < 0));
				oc1 < n;
				std::cout << "Oc1:" << std::endl;
				oc1.show();
				std::cout << "n:" << std::endl;
				std::cout << n << std::endl;

				continue;
			}
			if (flag == 0) {
				break;
			}

		}
	}
}
