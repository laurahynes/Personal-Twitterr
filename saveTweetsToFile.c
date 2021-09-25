#include "headerA3.h"

void saveTweetsToFile(tweet * tweetList){
    char filename[100];

    printf("\nEnter the filename where you would like to store your tweets: ");

    scanf("%s", filename);

    FILE *file;

    //a+ allows us to edit csv file
    file = fopen(filename, "a+");

    if(file == NULL){
        printf("Error, can't open file\n");
        return;
    }

    while(tweetList != NULL){        
        fprintf(file, "%d,%s,%s\n", tweetList->id, tweetList->user, tweetList->text);
        tweetList = tweetList->next;
    }

    printf("Output successful!\n");
}