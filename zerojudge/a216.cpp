//
//  main.cpp
//  a216.cpp
//
//  Created by Sanhorn on 2020/9/22.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long long n;
    long long f[30000], g[30000];
    for (int i=0; i<30000; i++){
        f[i] = 0;
        g[i] = 0;
    }
    while (cin >> n){
        f[1] = 1; g[1] = 1;
        for (int j = 1; j<=n; j++){
            f[j] = j + f[j-1];
            g[j] = f[j] + g[j-1];
        }
        cout << f[n] << " " << g[n] << '\n';
    }
    return 0;
}
