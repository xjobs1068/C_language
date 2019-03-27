//
//  day4_2.c
//  kju
//
//  Created by 이현찬 on 27/03/2019.
//  Copyright © 2019 이현찬. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS //보안
#include <stdio.h>

int main(void)
{
    int num;
    
    printf("정수를 10진수로 입력하세요 :");
    scanf("%d", &num);
    printf("10진수:%d, 8진수:%o, 16진수:%x \n\n", num, num, num);
    
    printf("정수를 16진수로 입력하세요 :");
    scanf("%x", &num);
    printf("10진수:%d, 8진수:%o, 16진수:%x \n\n", num, num, num);
    
    printf("정수를 8진수로 입력하세요 :");
    scanf("%o", &num);
    printf("10진수:%x, 8진수:%o, 16진수:%x \n\n", num, num, num);
    
    
    
    return 0;
}

