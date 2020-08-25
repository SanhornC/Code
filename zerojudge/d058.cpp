//
//  main.cpp
//  d058.cpp
//
//  Created by Sanhorn on 2020/8/25.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a; cin >> a;
    if (a > 0)
        cout << 1;
    else if(a == 0)
        cout << 0;
    else
        cout << -1;
    return 0;
}
