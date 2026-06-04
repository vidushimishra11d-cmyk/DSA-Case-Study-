/*
/*
--------------------------------------------------
PROBLEM:
Given a product catalog containing:
(Product ID, Price)

and a shopping cart containing:
(Product ID, Quantity)

Calculate the total cart value.

INPUT:
m = number of products in catalog
k = number of items in cart

CONSTRAINTS:
Time Complexity Target: O(m + k)
Space Complexity Target: O(m)

TECHNIQUE USED:
Hash Map (unordered_map / map)

WHY?
Need fast lookup of price using Product ID.

VARIABLES:
m         -> number of catalog products
priceMap  -> stores Product ID -> Price
k         -> number of cart items
id        -> product identifier
quantity  -> quantity purchased
total     -> final cart value

OBJECTIVE:
Learn how to use a Hash Map for fast searching.

PATTERN:
Key -> Value lookup
--------------------------------------------------
*/ 
#include<iostream>
#include<map>
using namespace std;
 
int main(){
    int m;
    cin>>m;

    map<string, int> price;

    for(int i=0;i<m;i++){
        string id;
        int p;

        cin>>id>>p;
        price[id]=p;
    }
    int k;
    cin>>k;

    int total = 0;

    for(int i=0;i<k;i++){
        string id;
        int quantity;

        cin>>id>>quantity;

        total = total + price[id]*quantity;
    }
    cout<<"Cart Total: "<<total;

    return 0;
} 