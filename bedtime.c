
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void bedtimestory(char words[20][15], int current, int number) {
if (current==0){
   printf("A %s couldn't sleep, so her mother told a story about a little %s,\n", words[current], words[current+1]);
   current++;
   }

else if (current<number-2){
  int i;
  for(i=0;i<current;i++){
        printf("  ");
  }
        printf("who couldn't sleep, so the %s's mother told a story about a little %s,\n", words[current], words[current+1]);
        current++;
 }

else if (current==number-2){ 
  int i;
 while (current>=0){
  for(i=0;i<current;i++){
        printf("  ");
  }
  if (current==number-2){
        printf("... who fell asleep.\n");
  }
  else if (current==0){
     printf("... and then the %s fell asleep.\n", words[0]);
}
  else{
        printf("... and then the little %s fell asleep;\n", words[current]);
  }
  current--;
 }
current++;
}
      
if (current<number-1 && current>0){
  bedtimestory(words, current, number); 
  }  

}


main() {
  char names[20][15];   // Up to 20 names, each up to 15 letters long (incl. NULL)
  int n, num;
  char end1[15];
  strcpy(end1,"END\n");
  int diff = -1;
 num = 0;
  n = 0;
      while(diff!=0){
        fgets(names[n], 15, stdin);
        diff = strcmp(end1, names[n]);
        n++;
        num++;
      }

  int i;
  for (i=0; i<num; i++){
        int length = strlen(names[i]);
        if (names[i][length-1]== '\n')
                names[i][length-1]= '\0';
  }
                  // Read the names from the input
                        // until you read "END"
  bedtimestory(names, 0, num);
}








