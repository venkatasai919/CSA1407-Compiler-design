#include <stdio.h>
#include <string.h>

struct Symbol
{
    char name[20], type[20];
};

int main()
{
    struct Symbol s[10];
    int n = 0, i, ch;
    char key[20];

    while(1)
    {
        printf("\n1.Insert 2.Search 3.Display 4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if(ch == 1)
        {
            printf("Enter name and type: ");
            scanf("%s %s", s[n].name, s[n].type);
            n++;
            printf("Inserted successfully\n");
        }

        else if(ch == 2)
        {
            printf("Enter name: ");
            scanf("%s", key);

            for(i = 0; i < n; i++)
                if(strcmp(s[i].name, key) == 0)
                    break;

            if(i < n)
                printf("Symbol found\n");
            else
                printf("Symbol not found\n");
        }

        else if(ch == 3)
        {
            printf("Name\tType\n");
            for(i = 0; i < n; i++)
                printf("%s\t%s\n", s[i].name, s[i].type);
        }

        else
            break;
    }

    return 0;
}
