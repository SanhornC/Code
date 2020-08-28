//
//  main.cpp
//  a006.cpp
//
//  Created by Sanhorn on 2020/8/28.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int j[3], x1, x2 , a, b, c;
    for (int i=0;i<3; i++)
        cin >> j[i];
    
    a = j[0]; b = j[1]; c = j[2];
    x1 = ((-b)+sqrt(b*b-4*a*c))/(2*a);
    x2 = ((-b)-sqrt(b*b-4*a*c))/(2*a);
    
    if ((b*b - 4*a*c) >= 0){
        if (x1 != x2){
            cout << "Two different roots ";
            if (x1 > x2)
                cout << "x1=" << x1 << " , x2=" << x2 << endl;
            else
                cout << "x2=" << x2 << " , x1=" << x1 << endl;
        }
        else
            cout << "Two same roots x=" << x1 << endl;
    }
    else
        cout << "No real root" << endl;
    return 0;
}
