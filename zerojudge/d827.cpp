//
//  main.cpp
//  d827.cpp
//
//  Created by Sanhorn on 2020/8/28.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, a, b; cin >> n;
    a = n/12;
    b = n%12;
    cout << (50*a)+(5*b);
    return 0;
}
