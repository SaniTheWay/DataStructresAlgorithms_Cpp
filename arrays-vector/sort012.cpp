// Question : sort the array of 0 , 1 , 2
// Question Link : https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1/?page=1&company[]=MAQ%20Software&sortBy=submissions#
// Approach: two pointer approach
// status : _____

#include <iostream>
#include <vector>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        int c[3] = {0, 0, 0};
        // code here int c[3] = {0};
        for (int i = 0; i < n; i++)
        {
            c[a[i]] += 1;
        }
        int k = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < c[i]; j++)
            {
                a[k] = i;
                k++;
            }
        }
    }
};

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends