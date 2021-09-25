#include "headerA3.h"

int main(){
    int choice;
    bool done;

    tweet *test;

    choice = 0;
    done = false;

    while(done == false){
        printf("1. Create a new tweet\n");
        printf("2. Display tweets\n");
        printf("3. Search a tweet (by keyword)\n");
        printf("4. Find how many words are \"stop words\"\n");
        printf("5. Delete the nth tweet\n");
        printf("6. Save tweets to a file\n");
        printf("7. Load tweets from a file\n");
        printf("8. Exit\n");
        printf("Choose a menu option: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:            
                addNodeToList(&test, createTweet(test)); //idk how to code addNodeToList
                break;
            
            case 2:
                displayTweets(test);
                break;
            
            case 3:
                searchTweetsByKeyword(test);
                break;

            case 4:
                countStopWords(test);
                break;
            
            case 5:
                deleteTweet(&test);
                break;
            
            case 6:
                saveTweetsToFile(test);
                break;
            
            case 7:
                loadTweetsFromFile(&test); 
                break;
            
            case 8:
                done = true;
                break;                
        }
    }
}