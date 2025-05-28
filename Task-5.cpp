//#include<iostream>
//using namespace std;
//
//const int teams = 6;
//const int quiz = 4;
//int arr[teams][quiz];
//
//void input()
//{
//	for (int i = 0; i < teams; i++)
//	{
//		for (int j = 0; j < quiz; j++)
//		{
//			cout << "Score of team " << i + 1 << " in Quiz " << j + 1 << " is: ";
//			cin >> arr[i][j];
//		}
//		cout << endl;
//	}
//}
//void total()
//{
//	int data[teams];
//
//	cout << endl;
//	for (int i = 0; i < teams; i++)
//	{
//		int team_score = 0;
//		for (int j = 0; j < quiz; j++)
//		{
//			team_score += arr[i][j];
//		}
//		cout << "Total score of team " << i + 1 << " is: " << team_score << ".\n";
//		data[i] = team_score;
//	}
//
//	int high = data[0];
//	int high_index = 0;
//	int second_high = -1;
//	int second_index = 0;
//
//	for (int i = 0; i < teams; i++)
//	{
//		if (high < data[i])
//		{
//			high = data[i];
//			high_index = i;
//		}
//	}
//	for (int i = 0; i < teams; i++)
//	{
//		if (second_high < data[i] && data[i] != high)
//		{
//			second_high = data[i];
//			second_index = i;
//		}
//	}
//	cout << "\nTeam " << high_index + 1 << " is winner with score of " << high << "\n";
//	cout << "Team " << second_index + 1 << " is Runner up with score of " << second_high << "\n";
//	cout << endl;
//
//	for (int i = 0; i < teams; i++)
//	{
//		if (data[i] < 10)
//		{
//			cout << "Team " << i + 1 << " has failed to reach score 10.\n";
//		}
//	}
//}
//
//int main()
//{
//	input();
//
//	total();
//
//	return 0;
//}