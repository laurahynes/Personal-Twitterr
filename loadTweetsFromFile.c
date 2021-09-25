#include "headerA3.h"

void loadTweetsFromFile(tweet ** tweetList){
    char filename[100];
    int userid;
    char name[51];
    char tweetString[141];   
    char buf[1024];

    printf("\nEnter a filename to load from: ");
    scanf("%s", filename);

    FILE *file;

    file = fopen(filename, "r");

    if(file == NULL){
        printf("Error, can't open file\n");
        return;
    }

    while(fgets(buf, sizeof buf, file) != NULL){
        sscanf(buf, "%d,%[^,],%[^\n]", &userid, name, tweetString);        
        tweet* new_node = (tweet*) malloc(sizeof(tweet));
        new_node->id = userid;
        strcpy(new_node->user, name);
        strcpy(new_node->text, tweetString);
        
        addNodeToList(tweetList, new_node);
    }
    
}