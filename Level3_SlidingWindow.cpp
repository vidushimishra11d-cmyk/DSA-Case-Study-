/*/*
--------------------------------------------------
PROBLEM:
Given daily revenue values,
find the shortest contiguous subarray
whose sum is at least T.

INPUT:
n = number of days
revenue[] = revenue values
T = target revenue

OUTPUT:
Length of shortest valid window.

CONSTRAINTS:
Time Complexity Target: O(n)
Space Complexity Target: O(1)

TECHNIQUE USED:
Sliding Window / Two Pointers

WHY?
All revenue values are non-negative.

VARIABLES:
n         -> number of days
revenue[] -> revenue values
T         -> target revenue
left      -> start of window
right     -> end of window
sum       -> current window sum
answer    -> shortest valid length

OBJECTIVE:
Learn how to maintain a moving window
instead of checking all subarrays.

PATTERN:
Shortest / Longest Contiguous Segment
with Positive Numbers
--------------------------------------------------
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>revenue(n);

    for(int i=0;i<n;i++){
        cin>>revenue[i];
    }

    int T;
    cin>>T;

    int left=0;
    int sum=0;
    int answer=n+1;

    for(int right = 0; right<n; right++)
    {
        sum=sum+revenue[right];

        while(sum>=T){
            int length=right-left + 1;

            if(length<answer){
                answer=length;
            }
            sum=sum-revenue[left];
            left++;
        }
    }
    if(answer == n+1){
        cout<<"Shortest Window: 0";
    }else{
        cout<<"Shortest Window: "<<answer;
    }
    return 0;
}