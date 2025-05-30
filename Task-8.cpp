//#include<iostream>
//using namespace std;
//
//const int shelf = 5;
//const int books = 5;
//char library[shelf][books];
//
//void input()
//{
//	for (int i = 0; i < shelf; i++)
//	{
//		for (int j = 0; j < books; j++)
//		{
//			cout << "Enter status of Book " << j + 1 << " of shelf " << i + 1 << ": ";
//			cin >> library[i][j];
//		}
//		cout << endl;
//	}
//}
//void display()
//{
//	int avail = 0;
//	int issue = 0;
//	int missing = 0;
//
//	for (int i = 0; i < shelf; i++)
//	{
//		for (int j = 0; j < books; j++)
//		{
//			if (library[i][j] == 'A')
//			{
//				cout << "Book " << j + 1 << " of Shelf " << i + 1 << " is: Available\n";
//				avail++;
//			}
//			else if (library[i][j] == 'I')
//			{
//				cout << "Book " << j + 1 << " of Shelf " << i + 1 << " is: Issued\n";
//				issue++;
//			}
//			else
//			{
//				cout << "Book " << j + 1 << " of Shelf " << i + 1 << " is: Missed\n";
//				missing++;
//			}
//		}
//		cout << endl;
//	}
//
//	cout << "Number of Books Available is: " << avail << "\n";
//	cout << "Number of Books Issued is: " << issue << "\n";
//	cout << "Number of Books Missing is: " << missing << "\n";
//}
//void missing()
//{
//	int miss[shelf];
//
//	for (int i = 0; i < shelf; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < books; j++)
//		{
//			if(library[i][j]=='M')
//			{
//				sum ++;
//			}
//		}
//		miss[i] = sum;
//	}
//
//	int max_miss = -1;
//	int miss_shelf = 0;
//	for (int i = 0; i < shelf; i++)
//	{
//		if (max_miss < miss[i])
//		{
//			max_miss = miss[i];
//			miss_shelf = i;
//		}
//	}
//	cout << "\nThe Shelf " << miss_shelf + 1 << " has highest missing books count of " << max_miss << " Books missing";
//
//}
//
//int main()
//{
//	input();
//
//	display();
//
//	missing();
//
//	return 0;
//}