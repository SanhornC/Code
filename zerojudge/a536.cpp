//
//  main.cpp
//  a536.cpp
//
//  Created by Sanhorn on 2020/9/4.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int num; cin>> num;
    int a[num][3];
    for (int i=0; i<num; i++){
        for (int j=0; j<3; j++)
            cin >> a[i][j];
    }
    
    for (int i=0; i<num; i++){
        int e = a[i][0]+a[i][1], f = 0, k = 0, cnt = 0;
        while( e/a[i][2] != 0){
            k = e%a[i][2];
            f = e/a[i][2];
            e = f;
            cnt+=f;
            e+=k;
        }
        cout << cnt << '\n';
    }
    return 0;
}
