#include "headerA3.h"

tweet * createTweet( tweet * tweetList){
    char name[51];
    char tweetString[141];
    int userid;
    int len;
    int i;    
    tweet * tempTweet; 
    
    userid = 0;

    tweetList = malloc(sizeof(tweet));   

    //asks for username
    printf("\nEnter a username: ");
    scanf("%s", name);
    getchar();

    strcpy(tweetList->user, name);

    //asks for tweet
    printf("\nEnter the user's tweet:");
    fgets(tweetString, 141, stdin);

    strcpy(tweetList->text, tweetString);

    len = strlen(tweetString);

    //assigns userid
    for(i = 0; i < len; i++){
        userid = userid + tweetString[i];
    }  

    userid += len;  

    tempTweet = tweetList;

    //checks to see if userid has been used before, changes it if it has
    while(tempTweet != NULL){
        if(tempTweet->id == userid){
            userid += rand() % (999 + 1 - 1) + 1;
        }
        else{
            break;
        }
        tempTweet = tempTweet->next;
    }

    tweetList->id = userid;

    printf("Your computer-generated userid is %d\n", userid);

    return tweetList;

}