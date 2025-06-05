//quiz.c
#include <stdio.h>

int main() {
    int q1,q2,q3,q4,q5,score=0;
    
    printf("         Answer the following Quizes *-* \n\n");
    
    printf("1) What is the largest country in the world by area ? \n1. USA\n2. INDIA\n3. RUSSIA\n\nEnter your Answer [1-3] :");
    scanf("%d",&q1);
    
    if (q1 == 3){
        printf("Correct ^-^\n\n");
        score++;
    }
    else{
        printf("Wrong !\n The answer is '3.RUSSIA'\n\n");
    }
    
    printf("2) Where is the Great Wall located? \n1. CHINA\n2. JAPAN\n3. KOREA\n\nEnter your Answer [1-3] :");
    scanf("%d",&q2);
    
    if (q2 == 1 ){
        printf("Correct ^-^\n\n");
        score++;
    }
    else{
        printf("Wrong !\n The answer is '1. CHINA'\n\n");
    }
    
    printf("3) Which country has 50 stars and 13 stripes on its flag? \n1. UK\n2. USA\n3. IND\n\nEnter your Answer [1-3] :");
    scanf("%d",&q3);
    
    if (q3 == 2){
        printf("Correct ^-^\n\n");
        score++;
    }
    else{
        printf("Wrong -_-\n The answer is '2. USA'\n\n");
    }
    
    printf("4) What is the currency of Japan?\n1. Won\n2. Yen\n3. Euro\n\nEnter your Answer [1-3] :");
    scanf("%d",&q4);
    
    if (q4 == 2){
        printf("Correct ^-^\n\n");
        score++;
    }
    else{
        printf("Wrong -_- \n The answer is '2.Yen'\n\n");
    }
    
    printf("5) Which desert covers much of northern Africa?\n1. Sahara\n2. Gobi\n3. Kalahari\n\nEnter your Answer [1-3] :");
    scanf("%d",&q5);
    
    if (q5 == 1){
        printf("Correct ^-^\n\n");
        score++;
    }
    else{
        printf("Wrong -_-\n The answer is '1. Sahara'\n\n");
    }
    
    printf("       Your Score : %d /5",score);
    return 0;
}
