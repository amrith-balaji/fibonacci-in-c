#include<stdio.h>
int calc_fib (int x ,int y ){
        int z = x + y ;
        return z ;
}
int main() {
int i;
int x=1;
int y=1;
int ret=0;
printf("%d %d ",x,y);
for (i = 0 ; i < 11 ; i++) {
        ret=calc_fib(x, y);
        printf("%d ",ret);
        x = y ;
        y = ret ;
}
return 1;
}
