//#include<iostream>
//using namespace std;
//
//const int zones = 5;
//const int days = 5;
//float temp[zones][days];
//
//void input()
//{
//	for (int i = 0; i < zones; i++)
//	{
//		for (int j = 0; j < days; j++)
//		{
//			cout << "Temperature of zone " << i + 1 << " for day " << j+1 << ": ";
//			cin >> temp[i][j];
//		}
//		cout << endl;
//	}
//}
//void average()
//{
//	float average[5];
//
//	for (int i = 0; i < zones; i++)
//	{
//		float sum = 0;
//		float avg = 0;
//		for (int j = 0; j < days; j++)
//		{
//			sum += temp[i][j];
//
//			avg = sum / 5;
//		}
//		cout << "\nAverage Temperature of zone " << i + 1 << " is: " << avg;
//		average[i] = avg;
//	}
//	cout << endl;
//
//	float high = average[0];
//	float low = average[0];
//
//	int high_index = 0;
//	int low_index = 0;
//
//	for (int i = 0; i < zones; i++)
//	{
//		if (high < average[i])
//		{
//			high = average[i];
//			high_index = i;
//		}
//		if (low > average[i])
//		{
//			low = average[i];
//			low_index = i;
//		}
//	}
//	cout << "\nExtreme high temperature zone is Zone " << high_index + 1 << " with average temperature " << high << ".\n";
//	cout << "Extreme low temperature zone is Zone " << low_index + 1 << " with average temperature " << low << ".\n";
//}
//
//int main()
//{
//	input();
//
//	average();
//
//	return 0;
//}