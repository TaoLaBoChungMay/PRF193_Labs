#include <iostream>
#include "FileHelper.h"
enum Menu {
	addSchedule =1,
	updateSchdules,
	searchDestinationSchedule,
	totalRevenuePerFlight,
};

using namespace std;
int main () {
	int choice=-1;
	do {
		cin >> choice;
		switch (choice) {
			case addSchedule : {

				break;
			}
			case updateSchdules : {

				break;
			}
			case searchDestinationSchedule : {

				break;
			}

			case totalRevenuePerFlight : {

				break;
			}
		}
	} while (choice !=5);

		cout <<"Thank You !";
}
