int main(void){
    int a;
    float b;
    char c;
    
    printf("문자를 입력하세요 : \n");
    scanf("%c", &c);
    
    printf("정수 입력하세요 : \n");
    scanf("%d", &a);
    
    printf("실수를 입력하세요 : \n");
    scanf("%f", &b);
    
    printf("문자 = %c, 정수 = %d, 실수 = %f", c, a, b);
    
    return 0;
}