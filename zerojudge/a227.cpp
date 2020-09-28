//
//  main.cpp
//  a227.cpp
//
//  Created by Sanhorn on 2020/9/28.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;

void v(int n, char from, char to){
    if (n>1)
        v(n-1, from, 'B'*3 - from - to);
    cout << "Move ring "<<n << " from " << from <<  " to " << to << '\n';
    if (n>1)
        v(n-1, 'B'*3 - from - to, to);
}


int main(int argc, const char * argv[]) {
    int n;
    while(cin >> n)
        v(n, 'A', 'C');
    cout << '\n';
    return 0;
}
