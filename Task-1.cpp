//#include <iostream>
//using namespace std;
//
//const int students = 2;
//const int subjects = 5;
//
//int arr[students][subjects];
//
//void inputMarks()
//{
//    for (int i = 0; i < students; i++)
//    {
//        for (int j = 0; j < subjects; j++)
//        {
//            cout << "Enter marks of Student " << i + 1 << " of Subject " << j + 1 << " : ";
//            cin >> arr[i][j];
//        }
//        cout << endl;
//    }
//}
//
//void Average()
//{
//    int topIndex = 0;
//    float top = 0;
//
//    for (int i = 0; i < students; i++)
//    {
//        int total = 0;
//        for (int j = 0; j < subjects; j++)
//        {
//            total += arr[i][j];
//        }
//
//        float average = (float)total / subjects;
//
//        cout << "Student " << i + 1 << " Total: " << total << endl;
//        cout << "Student " << i + 1 << " Average: " << average << endl;
//
//        {
//            if (average >= 80)
//            {
//                cout << "Grade: A";
//            }
//            else if (average >= 70 && average < 80)
//            {
//                cout << "Grade: B";
//            }
//            else if (average >= 60 && average < 70)
//            {
//                cout << "Grade: C";
//            }
//            else
//            {
//                cout << "Grade: F";
//            }
//        }
//        cout << endl;
//
//        if (average > top)
//        {
//            top = average;
//            topIndex = i;
//        }
//
//        cout << endl;
//    }
//
//    cout << "Top Scorer is Student " << topIndex + 1 << " with average marks: " << top << endl;
//}
//
//int main()
//{
//    inputMarks();
//    Average();
//
//    return 0;
//}