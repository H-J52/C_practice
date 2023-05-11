```c
#include <stdio.h>
//조별 대결_각자 문제 내기 - (피보나치 수열) 출력되는 값을 묻는 문제
int fib(int n) {
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 13;
    int result = fib(n);

    printf("%d번째 항의 값: %d\n", n, result);

    return 0;
}
```
