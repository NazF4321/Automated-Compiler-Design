#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{             
  char str[10];

   printf("\nThe grammar is as follows:\n S -> aS \n S -> Sb \n S -> ab\n");

   printf("Enter a string: ");

   gets(str);

    if(str[0]!='a')
      {             
		printf("String is invalid because of incorrect first character");
        exit(0);                                 
   	  }

      int n=1;
      while(str[n]=='a')      
	  n++;
      if( str[n] != 'b')
        {              
	    	printf("string does not belong to grammar");
            exit(0);
        }
               
	     n++;
         while (str[n]=='b')     
         n++;
         if (str [n] != '\0')
            {   
		      printf("String does not belong to grammar");
              exit(0);
			}
   		      printf("string is valid");
              return 0;

}
