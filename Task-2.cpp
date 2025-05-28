//#include<iostream>
//using namespace std;
//
//const int days = 7;
//const int sales = 4;
//
//float arr[days][sales];
//
//void input()
//{
//	for (int i = 0; i < days; i++)
//	{
//		for (int j = 0; j < sales; j++)
//		{
//			cout << "Enter Day " << i + 1 << " Sales " << j + 1 << " : ";
//			cin >> arr[i][j];
//		}
//		cout << endl;
//	}
//}
//void totalSales()
//{
//	float high_sale = 0;
//	float high_product = 0;
//	int index = 0;
//
//	for (int i = 0; i < days; i++)
//	{
//		float Day_Sales = 0;
//
//		for (int j = 0; j < sales; j++)
//		{
//			Day_Sales += arr[i][j];
//		}
//		cout << "Sales of Day " << i + 1 << " is: " << Day_Sales << endl;
//
//		if (high_sale < Day_Sales)
//		{
//			high_sale = Day_Sales;
//		}
//	}
//	cout << "\nHighest Day sales is " << high_sale;
//	cout << endl;
//	cout << endl;
//
//	for (int i = 0; i < sales; i++)
//	{
//		float Sales = 0;
//		for (int j = 0; j < days; j++)
//		{
//			Sales += arr[j][i];
//		}
//		cout << "Sales of Product " << i + 1 << " is: " << Sales << endl;
//
//		{
//			if (Sales > high_product)
//			{
//				high_product = Sales;
//				index = i;
//			}
//		}
//	}
//	cout << "\nProduct " << index + 1 << " has highest Sales of " << high_product << endl;
//}
//
//int main()
//{
//	input();
//
//	totalSales();
//
//	return 0;
//}