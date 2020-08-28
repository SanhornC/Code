//
//  main.cpp
//  d984.cpp
//
//  Created by Sanhorn on 2020/8/28.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long a, b, c;
    while(cin >> a >> b >> c){
        cout << endl;
        if (a > b && a >c ){
            if(a> (b+c)){
                cout << "A";
            }
            else
                if (b > c)
                    cout << "B";
                else
                    cout << "C";
        }
        if (b > a && b >c ){
            if(b> (a+c)){
                cout << "B";
            }
            else
                if (a > c)
                    cout << "A";
                else
                    cout << "C";
        }
        if (c > b && c >a ){
            if(c> (b+a)){
                cout << "C";
            }
            else
                if (b > a)
                    cout << "B";
                else
                    cout << "A";
        }
    }
    return 0;
}
