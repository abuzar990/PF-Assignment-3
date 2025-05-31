//#include<iostream>
//using namespace std;
//
//const int shifts = 3;
//const int days = 7;
//float quality[shifts][days];
//
//void input()
//{
//	for (int i = 0; i < shifts; i++)
//	{
//		for (int j = 0; j < days; j++)
//		{
//			cout << "Enter Quality in %age of Shift " << i + 1 << " of Day " << j + 1 << ": ";
//			cin >> quality[i][j];
//		}
//		cout << endl;
//	}
//}
//void average()
//{
//	for (int i = 0; i < shifts; i++)
//	{
//		float sum = 0;
//		for (int j = 0; j < days; j++)
//		{
//			sum += quality[i][j];
//		}
//		cout << "Average Defect of Shift " << i + 1 << " is " << sum/days;
//		cout << endl;
//	}
//	cout << endl;
//
//	float day_avg[days];
//	for (int i = 0; i < days; i++)
//	{
//		float sum = 0;
//		for (int j = 0; j < shifts; j++)
//		{
//			sum += quality[j][i];
//		}
//		cout << "Average Defect of Day " << i + 1 << " is " << sum / shifts;
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void critical()
//{
//	const float cri = 10.0f;
//	for (int i = 0; i < shifts; i++)
//	{
//		float sum = 0;
//		for (int j = 0; j < days; j++)
//		{
//			sum += quality[i][j];
//		}
//		if (sum / days < cri)
//		{
//			cout << "Shift " << i + 1 << " is a critical shift.";
//		}
//	}
//}
//
//int main()
//{
//	input();
//
//	average();
//
//	critical();
//
//	return 0;
//}