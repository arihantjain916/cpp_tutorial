#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    cout << "The initial value of x is " << x << endl;
    x++;
    cout << "The value of x++ is " << x << endl;
    cout << "The value of ++x is " << ++x << endl;

    // imagine you have a bag of candies. The candies are like numbers, and you want to change the number of candies you have in the bag.
    // x++ means you want to take a candy from the bag and THEN increase the number in the bag by 1. It's like saying, "I want a candy, and after I get it, add one more candy to the bag."
    // ++x means you want to add a candy to the bag first and THEN take one from it. It's like saying, "Add one candy to the bag, and then give me one from it."

    // Assignment:1
    // Equation is: z = x + 10 / 3y
    int y = 1;
    double sum = (x + 10) / (3 * y);
    cout << "The value of sum is " << sum << endl;

    // Assignment:2

    int sales = 95000;
    float tax = 0.04;
    float countrytax = 0.02;
    
    float SalesAfterTax = sales - ((sales * tax) + (sales * countrytax)) ;
    cout << "The total sales after tax is: ₹" << SalesAfterTax <<endl;

    return 0;
}