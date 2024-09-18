#include <iostream>
using namespace std;

int main() 
{
    //1
    //int n; 
    //cout << "Enter a number: ";
    //cin >> n;

    //const int rows = 2;
    //const int cols = 5; 

    //int arr[rows][cols]; 

    //for (int i = 0; i < cols; ++i) {
    //    if (i == 0) {
    //        arr[0][i] = n; 
    //    }
    //    else {
    //        arr[0][i] = arr[0][i - 1] * 2; 
    //    }
    //}

    //cout << "Two-dimensional array:" << endl;
    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        cout << arr[i][j] << " ";
    //    }
    //    cout << endl;
    //}

        //2
    //    int n;
    //    cout << "Enter a number: ";
    //    cin >> n;

    //    const int rows = 2; 
    //    const int cols = 5; 

    //    int arr[rows][cols]; 

    //    for (int i = 0; i < cols; ++i) {
    //        if (i == 0) {
    //            arr[0][i] = n;
    //        }
    //        else {
    //            arr[0][i] = arr[0][i - 1] + 1;
    //        }
    //    }

    //    cout << "Two-dimensional array:" << endl;
    //    for (int i = 0; i < rows; ++i) {
    //        for (int j = 0; j < cols; ++j) {
    //            cout << arr[i][j] << " ";
    //        }
    //        cout << endl;
    //    }

    //3
    //const int rows = 4; 
    //const int cols = 4; 
    //    int arr[rows][cols];
    //    srand(time(NULL));

    //    for (int i = 0; i < rows; ++i) {
    //        for (int j = 0; j < cols; ++j) {
    //            arr[i][j] = rand() % 100; 
    //        }
    //    }
   
    //    cout << "Initial array:" << endl;
    //    for (int i = 0; i < rows; ++i) {
    //        for (int j = 0; j < cols; ++j) {
    //            cout << arr[i][j] << "\t";
    //        }
    //        cout << endl;
    //    }

    //    int size;
    //    char direction;
    //    cout << "Enter the number of shifts: ";
    //    cin >> size;
    //    cout << "nter the direction (l - left, r - right, u - up, d - down): ";
    //    cin >> direction;

    //    for (int s = 0; s < size; ++s) {
    //        int temp;
    //        if (direction == 'l') { 
    //            for (int i = 0; i < rows; ++i) {
    //                temp = arr[i][0];
    //                for (int j = 0; j < cols - 1; ++j) {
    //                    arr[i][j] = arr[i][j + 1];
    //                }
    //                arr[i][cols - 1] = temp;
    //            }
    //        }
    //        else if (direction == 'r') { 
    //            for (int i = 0; i < rows; ++i) {
    //                temp = arr[i][cols - 1];
    //                for (int j = cols - 1; j > 0; --j) {
    //                    arr[i][j] = arr[i][j - 1];
    //                }
    //                arr[i][0] = temp;
    //            }
    //        }
    //        else if (direction == 'u') { 
    //            for (int j = 0; j < cols; ++j) {
    //                temp = arr[0][j];
    //                for (int i = 0; i < rows - 1; ++i) {
    //                    arr[i][j] = arr[i + 1][j];
    //                }
    //                arr[rows - 1][j] = temp;
    //            }
    //        }
    //        else if (direction == 'd') { 
    //            for (int j = 0; j < cols; ++j) {
    //                temp = arr[rows - 1][j];
    //                for (int i = rows - 1; i > 0; --i) {
    //                    arr[i][j] = arr[i - 1][j];
    //                }
    //                arr[0][j] = temp;
    //            }
    //        }
    //    }

    //    cout << "Array after displacement:" << endl;
    //    for (int i = 0; i < rows; ++i) {
    //        for (int j = 0; j < cols; ++j) {
    //            cout << arr[i][j] << "\t";
    //        }
    //        cout << endl;
    //    }

    //}

