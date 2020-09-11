//
//  main.cpp
//  c013.cpp
//
//  Created by Sanhorn on 2020/9/10.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n; cin >> n;
    for (int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        cout << '\n';
        for(int c = 0; c<b;c++){
            int cnt = 1;
            for (int j=0; j<a; j++){
               for (int s=j+1; s<=1+2*j;s++)
                     cout << cnt;
                cout << '\n';
                cnt++;
            }
            cnt-=2;
            
            for(int r=0; r<2*(a/2); r++){
                for (int s=2*(a/2); s>r;s--)
                    cout << cnt;
                cout << '\n';
                cnt--;
            }
            cout << '\n';
        }
   }
    return 0;
}
