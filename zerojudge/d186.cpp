//
//  main.cpp
//  d186.cpp
//
//  Created by Sanhorn on 2020/9/1.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b;
    while(cin >> a >> b){
        if (!a && !b)
            break;
        int i, j;
        for(i = 0; i* i <a; i++);
        for(j = i; j*j <= b; j++);
        cout << j-i << '\n';
    }
}

