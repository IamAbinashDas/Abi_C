 #include<stdio.h>
 void square(int n){
       n= n*n;
    printf("%d\n",n);
 }
 void _square(int *n){
    *n=(*n)*(*n);
    printf("%d\n",*n);
 }
 int main()
 { int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    square(num);
    _square(&num);
    printf("the number is:%d\n",num);
    return 0;
 }