#include<bits/stdc++.h>
using namespace std;
int main() {


    // int buyprice, buyquantity, newbuyquantity, cmp;
    // cin>>buyprice>>buyquantity>>cmp>>newbuyquantity;
    
    // int avg, nos;
    // nos=( buyquantity + newbuyquantity);
    // avg= (buyprice*buyquantity) + (newbuyquantity * cmp);
    // avg = avg/nos;
    // cout<<avg;


    int buyprice, buyquantity, cmp, avgrequired;
    cin>>buyprice>>buyquantity>>cmp>>avgrequired;
    




    int avg= avgrequired;
    int newbuyquantity = buyquantity*(avg - buyprice);
    newbuyquantity = newbuyquantity/(cmp - avg);
    cout<<newbuyquantity;


    return 0;
}
