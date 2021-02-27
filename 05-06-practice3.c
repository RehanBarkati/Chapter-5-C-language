# include<stdio.h>
//float force(int m);
int main(){
    int m;
    printf("Enter the value of m\n");
    scanf("%d",&m);
    printf("The value of force exerted on body of mass %d is %f",m,m*9.8);
    
    return 0;
}
//float force(int m){
   // return m*9.8 ;
//}