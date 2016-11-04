//h file
/* *********************************************************
*
*	Filename: vocabulary.h
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: ---
*	Create: 2016-11-02 13:59:55
*       Last Modified: 2016-11-04 16:02:03
* *********************************************************/

#ifndef _VOCABULARY_H_
#define _VOCABULARY_H_

#define NOT_IN_VOCABULARY  -1;
#define BUF_LENGTH  256

typedef struct Vocabulary
{
	char word[BUF_LENGTH];
	struct Vocabulary* next;
}*Vocabulary, Node;

/*Read words from a file and store in a data structure*/
Vocabulary *CreateVocabulary(char *filename);

/*Free the structure*/
void FreeVocabulary(Vocabulary);

//Return the number of words
int NumberOfWords(Vocabulary);

#endif
