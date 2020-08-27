//
//  main.cpp
//  a053.cpp
//
//  Created by Sanhorn on 2020/8/27.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n; cin >> n;
    int cnt = 0;
    if (n < 40) {
        for (int i =1; i<n+1; i++){
            if(i<11)
                cnt+=6;
            if(i>10 && i<21)
                cnt+=2;
            if(i>20 && i<41)
                cnt+=1;
        }
        cout << cnt << endl;
    }
    else
        cout << 100 << endl;
    return 0;
}
