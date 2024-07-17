#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {

	map<string, int> dic;
	string name, answer;
	int choice = 0, score = 0;

	cout << "**** Starting High Score Program *****" << endl;
	while (true)
	{
		cout << "Insert : 1, Preview : 2, Exit : 3 >> ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Name and Score >> ";
			cin >> name >> score;
			dic.insert(make_pair(name, score));
		}
		else if (choice == 2)
		{
			cout << "Name >> ";
			cin >> answer;
			if (dic.find(answer) == dic.end())
			{
				cout << "Try again.." << endl;
			}
			else
			{
				cout << answer << "'s score is " << dic[answer] << endl;
			}
		}
		else
		{
			cout << "Exit.." << endl;
			break;
		}
	}


	return 0;
}