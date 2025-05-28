//#include<iostream>
//using namespace std;
//
//const int patient = 2;
//const int days = 7;
//char arr[patient][days];
//
//void input()
//{
//	for (int i = 0; i < patient; i++)
//	{
//		for (int j = 0; j < days; j++)
//		{
//			cout << "Enter Status of Patient " << i + 1 << " for Day " << j + 1 << ": ";
//			cin >> arr[i][j];
//		}
//		cout << endl;
//	}
//}
//
//void patient_count()
//{
//	int count_S = 0;
//	int count_C = 0;
//	int count_R = 0;
//
//	for (int i = 0; i < patient; i++)
//	{
//		for (int j = 0; j < days; j++)
//		{
//			if (arr[i][j] == 'C')
//			{
//				count_C++;
//			}
//			else if (arr[i][j] == 'S')
//			{
//				count_S++;
//			}
//			else
//			{
//				count_R++;
//			}
//		}
//	}
//	cout << "\nNumber of Critical Patients is: " << count_C;
//	cout << "\nNumber of Stable Patients is: " << count_S;
//	cout << "\nNumber of Recovered Patients is: " << count_R;
//	cout << endl;
//}
//void critical()
//{
//    for (int i = 0; i < patient; i++)
//    {
//        int day_count = 0;
//        for (int j = 0; j < days; j++)
//	    {
//            if (arr[i][j] == 'C') 
//			{
//                day_count++;
//            }
//        }
//        cout << "Patient " << i + 1 << " remained in Critical state for " << day_count << " days." << endl;
//    }
//}
//
//int main()
//{
//	input();
//
//	patient_count();
//
//	critical();
//
//	return 0;
//}