//
//  day4_3.c
//  kju
//
//  Created by 이현찬 on 27/03/2019.
//  Copyright © 2019 이현찬. All rights reserved.
//

#include <stdio.h>
int main(void)
{

int number; printf("16진수 정수를 입력하세요: ");

scanf("%x",&number); // 16진수로 입력받기 위해 %d를 사용

printf("10진수로 변환된 결과 : %d\n",number); // 10진수로 출력하기 위해 %x를 사용

return 0;

}
