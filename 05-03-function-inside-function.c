# include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
     goodmorning();
    return 0;
}
void goodmorning(){
    printf("Good Morning Rehan\n");
    goodafternoon();
       
}
void  goodafternoon(){
    printf("Good Afternoon Rehan\n");
    goodnight(); 
}
void  goodnight(){
    printf("Good Night Rehan\n");
}