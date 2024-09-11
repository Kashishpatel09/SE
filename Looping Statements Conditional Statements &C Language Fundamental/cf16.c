//16. Convert country's name in abbreviated form:
#include <stdio.h>
 main() {
    char country_name[50];
    char abbreviated_name[5];
   printf("Enter the country name: ");
    scanf("%s", country_name);

    if (strcmp(country_name, "United States") == 0) {
        strcpy(abbreviated_name, "US");
    } else if (strcmp(country_name, "India") == 0) {
        strcpy(abbreviated_name, "IN");
    } else if (strcmp(country_name, "China") == 0) {
        strcpy(abbreviated_name, "CN");
    } else if (strcmp(country_name, "Canada") == 0) {
        strcpy(abbreviated_name, "CA");
    } else if (strcmp(country_name, "Australia") == 0) {
        strcpy(abbreviated_name, "AU");
    } else if (strcmp(country_name, "United Kingdom") == 0) {
        strcpy(abbreviated_name, "UK");
    } else if (strcmp(country_name, "France") == 0) {
        strcpy(abbreviated_name, "FR");
    } else if (strcmp(country_name, "Germany") == 0) {
        strcpy(abbreviated_name, "DE");
    } else if (strcmp(country_name, "Russia") == 0) {
        strcpy(abbreviated_name, "RU");
    } else if (strcmp(country_name, "Brazil") == 0) {
        strcpy(abbreviated_name, "BR");
    } else if (strcmp(country_name, "Japan") == 0) {
        strcpy(abbreviated_name, "JP");
    } else {
        strcpy(abbreviated_name, "Unknown country");
    }

    printf("Abbreviated name: %s\n", abbreviated_name);
}

