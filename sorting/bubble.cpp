// Question : _____
// Question Link : _____
// Approach: TC O(n2) simple || also have a modified one
// status : _____

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A[] = {4, 42, 7, 8, 74, 1, 5, 0, 77};
    int n = sizeof(A) / sizeof(A[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);

                cout << "swap->";
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << ", ";
    }

    return 0;
}