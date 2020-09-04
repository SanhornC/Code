//
//  main.cpp
//  c039.cpp
//
//  Created by Sanhorn on 2020/8/30.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
void swap(int &f, int &g){
    int c;
    c = f;
    f = g;
    g = c;
}
int main(int argc, const char * argv[]) {
    int a, b;
    while(cin >> a >> b){
        int m = a, l = b;
        if (m > l)
            swap(m,l);
        int s[l-m+1], p =0;
        for (int i = 0; i<b-a+1;i++)
            s[i] = 0;
        for (int n=m; n<=l; n++){
            int x = n;
            int cnt = 1;
            if (x == 1)
                cnt = 1;
            while (x > 1){
                if (x%2 != 0){
                    x = 3*x+1;
                    cnt++;
                }
                else{
                    x/=2;
                    cnt++;
                }
            }
            s[p] = cnt; p++;
        }
        sort(s,s+(l-m+1));
        cout << a << " "<<b<<" " <<  s[l-m];
        cout << endl;
    }
    return 0;
}
