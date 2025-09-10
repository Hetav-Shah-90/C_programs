#include <stdio.h>
int main(){
    int n, matrix[5][10]={0},x,y;

    printf("Enter the number of reserved seats: ");
    scanf("%d",&n);
        for(int i=1;i<=n;i++){
        printf("\nEnter the row and seat number for reserved seat %d (e.g. 2 5): ",i);
        scanf("%d%d",&x,&y);
        matrix[x-1][y-1]=1;
    }
    printf("\nseating chart: ");
    for(int i=1;i<=5;i++)
        {
        printf("\nRow %d : ",i);
        for(int j=1;j<=10;j++){
            printf("%d",matrix[i-1][j-1]);
        }
    }
return 0;
}
