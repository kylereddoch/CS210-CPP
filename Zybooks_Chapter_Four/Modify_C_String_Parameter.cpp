/*
Complete the function to replace any period by an exclamation point. Ex: "Hello. I'm Miley. Nice to meet you." becomes:
"Hello! I'm Miley! Nice to meet you!"
*/

#include <iostream>
#include <cstring>
using namespace std;

void MakeSentenceExcited(char* sentenceText) {

  int size = strlen(sentenceText);
  char * ptr;
  ptr = sentenceText;

  for (int i = 0; i < size; i++) {
     if (sentenceText[i] == '.') {
        sentenceText[i] = '!';
     }
  } 

}

int main() {
   const int TEST_STR_SIZE = 50;
   char testStr[TEST_STR_SIZE];

   cin.getline(testStr, TEST_STR_SIZE);
   MakeSentenceExcited(testStr);
   cout << testStr << endl;

   return 0;
}
