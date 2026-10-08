#include <bits/stdc++.h>
using namespace std;

int lcs(vector<int>& arr, int n)
{
    int longest = 0;

    unordered_set<int> s;

    // Insert all elements into the set
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    // Find the beginning of each consecutive sequence
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int len = 1;
            int current = arr[i];

            while (s.find(current + 1) != s.end())
            {
                current++;
                len++;
            }

            longest = max(longest, len);
        }
    }

    return longest;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Longest consecutive sequence length: "
         << lcs(arr, n) << endl;

    return 0;
}
    /*
    Enter number of elements: 5
Enter 5 elements: 12
35
13
65
14
Longest consecutive sequence length: 3
*/
