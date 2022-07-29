int main()
{
    int i=0;
    int j=0;
    int num=0;
    for(i=1;i<=4;i++)
    {
        num=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%d",num);
            }
            else
            {
                printf(" ");
            }
            if(j<4)
                num++;
            else
                num--;
        }
        printf("\n");
    }
    return 0;
}
