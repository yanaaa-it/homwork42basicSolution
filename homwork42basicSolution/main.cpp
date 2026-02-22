#include"util.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);



	user_init(array, length);

	int min= find_min( array,  length);
	int max= find_max(array, length);
	double arithmetial_avr = find_arithmetial_average(array, length);
	double geometrical_avr= find_geometrical_average(array, length);

	print("Result array:\n min number:",min);
	print("max number:",max);
	print("arithmetial average number : ", arithmetial_avr);
	print("geometrical average number:", geometrical_avr);

	return 0;
}