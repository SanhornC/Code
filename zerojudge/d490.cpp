//
//  main.cpp
//  d490.cpp
//
//  Created by Sanhorn on 2020/8/30.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    unsigned int a, b, cnt =0; cin >> a >> b;
    for(int i=a; i<=b; i++){
        if (i%2 == 0)
            cnt+=i;
    }
    cout << cnt << endl;
    return 0;
}
