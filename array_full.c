#include<stdio.h>

int main()
{
    int student[100],i,j,temp,n,d,m, count=0;

    printf("Enter array size : \n");
    scanf("%d", &n);

    printf("Enter %d integer numbers : \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &student[i]);
    }

    printf("Before sort numbers : \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", student[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(student[i]>student[j])
            {
                temp=student[i];
                student[i]=student[j];
                student[j]=temp;
            }
        }
    }
    printf("After sort numbers : \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", student[i]);
    }




    printf("Enter delete number : \n");
    scanf("%d", &d);
    for(i=0; i<n; i++)
    {
        if(d==student[i])//----------------------
        {
            for(i=i; i<n; i++)
            {
                student[i]=student[i+1];
                count=1;
            }
        }
    }
    printf("After delete numbers : \n");
    if(count==1)
    {
        for(i=0; i<n-1; i++)
        {
            printf("%d\n", student[i]);
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            printf("%d\n", student[i]);
        }
    }




    printf("Enter insert element number : \n");
    scanf("%d", &m);
    printf("Enter insert %d integer number :\n",m);
    for(i=n-1; i<(m+n)-1; i++)
    {
        scanf("%d", &student[i]);
    }
    printf("Before sort Insert numbers : \n");
    for(i=0; i<(m+n)-1; i++)
    {
        printf("%d\n", student[i]);
    }

    for(i=0; i<(m+n)-1; i++)
    {
        for(j=i+1; j<(m+n)-1; j++)
        {
            if(student[i]>student[j])
            {
                temp=student[i];
                student[i]=student[j];
                student[j]=temp;
            }
        }
    }
    printf("After sort Insert numbers : \n");
    for(i=0; i<(m+n)-1; i++)
    {
        printf("%d\n", student[i]);
    }



    return 0;
}
