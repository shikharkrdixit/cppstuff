#include <iostream>
#include <unordered_map>
using namespace std;

//All Operations are O(1) for unordered_maps.

int main()
{
	unordered_map<string, int> menu;

	menu["Dosa"] = 50;
	menu["Noodles"] = 80;
	menu["Pizza"] = 120;
	menu["Beverages"] = 20;
	menu["Maggie"] = 30;

	menu.insert(make_pair("CholeBhature", 55));
	menu.erase("Pizza"); //removes pizza from list
	cout << "Enter desired item ";
	string item;
	cin >> item;

	if (menu.count(item)) {
		cout << menu[item] << " ";
	}
	else { cout << item << " unavailable";
	}

}