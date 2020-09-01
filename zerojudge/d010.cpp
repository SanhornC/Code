//
//  main.cpp
//  d010.cpp
//
//  Created by Sanhorn Chen on 2020/9/1.
//  Copyright © 2020 Sanhorn Chen. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin >> n){
        int s = 0;
        if (n == 1)
            cout << "虧數";
        else{
            for (int i=1; i*i <= n; i++){
                if (n%i == 0){
                    s+=i;
                    if(n/i != i && i!= 1)
                        s+=(n/i);
                }
            }
            if (s > n)
                cout << "盈數" << '\n';
            if (s < n)
                cout << "虧數" << '\n';
            if (s == n)
                cout << "完全數" << '\n';
        }
    }
    return 0;
}
