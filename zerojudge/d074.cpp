//
//  main.cpp
//  d074.cpp
//
//  Created by Sanhorn on 2020/9/1.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    cout << a[n-1];
    return 0;
}
