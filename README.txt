 Student Name: Laura Hynes
 Student ID: 1134469
 Student Username: hynesl
 Last Revision Date: March 21, 2021
 Assignment Name: Dynamic data structures (linked lists)
 Course: CIS*2500
 
 To compile and run this program, cd into the appropriate folder, type make, then type ./a3

 This next section goes through each function and explains their utility:

 headerA3.h: Includes files needed to run program, definitions for all functions, and struct definitions
 additionalHeaders.h: Includes additional files needed that were not included in headerA3.h
 mainA3.c: Prints out list of options the user can choose from, prints out this list after each choice until the user chooses to exit the program. Each choice calls a different function.
 createTweet.c: Allows the user to create their own username and message. Assigns the user with a random userid. These components are then added to the linked list.
 displayTweets.c: Prints out every tweets userid, username, and message found in the list.
 saveTweetsToFile.c: Saves all tweets found in the linked list to a csv file specified by the user.
 loadTweetsFromFile.c: Takes the tweets found in a csv file and adds them to a linked list.
 deleteTweet.c: Finds a tweet within the linked list and deletes it. The user chooses which tweet they want deleted.
 countStopWords.c: Counts all designated stop words found within all tweets in the linked list. Returns number of stop words found across number of tweets.
 searchTweetsByKeyword.c: Prints out all tweets with the search word that the user provides.
 addNodeToList.c: Adds a node to the end of a linked list.

 This next section outlines any known limitations of my program:

 deleteTweet.c does not work at all. Causes the program to crash. I've tried multiple ways to fix it and all have failed.
 countStopWords.c could be done more efficiently. I could not think of another way to do it while coding.

 This next function outlines any future improvements that could be made:

 Fixing deleteTweet.c should be done in the future when I have a greater understanding of how to use linked lists.
 countStopWords.c should be made more efficent in the future.