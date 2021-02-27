# include<stdio.h>
int sum(int n);

int main(){
    int n,d;
    printf("Enter the number n\n");
    scanf("%d",&n);
    printf("Sum of first %d natural number is %d",n,sum(n));
    return 0;
}
int sum(int n){
    if(n!=0){
      return sum(n-1)+n;
}
else{
    return n;
}
}