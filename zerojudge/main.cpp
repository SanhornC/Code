//
//  main.cpp
//  scoreboard2.cpp
//
//  Created by Sanhorn on 2020/8/21.
//  Copyright © 2020 Sanhorn. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int cl = 0;
    int L;  cin >> L;
    int D = L-cl;
    if (L > 0)
        cout << D << endl;
    else
        cout << -D << endl;
    cl = L;
    return 0;
}


/* d226
 int v, t; cin >> v >> t;
 cout << v*t*2 << endl;
 return 0;
 */

/* d053
 for (int i =0; i<100; i++){
 int M, N; cin >> M >> N;
 cout << M*(N-1) << endl;
 }
 */

/* d681
 int cl = 0;
 while(1){
 int L;  cin >> L;
 int D = L-cl;
 if (L > 0)
 cout << D << endl;
 else
 cout << -D << endl;
 cl = L;
 if (D > 1000000000)
 break;
 }
 return 0;
 }
 */

/* d127
 void swap(int &a, int &b){
 int c;
 c = a;
 a = b;
 b = c;
 }
 int main(){
 int L, H, C; cin >> L;
 if ((L%2) != 0){
 while(1){
 cin >> L;
 break;
 }
 }
 H = L/2;
 C = H/2;
 int s[C], k[C], cnt = 0;
 for (int i=0; i<C; i++){
 s[i] = 0;
 k[i] = 0;
 }
 
 if (H%2 != 0){
 for(int a=1; a<=C; a++){
 for (int b = (H-1); b>C; b--){
 if (a+b == H){
 s[cnt] = a*b;
 cnt++;
 }
 }
 }
 
 for (int j=0; j<C; j++){
 for(int i=0; i<C; i++){
 if(s[i] < s[i+1])
 swap(s[i], s[i+1]);
 }
 }
 cout << s[0] << endl;
 }
 
 if (H%2 == 0){
 for(int a=1; a<=C; a++){
 for (int b = (H-1); b>(C-1); b--){
 if (a+b == H){
 k[cnt] = a*b;
 cnt++;
 }
 }
 }
 
 for (int j=0; j<C; j++){
 for(int i=0; i<C; i++){
 if(k[i] < k[i+1])
 swap(k[i], k[i+1]);
 }
 }
 cout << k[0] << endl;
 }
 return 0;
 }
 */
/*long long L; cin>> L;
    if (L%2 !=0)
        cin>> L;

    long long a, b;
    a = L/4;
    b = (L/2)-a;
    cout << a*b;
