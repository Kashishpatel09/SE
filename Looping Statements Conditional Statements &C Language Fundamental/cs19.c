#include <stdio.h>

 main() {
	int i,j;
	int n=65;
	int rows;
	
		// Pattern 1
		 // Prompt user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for ( i = 1; i <= rows; i++) {
        // Inner loop to print numbers in each row
        for ( j = 1; j <= i; j++) {
            // Alternating between 1 and 0 starting with 1
            printf("%d ", j % 2);
        }
        // Move to the next line after each row
        printf("\n");
    }


	
	// Pattern 2
//		for(i=1;i<=5;i++){
//			for(j=1;j<=i;j++){
//			printf(" %c",n);
//			n++;
//		}
//		printf("\n");
//	}



    // Pattern 3
//    for ( i = 1; i <= 5; i++) {
//        for ( j = 1; j <= 5 - i; j++) {
//            printf(" ");
//        }
//        for ( j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }	

//    pattern 4
// 		for(i=1;i<=4;i++)
//    		{
//    		for(j=1;j<=i;j++)
//    		{
//    			printf("*");
//			}
//			printf("\n");
//		}
//		for(i=1;i<=4;i++)
//    		{
//    		for(j=4;j>=i;j--)
//    		{
//    			printf("*");
//			}
//			printf("\n");
//		}



//		pattern 5
// 		printf("Enter the number of rows: ");
//    	scanf("%d", &rows);
//
//    	int num = 1;
//    		for ( i = 1; i <= rows; i++) {
//        		for ( j = 1; j <= i; j++) {
//            printf("%d ", num++);
//       		 }
//        	printf("\n");
//    	}




//    // Pattern 6
//    printf("\nPattern 2:\n");
//    for ( i = 1; i <= 5; i++) {
//        for ( j = 1; j <= i; j++) {
//            printf("%c", 'A' + j - 1);
//        }
//        printf("\n");
//    }



}
