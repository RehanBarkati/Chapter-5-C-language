# include<stdio.h>
void design(int n);

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    design(n);
    
    return 0;
}
void design(int n){
   if(n==1){
       printf("*\n");
       return;
   }  
   design(n-1);  
   for(int i=0;i<(2*n-1);i++){
   printf("*");
  } 
  printf("\n");

}
