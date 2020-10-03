//
//  main.cpp
//  a693.cpp
//
//  Created by Sanhorn on 2020/9/11.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, m;
    while (cin >> n>> m){
        int a[n], c[n], b[m][2];
        for (int i=0; i<n; i++){
            c[i] = 0;
            cin >> a[i];
        }
        for (int j=0; j<m; j++){
            for (int k = 0; k<2; k++)
                cin >> b[j][k];
        }
        c[0] = a[0];
        for(int i=1; i<n; i++)
            c[i] += (a[i] + c[i-1]);
        
        for (int j=0; j<m; j++){
            if (b[j][0] == 1)
                cout << c[b[j][1]-1] << '\n';
            else
                cout << c[b[j][1]-1] - c[b[j][0]-2] << '\n';
        }
    }
    return 0;
}
