//
//  main.cpp
//  a004.cpp
//
//  Created by Sanhorn on 2020/8/28.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int y;
    while(cin >> y){
        if ((y%4 == 0) && (y%100 !=0) || (y% 400 == 0))
            cout << "閏年"<< endl;
        else
            cout << "平年" << endl;
    }
    return 0;
}
