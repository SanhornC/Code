//
//  main.cpp
//  c294.cpp
//
//  Created by Sanhorn on 2020/9/18.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int a[3];
    for (int i=0; i<3; i++)
        cin >> a[i];
    
    sort(a,a+3);
    if (a[0]+a[1] > a[2]){
        if (a[0]*a[0] + a[1]*a[1] == a[2]*a[2])
            cout << a[0] << " " << a[1] << " " << a[2] << '\n' << "Right" << '\n';
        if (a[0]*a[0] + a[1]*a[1] < a[2]*a[2])
            cout << a[0] << " " << a[1] << " " << a[2] << '\n' << "Obtuse" << '\n';
        if (a[0]*a[0] + a[1]*a[1] > a[2]*a[2])
            cout << a[0] << " " << a[1] << " " << a[2] << '\n' << "Acute" << '\n';
    }
    else
        cout << a[0]<< " "  << a[1] << " " << a[2] << '\n' << "No" << '\n';
    return 0;
}
