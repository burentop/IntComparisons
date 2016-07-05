//
//  main.cpp
//  IntComparisons
//
//  Created by Brent Perry on 7/5/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    double val1, val2;
    double small, large, sum, difference, product, ratio;
    
    cout << "Please enter two decimal numbers, separated by a space: ";
    cin >> val1 >> val2;
    
    if (val1 < val2) {
        small = val1;
        large = val2;
    } else {
        small = val2;
        large = val1;
    }
    
    sum = val1 + val2;
    difference = large - small;
    product = val1 * val2;
    ratio = large / small;
    
    cout << "Thanks!\nThe smaller of the two numbers is " << small << ".\n";
    cout << "The larger of the two numbers is " << large << ".\n";
    cout << "The sum of the two numbers is " << sum << ".\n";
    cout << "The difference between the two numbers is " << difference << ".\n";
    cout << "The product of the two numbers is " << product << ".\n";
    cout << "The ratio of the two numbers is " << ratio << ":1.\n";
    
}
