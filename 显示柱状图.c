//显示柱状图
#include<stdio.h>
#include<stdlib.h>

int main()
{
   char table[21][31];//二维数组 将柱状图视作表格 来处理 
   int num[20];//接收数字
   char sign[20];//接收符号
   int n,i,j;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        scanf("%c",&sign[i]);
    }
    int up=0,down=0;//表示x轴上方和下方各有多少行
    for(i=0;i<n;i++)//判断x轴上下方各有多少行 
    {
        if(num[i]>0&&up<num[i])//上方 up行 
        {
            up=num[i];

        }
        else if(num[i]<=0&&down>num[i])//下方 down行 
        {
            down=num[i];

        }
    }
    int row=up-down+1; //总行数 （包括x轴） 

    for(j=0;j<n;j++)  //先对二维数组进行赋值 
    {
        if(num[j]>0)//对数字大于0的列进行赋值 
        { 
            for(i=0;i<row;i++)
            {
                if(i<up-num[j])
                {
                    table[i][j]=' ';
                }
                else if(i<up&&i>=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    }
                    else{
                        table[i][j]=sign[j];
                    }

                }
                else if(i==up)
                {
                    table[i][j]='-';//对x轴进行赋值 
                }
                else
                {
                    table[i][j]=' '; 
                }
            }
        }
        else//对数字小于0的列进行赋值 
        {
            for(i=0;i<row;i++)
            {

                if(i<up)
                {
                    table[i][j]=' ';
                }
                else if(i==up)
                {
                    table[i][j]='-';
                }
                else if(i>up&&i<=up-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        table[i][j]='+';
                    } else{
                        table[i][j]=sign[j];
                    }
                }
                else
                    {
                     table[i][j]=' ';

                }
            }

        }
    }


    for(i=0;i<row;i++)//将二维数组显示出来 
    {
        if(i==up)//显示x轴 
        {
            for(j=0;j<n;j++)
            {
                if(j==n-1)
                {
                    printf("%c",table[i][j]);
                }
                else
                {
                    printf("%c-",table[i][j]);
                }

            }
        }
        else//显示其他部分 
        {
            for(j=0;j<n;j++)
            {
                printf("%c ",table[i][j]);
            }
        }
        printf("\n");
    }


    return 0;

}
