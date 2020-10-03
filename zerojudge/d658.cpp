//
//  main.cpp
//  d658.cpp
//
//  Created by Sanhorn on 2020/9/30.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int cnt = 0;
int c(int a){
    int b = 1;
    for (int i=0; ;i++){
        if (b>=a)
            return i;
        b*=2;
    }
}
int main(int argc, const char * argv[]) {
    int d;
    int t = 0;
    while(cin >> d){
        if (d < 0)
            break;
        t++;
        cout << "Case " << t << ": " << c(d) << '\n';
    }
    
    return 0;
}
