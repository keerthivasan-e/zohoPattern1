#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;++i)
    {
        
        for(int j=n-i; j>0;--j)
            printf(" ");
        
        
        int option = 0;
        option = (i%2==0) ?2:1;

        switch(option)
        {
            case 1: 
                for(int k=n*(i-1)+1;k<=n*i;++k)
                    {
                        printf("%d ",k);
                    }
                    break;
            case 2:
                for(int k=n*i;k>n*(i-1);--k)
                        printf("%d ",k);
                    break;
        }
        printf("\n");
        
    }
}

        // if(option ==2)
        //     for(int k=n*i;k>=n*(i-1);--k)
        //         printf("%d ",k);