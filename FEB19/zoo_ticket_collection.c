#include<stdio.h>

int main(){
    int totalAdults072 = 0, totalChildren072 = 0, totalCameras072 = 0;
    int sumAdultPrice072 = 0, sumChildPrice072 = 0, sumCameraPrice072 = 0;
    int grandTotal072 = 0;
    
    int adultPrice072 = 50;
    int childPrice072 = 20;
    int cameraPrice072 = 100;

    char choice;
    printf("=== Zoo Ticketing distribution Started ===\n");

    do {
        int adults072 = 0, children072 = 0, cameras072 = 0;
        int currentTotal072 = 0;

        printf("\n--- New Customer ---\n");
        
        printf("Enter number of Adults (50 Rs each): ");
        scanf("%d", &adults072);

        printf("Enter number of Children (20 Rs each): ");
        scanf("%d", &children072);

        printf("Enter number of Cameras (100 Rs each): ");
        scanf("%d", &cameras072);

        currentTotal072 = (adults072 * adultPrice072) + (children072 * childPrice072) + (cameras072 * cameraPrice072);
        printf("\nTicket Summary:\n");
        printf("Adults: %d, Children: %d, Cameras: %d\n", adults072, children072, cameras072);
        printf("Amount you gotta pay : %d \n", currentTotal072);
        printf("Please visit agin\n");
        printf("----------------------\n");

        totalAdults072+=adults072;
        totalChildren072+=children072;
        totalCameras072+=cameras072;

        sumAdultPrice072 += (adults072 * adultPrice072);
        sumChildPrice072 += (children072 * childPrice072);
        sumCameraPrice072 += (cameras072 * cameraPrice072);

        grandTotal072 += currentTotal072;

        printf("Process another customer? (y/n): ");
        scanf(" %c", &choice); 

        } while (choice == 'y' || choice == 'Y');

        printf("\n====================================\n");
    printf("       END OF DAY COLLECTION        \n");
    printf("====================================\n");
    printf("Total Adults   : %d \t(Collected: %d Rs)\n", totalAdults072, sumAdultPrice072);
    printf("Total Children : %d \t(Collected: %d Rs)\n", totalChildren072, sumChildPrice072);
    printf("Total Cameras  : %d \t(Collected: %d Rs)\n", totalCameras072, sumCameraPrice072);
    printf("------------------------------------\n");
    printf("GRAND TOTAL    : %d Rs\n", grandTotal072);
    printf("====================================\n");
    printf("Closing collection for the day.\n");
    return 0;
}
