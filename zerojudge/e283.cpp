//
//  main.cpp
//  e283.cpp
//
//  Created by Sanhorn on 2020/8/27.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    while(cin >> n){
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout << '\n';
        int a[4*n];
        for (int s=0; s<4*n; s++)
            cin >> a[s];
        
        for (int i=0; i<4*n; i+=4){
            int cnt = 0;
            if (a[i] == 0){
                for (int j=i; j<i+4; j++){
                    cnt+=a[j];
                }
                if (cnt == 2)
                    cout << "A";
                if (cnt == 3)
                    cout << "B";
                if (cnt == 1)
                    cout << "C";
            }
            if (a[i] == 1){
                for (int k = i; k<i+4; k++){
                    cnt+=a[k];
                }
                if (cnt == 2)
                    cout << "F";
                if (cnt == 3)
                    cout << "D";
                if (cnt == 1)
                    cout << "E";
            }
        }
    }
    return 0;
}

