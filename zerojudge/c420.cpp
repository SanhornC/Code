//
//  main.cpp
//  c420.cpp
//
//  Created by Sanhorn on 2020/9/9.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n; cin >> n;
    for (int i=0; i<n; i++){
        for (int j=i; j<n-1; j++)
            cout << "_";
        for (int k = 0; k<(1+2*i); k++)
            cout << "*";
        for (int s=i; s<n-1; s++)
            cout << "_";
        cout << '\n';
    }
    return 0;
}
