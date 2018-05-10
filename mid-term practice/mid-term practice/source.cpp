#include <iostream>
#include <string>
#include <vector>

#include "Taxpayer.h"

using namespace std;

int main() {

	Person bob("Bob", 355555, 3415);
	Taxpayer t_bob(bob, 300, 300, bob.getSSN());

	t_bob.displayPersonalInformation();
	t_bob.displayCashOwed();

	vector<Taxpayer> taxPayers;
	taxPayers.push_back(t_bob);

	taxPayers[0].displayPersonalInformation();
	taxPayers[0].displayCashOwed();

	return 0;
}