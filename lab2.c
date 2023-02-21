#include <stdio.h>

int main(void){
        int temp=0;//temp input by user
        int setTemp =0;//original temp set by me
        int hot=0;//number of hot days
        int pleasant=0;//number of pleasant days
        int cold=0;//number of cold days
        float added=0;//all temps from all days added together
        float days=0;//number of days

        while(setTemp != -99){//while input if not -99
                printf("Enter a high temp reading (-99 to quit)> ");
                scanf("%d", &temp);//scan for user input
                if(temp >= 85){//if temp is 85 or above
                        setTemp=temp;//set temp to temp to see ig you get out of while loop
                        hot++;//add one days to hot days
                        added= added+temp;//add temp to added
                        days++;//add one day to days
                }
                else if(temp >= 60 && temp <= 84){//if temp is in the pleasent temp area
                        setTemp =temp;//set temp to temp to see if you get out of the while loop
                        pleasant++;//add one day to pleasant days
                        added = added+temp;//add temp of day to added
                        days++;//add one day to total days
                }
                else if(temp < 60 && temp != -99){//if temp is less that 60 but not -99
                        setTemp =temp;//set temp to temp input
                        cold++;//add one day to cold days
                        added = added+temp;//add temp to total temp
                        days++;//add one day to days
                }
                else if(temp == -99){//if input is -99
                        setTemp = temp;//set temp to temp to get out of while loop
                }

        }
        printf("Hot days:       ");//print
        for(int i =0; i< hot; i++){//print amount of hot days using for loop
                printf("*");
        }
        printf("\n");
        printf("Pleasant days:  ");//print
        for(int j =0; j< pleasant; j++){//print amount of pleasant days using for loop
                printf("*");
        }
        printf("\n");

        printf("Cold days:      ");//print
        for(int k =0; k< cold; k++){//print amout of cold days using for loop
                printf("*");
        }
        printf("\n");
        printf("Average temperature: %.1f\n", added/days);//print average temp of all days with one decimal

        return 0;
}
