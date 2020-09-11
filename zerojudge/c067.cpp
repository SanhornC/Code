//
//  main.cpp
//  c067.cpp
//
//  Created by Sanhorn on 2020/9/11.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n; int u = 1;
    while(cin >> n){
            if (n!=0){
            int a[n], cnt = 0;
            for (int i=0; i<n; i++){
                cin >> a[i];
                cnt+=a[i];
            }
            int c = cnt/n, cnt2 = 0;
            for (int j=0; j<n; j++){
                if (a[j] > c)
                    cnt2+=(a[j] - c);
            }
            cout << " Set #" <<u<< '\n'<< "The minimum number of moves is "<< cnt2 << "."<< '\n';
                u++;
        }
        
        else
            break;
    }
    return 0;
}
