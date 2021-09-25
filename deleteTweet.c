#include "headerA3.h"

void deleteTweet(tweet ** tweetList){
    int count;
    int num;
    int i;
    tweet *temp = *tweetList;

    count = 0;
    
    //counts number of tweets in list
    while(temp != NULL){
        temp = temp->next;
        count++;
    }

    printf("Currently there are %d tweets.\n", count);
    printf("Which tweet do you wish to delete - enter a value between 1 and %d: ", count);
    scanf("%d", &num);

    if(num > count){
        printf("Error. Number entered is larger than amount in list.\n");
        return;
    }

    //0 is technically at pos 1 for user, keeps track for developer
    num = num-1;

    if(num == 0){
        *tweetList = temp->next;
        free(temp);
        return;
    }

    //loops through until desired tweet pos
    for(i = 1; i < num-1; i++){        
        temp = temp->next;        
        printf("work 3\n");
    }

    tweet *newTweet = temp->next->next;

    printf("Tweet %d was deleted. There are now %d tweets left.\n", temp->next->id, num-1);

    free(temp->next);
    temp->next = newTweet;
    
}