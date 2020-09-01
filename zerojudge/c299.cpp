//
//  main.cpp
//  c299.cpp
//
//  Created by Sanhorn on 2020/9/1.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int n; cin >> n;
    int m[n], c[n-1], total = 1;
    for (int i=0; i<n; i++){
        cin >> m[i];
        c[i] = 0;
    }
    
    sort(m, m+n);
    for (int i=0; i<n-1; i++){
        if (m[i]+1 == m[i+1])
            c[i]++;
        else
            c[i] = 0;
        total*=c[i];
    }
    
    if (total == 1)
        cout << m[0] << " " << m[n-1] << " " << "yes";
    if (total == 0)
        cout << m[0] << " " << m[n-1] << " " << "no";
return 0;
}
