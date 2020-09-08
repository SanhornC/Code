//
//  main.cpp
//  a215.cpp
//
//  Created by Sanhorn on 2020/9/1.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b;
    while(cin >> a >> b){
        int cnt = 0, total = 0;
        for (int i=a; ;i++){
            total+=i;
            cnt++;
            if (total > b){
                cout << cnt << '\n';
                break;
            }
        }
    }
    return 0;
}
