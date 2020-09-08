//
//  main.cpp
//  d122.cpp
//
//  Created by Sanhorn on 2020/9/8.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>// 查看幾個0的時候要看5的倍數 ex: 有幾個乘5, 有幾個乘5*5
using namespace std;
int main(int argc, const char * argv[]) {
    long n;
    while(cin >> n){
        int cnt = 0;
        for (long i = 5; i<=n; i*=5)
            cnt+=(n/i);
        cout << cnt << '\n';
    }
    return 0;
}
