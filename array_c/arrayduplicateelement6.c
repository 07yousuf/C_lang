/* C program to count total number of duplicate elements in an array
 */
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
      int s1[MAX_SIZE];
      int i,j,n,count=0;
      scanf("%d",&n);
      for(i=0;i<n;i++){
            scanf("%d",&s1[i]);
      }

      for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                  if(s1[i]==s1[j]){
                        count++;
                        break;
                  }
            }
      }
      printf("%d",count);
      return 0;
}

/*#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int i, j, size, count = 1;

    /* Input size of array */
    /*printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    /*printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Find all duplicate elements in array
     */
    /*for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            /* If duplicate found then increment count by 1 */
            /*if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}*/
