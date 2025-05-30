//#include<iostream>
//using namespace std;
//
//const int rows = 2;
//const int seats = 4;
//char flight[rows][seats];
//
//void input()
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < seats; j++)
//		{
//			cout << "Enter status of Row " << i + 1 << " Seat " << j + 1 << ":";
//			cin >> flight[i][j];
//		}
//		cout << endl;
//	}
//}
//void display_chart()
//{
//	for (int i = 0; i < rows; i++)
//	{
//		cout << "\nRow " << i + 1 << ": \n";
//		for (int j = 0; j < seats; j++)
//		{
//			cout << flight[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//void book_seat()
//{
//	int row;
//	int seat;
//
//	cout << "\nAvailable Seats: \n\n";
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < seats; j++)
//		{
//			if (flight[i][j] == 'E')
//			{
//				cout << "Seat " << j + 1 << " in Row " << i + 1;
//				cout << endl;
//			}
//		}
//	}
//	cout << endl;
//
//	cout << "\nEnter Row in which you want to book a seat: ";
//	cin >> row;
//
//	cout << "Enter Seat number which you want to book a seat: ";
//	cin >> seat;
//
//	cout << endl;
//
//	cout << "---Seat Booked---\n\n";
//
//	flight[row - 1][seat - 1] = 'B';
//
//}
//void count_seat()
//{
//	int count_E = 0;
//	int count_B = 0;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < seats; j++)
//		{
//			if (flight[i][j] == 'E')
//			{
//				count_E++;
//			}
//			else
//			{
//				count_B++;
//			}
//		}
//	}
//
//	cout << "\nNumber of Seats Booked is: " << count_B;
//	cout << "\nNumber of Seats Empty is: " << count_E;
//	cout << endl;
//	cout << endl;
//
//	int count[rows];
//
//	for (int i = 0; i < rows; i++)
//	{
//		int E_count = 0;
//		for (int j = 0; j < seats; j++)
//		{
//			if (flight[i][j] == 'E')
//			{
//				E_count++;
//			}
//		}
//		count[i] = E_count;
//	}
//
//	int max = -1;
//	int max_location = 0;
//
//	for (int i = 0; i < rows; i++)
//	{
//		if (max < count[i])
//		{
//			max = count[i];
//			max_location = i;
//		}
//	}
//
//	cout << "The Row with maximum empty seats is " << max_location + 1 << " with " << max << " seats Empty.\n\n";
//
//}
//
//int main()
//{
//	input();
//
//	int choice = 0;
//
//	do
//	{
//		cout << "1. Display whole Chart\n";
//		cout << "2. Book Seat\n";
//		cout << "3. Count Seat\n";
//		cout << "4. Exit\n\n";
//
//		cout << "Enter choice: ";
//		cin >> choice;
//
//		if (choice == 1)
//		{
//			display_chart();
//		}
//		else if (choice == 2)
//		{
//			book_seat();
//		}
//		else if (choice == 3)
//		{
//			count_seat();
//		}
//	} while (choice != 4);
//
//	return 0;
//}