//
//  main.cpp
//  a147.cpp
//
//  Created by Sanhorn on 2020/9/4.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while (cin >> n){
        if (n == 0)
            break;
        for (int i=1; i<n; i++){
            if (i > 0 && i%7 != 0)
                cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}
