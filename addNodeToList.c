#include "headerA3.h"

void addNodeToList(tweet**tweetList,tweet * node){
    
    tweet* newNode = (tweet*) malloc(sizeof(tweet));

    newNode->id = node->id;
    strcpy(newNode->user, node->user);
    strcpy(newNode->text, node->text);

    newNode->next = NULL;

    if(*tweetList == NULL){
        *tweetList = newNode;
    }
    else{
        tweet *lastNode = *tweetList;

        while(lastNode->next != NULL){
            lastNode = lastNode->next;
        }

        lastNode->next = newNode;
    }
}