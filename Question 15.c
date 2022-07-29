int main()
{
    int i=0;
    int j=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==5||j==6-i||i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
