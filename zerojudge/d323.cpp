//
//  main.cpp
//  d323.cpp
//
//  Created by Sanhorn on 2020/11/13.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, input; cin >> n;
    vector<int> l;
    for (int i=0; i<n; i++){
        cin >> input;
        l.push_back(input);
    }
    sort(l.begin(),l.end());
    
    for (int j=0; j<n; j++)
        cout << l[j] << " ";
    
    return 0;
}
