/*
/*
--------------------------------------------------
PROBLEM:
Given products and their sales count,
display the Top K best-selling products.

SORTING RULES:
1. Higher sales first
2. If sales are equal,
   smaller Product ID comes first

INPUT:
n = number of products
k = number of top products required

CONSTRAINTS:
Target Complexity:
O(n log k)

(Current beginner solution uses sorting:
O(n log n))

TECHNIQUE USED:
Sorting with Custom Comparator

VARIABLES:
n         -> number of products
k         -> top products needed
products  -> list of products
id        -> product name/ID
sales     -> sales count
compare() -> custom sorting rule

OBJECTIVE:
Learn custom sorting.

PATTERN:
Ranking / Leaderboard / Top Products
--------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Product {
    string id;
    int sales;
};

struct CompareHeap {
    bool operator()(const Product& a, const Product& b) {
        if (a.sales == b.sales)
            return a.id < b.id;

        return a.sales > b.sales;
    }
};

bool compareFinal(const Product& a, const Product& b) {
    if (a.sales == b.sales)
        return a.id < b.id;

    return a.sales > b.sales;
}

int main() {
    int n;
    cin >> n;

    int k;
    
    vector<Product> products(n);

    for (int i = 0; i < n; i++) {
        cin >> products[i].id >> products[i].sales;
    }

    cin >> k;

    priority_queue<Product, vector<Product>, CompareHeap> pq;

    for (int i = 0; i < n; i++) {
        if (pq.size() < k) {
            pq.push(products[i]);
        }
        else {
            Product top = pq.top();

            if (products[i].sales > top.sales ||
               (products[i].sales == top.sales &&
                products[i].id < top.id)) {

                pq.pop();
                pq.push(products[i]);
            }
        }
    }

    vector<Product> ans;

    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }

    sort(ans.begin(), ans.end(), compareFinal);

    for (auto &p : ans) {
        cout << p.id << " " << p.sales << endl;
    }

    return 0;
}