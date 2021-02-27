# include<stdio.h>
float average(int a,int b, int c);

int main(){
    int a,b,c;
    float x;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);
     
     //x=average(a,b,c);
     printf("Average of %d,%d and %d is %f",a,b,c,average(a,b,c));
     return 0;
}
float average(int a,int b, int c){
    float d;
        d =(float)(a+b+c)/3; // int/int gives int .
    return d;
}