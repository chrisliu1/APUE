a lab from http://www.cs.fsu.edu/~asriniva/courses/aup02/hws/hw1.html


Details:

Your program will read the environment variable VOCABULARYLIST, which we will set to the name of a file that will contain a list of words, one word per line. (In order to test your program, you too will need to create such a file, and set this variable to the appropriate file name.) Your program will read this list of words and create a data structure that permits efficient operations on this list, as needed by the rest of the program. Let us call this data structure Vocabulary.

Your program will read the files (documents) specified as command line arguments, and represent this set of documents as a matrix having d rows and v columns, where d = number of documents and v = number of words in the vocabulary. Each row of the matrix will represent a document, and each column will represent a word from the vocabulary list. The (i,j) th element of this matrix will be the frequency of word # j (of the vocabulary) in document # i. [Frequency = (Number of occurrences of the word, in the document)/(Total number of words in the document). Note that the total number of words includes those not in the vocabulary.]

The program will then read queries typed by the user, from stdin, handling one query at a time. Each query will be a list of words, including those from outside the vocabulary, terminated by a newline. The program will determine the document that best matches a query by the following process. It will first create a vector of length v from the query by making the i th component of the vector equal to the number of occurrences of the i th word (of the vocabulary) in the query. (This will enable the user to emphasize certain words by typing them multiple times.) The program will then multiply the document set matrix by this vector, and choose the document corresponding to the largest component of the resulting vector. The name of this document will be printed to stdout.

This process is repeated until the program encounters end of file. 
