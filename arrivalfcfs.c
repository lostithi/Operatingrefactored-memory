#include <stdio.h>
int main(){
    int n,bt[20],wt[20],tat[20],at[20];
    float avgwt,avgtat;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    wt[0]=0;
    printf("Enter the Arrival time: ");
    for(int i=0;i<n;i++){
        scanf("%d",&at[i]);
    }
    printf("Enter the Burst time: ");
    for(int i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    for(int i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1]-at[i];
    }
    for(int i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
    }
    avgwt=avgtat=0;
    for(int i=0;i<n;i++){
        avgwt+=wt[i];
    }
    printf("Average Waiting time:%f ",avgwt/n);

    for(int i=0;i<n;i++){
        avgtat+=tat[i];
    }
    printf("\n");
    printf("Average Turnaround time:%f ",avgtat/n);
}
