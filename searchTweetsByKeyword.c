#include "headerA3.h"

int searchTweetsByKeyword(tweet * tweetList){
    char string[141];
    char search[141];
    bool found;

    found = false;

    printf("\nEnter a keyword to search: ");
    scanf("%s", search);

    while(tweetList != NULL){
        strcpy(string, tweetList->text);
        for(int i = 0; i < 141; i++){
            string[i] = tolower(string[i]);
        }

        //looks for the first match of given word in the tweet
        if(strstr(string, search) != NULL){
            printf("Match found for \'%s\': %s wrote: \"%s\"\n", search, tweetList->user, tweetList->text);
            found = true;
        }

        tweetList = tweetList->next;
    }

    if(found == true){
        return 1;
    }
    else{
        return 0;
    }
}