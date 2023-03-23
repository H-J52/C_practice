# 2023- 03 -23 4주차 c언어 실습

```C
#include <stdio.h>

int main(void) {
	//char code1 = 'A'; //문자 상수로 초기화
	//char code2 = 65; //아스키 코드로 초기화
	//printf("code1 = %c\n", code1);
	//printf("code2 = %c\n", code2);

	//char code = 'A';
	//printf("%d %d %d\n", code, code + 1, code + 2);
	//printf("%c %c %c\n", code, code + 1, code + 2);
	//return 0;

	//i = i + 1 = i++
	//C언어는 false = 0 | true = 나머지 값을 다 취급 but 보통 1을 씀 -> int 정수 자료형
	//A == B 같으면 1 다르면 0    |   A!=B 다르면 1 같으면 0
	//if (논리식->관계 연산자) else는 if랑 같이~ if가 아닌건 else (조건문)
	//&& = and = 그리고 = 이면서 -> 둘다 '참'이어야 하는~
	//|| 이건 or 느낌 하나만 참이어도 되는~ 만약 앞에 값이 참이면 뒤에 값은 skip

	/*double x, y, result;

	printf("실수 2개를 입력하시오: ");
	scanf_s("%lf %lf", &x , &y);
	result = x + y;
	printf("%f + %f = %f\n", x, y, result);

	result = x / y;
	printf("%f / %f = %f\n", x, y, result);

	result = x * y;
	printf("%f * %f = %f\n", x, y, result);

	result = x - y;
	printf("%f - %f = %f\n", x, y, result);*/
  
  

	int money, change;
	int price, c5000, c1000, c500, c100;

	printf("물건 값을 입력하시오 : ");
	scanf_s("%d", &price);

	printf("투입한 금액을 입력하시오 : ");
	scanf_s("%d", &money);
	change = money - price;

	c1000 = change / 1000; // 남은 잔돈에서 1000원권의 개수를 계산한다.
	change = change %1000; //나머지 연산자를 사용하여 남은 잔돈을 계산한다.
	c500 = change / 500; // 남은 잔돈에서 500원 동전의 개수를 계산한다.
	change = change %500; //나머지 연산자를 사용하여 남은 잔돈을 계산한다. 
	c100 = change / 100;
	change = change % 100;

	printf("\n천원권: %d장\n", c1000);
	printf("오백원 동전: %d개\n", c500);
	printf("백원 동전 : %d개\n", c100);
	return 0;
	
}
```
