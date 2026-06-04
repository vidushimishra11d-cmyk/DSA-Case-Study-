/*
--------------------------------------------------
PROBLEM:
Given products with:
(Cost, Value)

and a budget B,

choose products to maximize total value
without exceeding the budget.

INPUT:
n = number of products
B = budget

Each product:
cost[i]
value[i]

OUTPUT:
Maximum obtainable value.

CONSTRAINTS:
Time Complexity Target: O(n * B)
Space Complexity Target: O(B)

TECHNIQUE USED:
Dynamic Programming (0/1 Knapsack)

WHY?
For every product:
1. Take it
2. Skip it

DP avoids recalculating
the same states repeatedly.

VARIABLES:
n         -> number of products
B         -> budget
cost[]    -> product costs
value[]   -> product values
dp[]      -> maximum value for each budget

CORE IDEA:
dp[j] =
max(
    dp[j],
    dp[j-cost] + value
)

OBJECTIVE:
Learn Dynamic Programming.

PATTERN:
Maximize Profit/Value
under Budget/Capacity Constraint
--------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, B;
    cin >> n >> B;

    vector<int> cost(n);
    vector<long long> delight(n);

    for(int i = 0; i < n; i++)
    {
        cin >> cost[i] >> delight[i];
    }

    vector<long long> dp(B + 1, 0);

    for(int i = 0; i < n; i++)
    {
        for(int b = B; b >= cost[i]; b--)
        {
            dp[b] = max(dp[b],
                        dp[b - cost[i]] + delight[i]);
        }
    }

    cout << "Max Delight: " << dp[B] << endl;

    return 0;
}

/*
/*
HASH MAP
---------
Use When:
- Fast lookup needed
- Search by ID/Key

Examples:
- Product Catalog
- Student Database
- Frequency Counting

SLIDING WINDOW
--------------
Use When:
- Contiguous subarray
- Positive numbers
- Shortest/Longest segment

PREFIX SUM
----------
Use When:
- Subarray sum problems
- Negative numbers possible

SORTING
-------
Use When:
- Rankings
- Leaderboards
- Top performers

DYNAMIC PROGRAMMING
------------------
Use When:
- Maximize/Minimize something
- Multiple choices
- Overlapping subproblems

Classic Example:
0/1 Knapsack
*/