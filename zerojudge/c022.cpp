//
//  main.cpp
//  c022.cpp
//
//  Created by Sanhorn on 2020/9/1.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n; cin >> n;
    int a[2];
    for (int i=0; i< n; i++){
        int cnt= 0;
        for (int j =0; j<2; j++){
            cin >> a[j];
        }
        for (int s=a[0]; s<=a[1]; s++){
            if (s%2 != 0)
                cnt+=s;
        }
        cout << "Case " << i+1 <<": " << cnt << '\n';
    }
    return 0;
}
