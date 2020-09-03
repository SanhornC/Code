//
//  main.cpp
//  a824.cpp
//
//  Created by Sanhorn on 2020/9/1.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    unsigned int a, b, r, total =0; cin >> a >> b >> r;
    for (int i=1; i<=r; i++){
        if (i%a == 0 || i%b==0)
            total+=i;
    }
    char c;
    if (total <= 26){
        c = 64+total;
        cout << c;
    }
    else{
        while(total>26){
            total-=26;
        }
        c = 64+total;
        cout << c;
    }
    return 0;
}
