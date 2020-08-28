//
//  main.cpp
//  d489.cpp
//
//  Created by Sanhorn on 2020/8/28.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, c, s; cin >> a >> b >> c;
    s = (a+b+c)/2;
    cout << s*(s-a)*(s-b)*(s-c);
    return 0;
}
// use 海龍公式 to get the area of triangle

