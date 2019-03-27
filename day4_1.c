//
//  main.c
//  kju
//
//  Created by 이현찬 on 27/03/2019.
//  Copyright © 2019 이현찬. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS //보안
#include <stdio.h>

int main(void)
{
    // insert code here...
    float num;
    int i_part;
    float f_part;
    
    printf("실수를 입력하세요");
    scanf("%f", &num);
    
    i_part = (int)num;
    f_part = num - i_part;
    
    printf("%f의 정수부는 %d이고, 실수부는 %f 입니다. \n", i_part, f_part);
    return 0;
}

