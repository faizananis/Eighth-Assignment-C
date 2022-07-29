int main()
{
    int i=0;
    int j=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=6-i||j>=5+i)
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
