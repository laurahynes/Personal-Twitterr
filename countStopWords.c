#include "headerA3.h"

void countStopWords(tweet * tweetList){
    int stopWords;
    int num;
    char string[141];

    stopWords = 0;
    num = 0;

    while(tweetList != NULL){
        strcpy(string, tweetList->text);

        for(int i = 0; i < 141; i++){
            string[i] = tolower(string[i]);
        }
        
        //looks for stop words
        for(int i = 0; i < 141; i++){
            //checking for a
            if(string[i] == 'a' && (string[i+1] == ' ' || string[i+1] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
                
            }
            //checking for an
            if(string[i] == 'a' && string[i+1] == 'n' && (string[i+2] == ' ' || string[i+2] == '\n') ){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for and
            if(string[i] == 'a' && string[i+1] == 'n' && string[i+2] == 'd' && (string[i+3] == ' ' || string[i+3] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for are
            if(string[i] == 'a' && string[i+1] == 'r' && string[i+2] == 'e' && (string[i+3] == ' ' || string[i+3] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for as
            if(string[i] == 'a' && string[i+1] == 's' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for at
            if(string[i] == 'a' && string[i+1] == 't' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for be
            if(string[i] == 'b' && string[i+1] == 'e' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for by
            if(string[i] == 'b' && string[i+1] == 'y' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for for
            if(string[i] == 'f' && string[i+1] == 'o' && string[i+2] == 'r' && (string[i+3] == ' ' || string[i+3] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for from
            if(string[i] == 'f' && string[i+1] == 'r' && string[i+2] == 'o' && string[i+3] == 'm' && (string[i+4] == ' ' || string[i+4] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for has
            if(string[i] == 'h' && string[i+1] == 'a' && string[i+2] == 's' && (string[i+3] == ' ' || string[i+3] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for he
            if(string[i] == 'h' && string[i+1] == 'e' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for in
            if(string[i] == 'i' && string[i+1] == 'n' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for is
            if(string[i] == 'i' && string[i+1] == 's' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for it
            if(string[i] == 'i' && string[i+1] == 't' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for its
            if(string[i] == 'i' && string[i+1] == 't' && string[i+2] == 's' && (string[i+3] == ' ' || string[i+3] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for of
            if(string[i] == 'o' && string[i+1] == 'f' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for on
            if(string[i] == 'o' && string[i+1] == 'n' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for that
            if(string[i] == 't' && string[i+1] == 'h' && string[i+2] == 'a' && string[i+3] == 't' && (string[i+4] == ' ' || string[i+4] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for the
            if(string[i] == 't' && string[i+1] == 'h' && string[i+2] == 'e' && (string[i+3] == ' ' || string[i+3] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for to
            if(string[i] == 't' && string[i+1] == 'o' && (string[i+2] == ' ' || string[i+2] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for was
            if(string[i] == 'w' && string[i+1] == 'a' && string[i+2] == 's' && (string[i+3] == ' ' || string[i+3] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for were
            if(string[i] == 'w' && string[i+1] == 'e' && string[i+2] == 'r' && string[i+3] == 'e' && (string[i+4] == ' ' || string[i+4] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for will
            if(string[i] == 'w' && string[i+1] == 'i' && string[i+2] == 'l' && string[i+3] == 'l' && (string[i+4] == ' ' || string[i+4] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
            //checking for with
            if(string[i] == 'w' && string[i+1] == 'i' && string[i+2] == 't' && string[i+3] == 'h' && (string[i+4] == ' ' || string[i+4] == '\n')){
                if(i == 0){
                    stopWords++;
                }
                else if (string[i-1] == ' ' || string[i-1] == '\n'){
                    stopWords++;
                }
            }
        }

        num++;
        tweetList = tweetList->next;
    }

    printf("Across %d tweets, %d stop words were found.\n", num, stopWords);
}