/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: rabehul haq islam
 * ID: 201972837
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	long decimal=0;
	char hex[9];

	char hex_check[] = "0123456789ABCDEF";
	long power = 1;
	
	printf("Enter a hexadecimal:");
	scanf("%s", hex);

	//check length of hex of minimum 8
	if (strlen(hex) <= 8) {
		//check each value and convert to hex
		for (int i=strlen(hex) - 1; i>=0; i--) {
			hex[i] = toupper(hex[i]);
			for (int j=0; j<strlen(hex_check); j++) {
				if (hex[i] == hex_check[j]) {
					//calculate power manually
					int correct_power = (strlen(hex) - 1) - i;
					for (int k=0; k<correct_power; k++) {
						power = power * 16;
					}
					//Add to decimal total
					decimal = decimal + (j * power);
					power = 1;
					break;
				}
				else if (hex_check[j] == 'F') {
					printf("Error: Invalid Hexadecimal\n");
				}
			}
		}
	}
	else {
		printf("Error: Invalid Hexadecimal\n");
	}
		
	// printf("Error: Invalid Hexadecimal\n");
		// print the decimal result
		printf("decimal:%ld\n", decimal);
	
	return 0;
}