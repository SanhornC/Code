//
//  main.cpp
//  b138.cpp
//
//  Created by Sanhorn on 2020/10/2.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[10], n, c=0;
    for (int i=0; i<10; i++)
        cin >> a[i];
    cin >> n;
    for (int j=0; j<10; j++){
        if (a[j] <= n+30)
            c++;
    }
    cout << c << '\n';
}

