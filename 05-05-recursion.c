# include<stdio.h>
int factorial(int x){
    printf("calling factorial %d\n",x);
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
    
}



int main(){
    int n,a;
    printf("enter the value of n\n");
    scanf("%d",&n);
     a= factorial(n);
    printf(" %d! = %d",n,a);
    return 0;
}
