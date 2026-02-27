//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
     char *pointer;
     char userinput;
	 
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here
     while (password != "secure123") {
        printf("Enter your input: ");
        password[0] = scanf("%s", &userinput);
        printf("%s\n", password);
     }
	printf("Password has been put in");

    return 0;
}