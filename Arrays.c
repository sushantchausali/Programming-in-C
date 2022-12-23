#include <stdio.h>
main() {
int number[5] = {10, 20, 30, 40, 50};
int i = 0;
while( i < 5 ) {
printf("number[%d] = %d\n", i, number[i] );
i = i + 1;
}
}