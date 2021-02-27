# include<stdio.h>
//sum is a function which takes a and b as input and return an integer as output
int sum(int a, int b);//function prototype

int main(){
    int c,e,f;
    scanf("%d",&e);
     scanf("%d",&f);
    c=sum(e,f);//function call
    printf("the value of c is %d\n",sum(5,2));
    return 0;
}

int sum(int a, int b){
   // a+b;
    return a+b;
}