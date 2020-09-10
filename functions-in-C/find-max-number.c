#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int numbers[] = {a, b, c, d};
    int max = numbers[0];
    for(int i = 1; i < (int)sizeof(numbers)/sizeof(numbers[0]); i ++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    


    return 0;
}
