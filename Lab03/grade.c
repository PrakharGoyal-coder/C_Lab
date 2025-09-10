/*Write a program grade that takes as input from the user one of the letter grades ’AA’, ’AB’, ’BB’,
’BC’, ’CC’, ’CD’, ’DD’, ’FR’, and gives the corresponding output as follows:
For grade Example output
AA Excellent
AB Very Good
BB Good
BC Average
CC Satisfactory
CD Pass
DD Just Pass
FR Fail
Your program must be able to handle illegal input (for example, EE) and display an appropriate
message ’Illegal grade’. Also you program must be able to handle lower case inputs. For example, ‘AA’
or ‘aa’ should output ’Excellent’.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the grade:");
    scanf("%s",str);
    
    if((strcmp(str,"AA")==0) || (strcmp(str,"Aa")==0 )||(strcmp(str,"aA")==0)||(strcmp(str,"aa")==0))
      {
         printf("Excellent\n");
      }
    else if((strcmp(str,"AB")==0) || (strcmp(str,"Ab")==0 )||(strcmp(str,"aB")==0)||(strcmp(str,"ab")==0))
      {
         printf("Very Good\n");
      }
    else if((strcmp(str,"BB")==0) || (strcmp(str,"Bb")==0 )||(strcmp(str,"bB")==0)||(strcmp(str,"bb")==0))
     {
          printf("Good\n");
     }
    else if((strcmp(str,"BC")==0) || (strcmp(str,"Bc")==0 )||(strcmp(str,"bC")==0)||(strcmp(str,"bc")==0))
      {
         printf("Average\n");
      }
    else if((strcmp(str,"CC")==0) || (strcmp(str,"Cc")==0 )||(strcmp(str,"cC")==0)||(strcmp(str,"cc")==0))
      {
            printf("Satisfactory\n");
      }
    else if((strcmp(str,"CD")==0) || (strcmp(str,"Cd")==0 )||(strcmp(str,"cD")==0)||(strcmp(str,"cd")==0))
      {
         printf("Pass\n");
      }
   else if((strcmp(str,"DD")==0) || (strcmp(str,"Dd")==0)||(strcmp(str,"dD")==0)||(strcmp(str,"dd")==0))
      {
         printf("Just Pass\n");
      }
   else if((strcmp(str,"FR")==0) || (strcmp(str,"Fr")==0)||(strcmp(str,"fR")==0)||(strcmp(str,"fr")==0))
      {
         printf("Fail\n");
      }
   else
   {
      printf("Illegal grade");
   }
      
    return 0;

}