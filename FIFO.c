//First In First Out Page Replacement Algorithm

#include<stdio.h>

int main()
{
    int frame_size,n,reflist[20],framelist[10],i,page_fault=0,page_hit=0,j,fault;

    printf("Enter The Number Of Elements\n");

    scanf("%d",&n);

    printf("\n-----Getting Array Elements-----\n");

    printf("Enter The Array Elements\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&reflist[i]);

    }

    printf("\n-----Getting Frame Size-----\n");

    printf("Enter The Frame Size\n");

    scanf("%d",&frame_size);

    for(i=0;i<frame_size;i++)
    {
        framelist[i]=-1;
    }

    int k=0;

    for(i=0;i<n;i++)
    {

        fault=0;
        
        for(j=0;j<frame_size;j++)
        {
            
            if(reflist[i]==framelist[j])
            {
                page_hit++;

                printf("%d Hit ",j);
    
            }
            else
            {
                
                fault++;
            }
            
        }
        if(fault==frame_size)
        {

            k=k%frame_size;
            
            framelist[k]=reflist[i];

            page_fault++;

            k++;

            printf("%d Fault ",i);
            
        }
    }
    
    for(i=0;i<frame_size;i++)
    {
        printf("%d ",framelist[i]);
    }

    printf("\nPage Fault\n%d",page_fault);

    printf("\nPage Hit\n%d",page_hit);

}

