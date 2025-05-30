//#include<iostream>
//using namespace std;
//
//const int users = 10;
//const int products = 5;
//int rating[users][products];
//
//void input()
//{
//	for (int i = 0; i < users; i++)
//	{
//		for (int j = 0; j < products; j++)
//		{
//			cout << "Rate of User " << i + 1 << " for Product " << j + 1 << " is (1-5): ";
//			cin >> rating[i][j];
//		}
//		cout << endl;
//	}
//}
//void average()
//{
//	for (int i = 0; i < products; i++)
//	{
//		int perfect = 0;
//		for (int j = 0; j < users; j++)
//		{
//			if (rating[j][i] >= 3)
//			{
//				perfect++;
//			}
//		}
//		cout << perfect << " Users gave a perfect rating to product " << i + 1;
//		cout << endl;
//	}
//
//	float avg[products];
//	for (int i = 0; i < products; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < users; j++)
//		{
//			sum += rating[j][i];
//		}
//		avg[i] = sum / users;
//	}
//
//	cout << endl;
//
//	int worst = -1;
//	int worst_loc = 0;
//
//	for (int i = 0; i < products; i++)
//	{
//		cout << "\nAverage rating of product " << i + 1 << " is: " << avg[i];
//
//		if (worst < avg[i])
//		{
//			worst = avg[i];
//			worst_loc = i;
//		}
//	}
//
//	cout << "\n\nProduct " << worst_loc + 1 << " has worst average of " << worst;
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