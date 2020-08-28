//
//  main.cpp
//  d051.cpp
//
//  Created by Sanhorn on 2020/8/28.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
//#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    int f; cin >> f;
    double c = (f-32)/1.8;
   // cout << fixed<<setprecision(3) << c;
    printf("%.3f\n", c);
    return 0;
}
