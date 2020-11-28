//
//  main.cpp
//  a743.cpp
//
//  Created by Sanhorn on 2020/11/21.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    char in[1000];
    map<string,int> m;
    string s;
    int n; cin >> n;
    for (int i=0; i<n; i++){
        cin >> s;
        cin.getline(in,1000);
        m[s]++;
    }
    
    for (auto i: m)
        cout << i.first << " " << i.second << '\n';
    
}
