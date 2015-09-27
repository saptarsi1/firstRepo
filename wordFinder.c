#include<stdio.h>
#include<string.h>

int main()
{   int i,j;
	char a[100],b[100];
	//printf("Enter the String :");
	
	printf("\nEnter any sentence:");
    
    scanf("%[^\n]s",a);

    // printf("You had entered: \n");
    // printf("%s",a);
    printf("enter a word:");
    printf("Hi this is Saptarshi");
    scanf("%s",b);
    int flag=0;

	for(i=0;i<strlen(a);i++)
	{
	// int t=i;
     for(j=0;j<strlen(b);j++,i++)
     {
     	if(a[i]!=b[j])
     	{
     		break;
     	}

        
     }
     if(j==strlen(b))
      	{
      	printf("Found\n");	
      	flag = 1;
      	}



     // i=t;
	}

    if(flag==0)
    {
     	printf(" NotFound\n");	
     	
    }

  
    
    return 0;
}
