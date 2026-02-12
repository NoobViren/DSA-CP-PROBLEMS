#include<stdio.h>
int my(){

   
    
    
    static int X;
    X = 3;
    X++;
    return X;
}
int main(){
    int x = my(); int y = my()+x; printf( "%d\n", (x+y));
}