//
//  main.cpp
//  d066.cpp
//
//  Created by Sanhorn on 2020/9/1.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int h, m; cin >> h >> m;
    int cnt = 60 * h + m;
    if(cnt <450 || cnt >=1020)
        cout << "Off School";
    else
        cout << "At School";
    return 0;
}
