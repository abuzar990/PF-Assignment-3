//#include<iostream>
//using namespace std;
//
//const int candidate = 4;
//const int polling = 6;
//int vote[candidate][polling];
//
//void input()
//{
//	for (int i = 0; i < candidate; i++)
//	{
//		for (int j = 0; j < polling; j++)
//		{
//			cout << "Enter Total Votes of Candidate " << i + 1 << " in Polling Station " << j + 1 << ": ";
//			cin >> vote[i][j];
//		}
//		cout << endl;
//	}
//}
//void votes()
//{
//	int voting[candidate];
//
//	for (int i = 0; i < polling; i++)
//	{
//		int total = 0;
//		for (int j = 0; j < candidate; j++)
//		{
//			total += vote[j][i];
//		}
//		cout << "\nTotal Votes of polling Station " << i + 1 << " is " << total;
//	}
//	cout << endl;
//
//	for (int i = 0; i < candidate; i++)
//	{
//		int total = 0;
//		for (int j = 0; j < polling; j++)
//		{
//			total += vote[i][j];
//		}
//		cout << "\nTotal Votes of Candidate " << i + 1 << " is " << total;
//		voting[i] = total;
//	}
//	cout << endl;
//
//	int max_vote = -1;
//	int win = 0;
//
//	for (int i = 0; i < candidate; i++)
//	{
//		if (max_vote < voting[i])
//		{
//			max_vote = voting[i];
//			win = i;
//		}
//	}
//
//	cout << "\n The winner is " << win + 1 << " with total votes " << max_vote << "\n";
//}
//
//int main()
//{
//	input();
//
//	votes();
//
//	return 0;
//}