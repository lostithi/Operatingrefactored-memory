#include<stdio.h>
#define max 30
void main(){
    int nb,nf,b[max],f[max];
    printf("Enter number of memmory blocks\n");
        scanf("%d",&nb);
    printf("Enter size of each blocks\n");
    for(int i=0;i<nb;++i)   
        scanf("%d",&b[i]);
    printf("Enter number of processes\n");
        scanf("%d",&nf);
    printf("Enter size of each processes\n");
    for(int i=0;i<nf;++i)
        scanf("%d",&f[i]);
    int flag[nf],allocation[nf];
    for(int i=0;i<nf;++i){
        flag[i]=0;
        allocation[i]=-1;
    }
    for(int i=0;i<nf;++i)
        for(int j=0;j<nf;++j){
            if(flag[i]==0 && b[j]>=f[i]){
                allocation[i]=j;
                flag[i]=1;
                b[j]-=f[i];
                break;
    }
}
printf("Process no Process size Block no\n");
for(int i=0;i<nf;++i){
    printf("%d\t\t%d\t\t",i+1,f[i]);
    if(flag[i]==1)
        printf("%d\n",allocation[i]+1);
    else
        printf("not allocated\n");
}
}























































// #include<stdio.h>
// #include<conio.h>
// #define max 30
// void main(){
//     int i,j,nb,nf,temp,b[max],f[max],frag[max];
//     static int bf[max],ff[max];
//     printf("\n\tMemory Management Scheme-First Fit");
//     printf("\nEnter number of blocks: ");
//     scanf("%d",&nb);
//     printf("\nEnter number of files: ");
//     scanf("%d",&nf);
//     printf("Enter the size of blocks: ");
//     for(i=0;i<nb;i++){
//         printf("Block%d: ",i+1);
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<nb;i++){
//         ff[i]=b[i];
//     }
//     printf("Enter the size of files: ");
//     for(i=0;i<nf;i++){
//         printf("File%d: ",i+1);
//         scanf("%d",&f[i]);
//     }
//     for(i=0;i<nf;i++){
//         for(j=0;j<nb;j++){
//             if(b[j]!=1){
//                 temp=b[j]-f[i];
//             }if(temp>=0){
//                 ff[i]=j;
//                 break;
//             }
//         }

//     }        
//         frag[i]=temp;
//         bf[ff[i]]=1;
//     printf("\nFileNo: \tFileSize: \tBlockNo: \tBLockSize: \tFragment ");
//     for(i=1;i<=nf;i++){
//         printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
//     }



// }
































//     for(i=0;i<nf;i++){
//         for(j=0;j<nb;j++){
//             if(bf[j]!=1){//check whether block is free
//                 temp=b[j]-f[i];
//             }//alloting  file to the hole
//             if(temp>=0){
//                 ff[i]=j;//the file is stored in jth place
//                 break;
//             }
//         }
//     }
//     frag[i]=temp;
//     bf[ff[i]]=1;
//     printf("\nFileNo: \tFileSize: \tBlockNo: \tBLockSize: \tFragment ");
//     for(i=0;i<nf;i++){
//         printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",f[i],ff[i],b[ff[i]],frag[i]);
//         getch();
//     }

// }
















































// #include<stdio.h>
// #include<conio.h>
// #define max 25
// void main(){
// int frag[max],b[max],f[max],i,j,nb,nf,temp,highest=0; static int bf[max],ff[max];
//     printf("\n\tMemory Management Scheme - Worst Fit");
//     printf("\nEnter the number of blocks:");
//         scanf("%d",&nb);
//     printf("Enter the number of files:");
//     scanf("%d",&nf);
//     printf("\nEnter the size of the blocks:-\n");
//     for(i=1;i<=nb;i++){
//         printf("Block %d:",i);
//         scanf("%d",&b[i]);
//     }
//     printf("Enter the size of the files :-\n");
//     for(i=1;i<=nf;i++){
//         printf("File %d:",i);
//         scanf("%d",&f[i]);
//     for(i=1;i<=nf;i++){
//         for(j=1;j<=nb;j++){
//             if(bf[j]!=1) //if bf[j] is not allocated
//             {
//                 temp=b[j]-f[i];
//                 if(temp>=0)
//                 if(highest<temp){
//                 }
//             }
//             frag[i]=highest;
//             bf[ff[i]]=1; 
//             highest=0;
//         }
//     ff[i]=j;
//     highest=temp;
//     }
// printf("\nFile_no:\tFile_size:\tBlock_no:\tBlock_size:\tFragement");
// for(i=1;i<=nf;i++)
//     printf("\n%d\t\t%d\t\t%d\tt%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
// getch();
// }
// }
