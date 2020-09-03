//
//  main.cpp
//  e622.cpp
//
//  Created by Sanhorn on 2020/9/3.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, s; cin >> n >> s;
    int times = s/1000, a[n][2], b;
    for (int i=0; i<n; i++){
        for (int j=0; j<2; j++)
            cin >> a[i][j];
    }
    
    for (int i=0; i<n; i++){
        if(a[i][1] - 29 <= 0)
            a[i][0]+=(times*10);
        else if(a[i][1] >= 30 && a[i][1] <=39)
            a[i][0]+=(times*50);
        else
            a[i][0]+=(times*100);
    }

    for (int i=0; i<n; i++){
        b = 0;
        for (int j=0; j<n; j++){
            if (a[i][0] > a[j][0])
                b++;
        }
        if (b == n-1)
            cout << i+1 << " " << a[i][0];
    }
    return 0;
}
