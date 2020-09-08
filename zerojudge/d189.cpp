//
//  main.cpp
//  d189.cpp
//
//  Created by Sanhorn on 2020/9/8.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int f;
    while(cin >> f){
        int cnt = 0, e = 0, k= 0;
        while(e != 1){
            cnt+=f; // 9+3+1
            e = f;
            e+=k;
            if (e == 2){
                cnt++;
                break;
            }
            k = e%3;
            f = e/3;
        }
        cout << cnt << '\n';
    }
    return 0;
}
