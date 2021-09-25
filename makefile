a3: createTweet.o displayTweets.o saveTweetsToFile.o loadTweetsFromFile.o deleteTweet.o addNodeToList.o countStopWords.o searchTweetsByKeyword.o main.o
	gcc createTweet.o displayTweets.o saveTweetsToFile.o loadTweetsFromFile.o deleteTweet.o addNodeToList.o countStopWords.o searchTweetsByKeyword.o main.o -o a3

createTweet.o: createTweet.c headerA3.h additionalHeaders.h
	gcc -Wall -std=c99 -c createTweet.c

displayTweets.o: displayTweets.c headerA3.h additionalHeaders.h
	gcc -Wall -std=c99 -c displayTweets.c

saveTweetsToFile.o: saveTweetsToFile.c headerA3.h additionalHeaders.h
	gcc -Wall -std=c99 -c saveTweetsToFile.c

loadTweetsFromFile.o: loadTweetsFromFile.c headerA3.h additionalHeaders.h
	gcc -Wall -std=c99 -c loadTweetsFromFile.c

deleteTweet.o: deleteTweet.c headerA3.h additionalHeaders.h
	gcc -Wall -std=c99 -c deleteTweet.c

addNodeToList.o: addNodeToList.c headerA3.h additionalHeaders.h
	gcc -Wall -std=c99 -c addNodeToList.c

countStopWords.o: countStopWords.c headerA3.h additionalHeaders.h
	gcc -Wall -std=c99 -c countStopWords.c

searchTweetsByKeyword.o: searchTweetsByKeyword.c headerA3.h additionalHeaders.h
	gcc -Wall -std=c99 -c searchTweetsByKeyword.c

main.o: mainA3.c headerA3.h additionalHeaders.h
	gcc -Wall -std=c99 -c mainA3.c

clean:
	rm *.o a3