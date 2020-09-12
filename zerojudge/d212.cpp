//
//  main.cpp
//  d212.cpp
//
//  Created by Sanhorn on 2020/9/11.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long a;
    while(cin >> a){
        long b[a+1];
        for (int j=0; j<a; j++)
            b[j] = 0;
        b[0] = 1; b[1] = 1;
        if (a > 1){
            for (int i = 2; i<a+1; i++){
                b[i] = b[i-1] + b[i-2];
            }
        }
        cout << b[a] << '\n';
    }
    return 0;
}
