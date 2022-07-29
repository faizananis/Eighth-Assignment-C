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
            if(j>=i&&j<=8-i)
            {
                printf("%d",num);
                if(j<4)
                    num++;
                else
                    num--;
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
