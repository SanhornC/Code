//
//  main.cpp
//  a038.cpp
//
//  Created by Sanhorn on 2020/9/4.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;  cin>>n;
    if (n == 0)
        cout << 0;
    else {
         while(n > 0){
                if (n%10 ==0)
                    n/=10;
                else{
                    while(n > 0){
                    cout << n%10;
                    n/=10;
                }
            }
         }
    }
    return 0;
}
