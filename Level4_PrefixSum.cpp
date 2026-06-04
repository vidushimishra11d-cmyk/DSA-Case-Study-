/*
/*
--------------------------------------------------
PROBLEM:
Given transaction values,
count the number of contiguous subarrays
whose sum equals K.

INPUT:
n = number of transactions
arr[] = transaction values
K = target sum

OUTPUT:
Number of matching segments.

CONSTRAINTS:
Time Complexity Target: O(n)
Space Complexity Target: O(n)

IMPORTANT:
Array may contain negative values.

TECHNIQUE USED:
Prefix Sum + Hash Map

WHY?
Sliding Window fails when
negative numbers are present.

VARIABLES:
n          -> number of elements
arr[]      -> transaction values
K          -> target sum
prefixSum  -> running total
count      -> stores frequency of prefix sums
answer     -> number of valid subarrays

CORE IDEA:
If:
currentPrefix - oldPrefix = K

Then:
Subarray Sum = K

OBJECTIVE:
Learn Prefix Sum technique.

PATTERN:
Count Subarrays with Sum = K
--------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> transactions(n);

    for(int i = 0; i < n; i++)
    {
        cin >> transactions[i];
    }

    long long K;
    cin >> K;

    unordered_map<long long, long long> freq;

    freq[0] = 1;     // empty prefix

    long long prefixSum = 0;
    long long count = 0;

    for(int i = 0; i < n; i++)
    {
        prefixSum += transactions[i];

        if(freq.find(prefixSum - K) != freq.end())
        {
            count += freq[prefixSum - K];
        }

        freq[prefixSum]++;
    }

    cout << "Matching Segments: " << count << endl;

    return 0;
}