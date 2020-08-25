//
//  main.cpp
//  a012.cpp
//
//  Created by Sanhorn on 2020/8/25.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long a, b; cin >> a >> b;
    if (a>b)
        cout << a-b;
    else
        cout << b-a;
    return 0;
}
