#include<iostream>

using namespace std;

int main()
{
    int i,j,m[5][5],count=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>m[i][j];
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {

            if(m[2][2]==1)
            {
                break;
            }
            if(m[i][j]==1 && i<2)
            {
                m[i+1][j]=m[i][j];
                count++;
                
            }
            else if(m[i][j]==1 && i>2)
            {
                m[i-1][j]=m[i][j];
                i=i-2;
                count++;
                
            }
            else if(m[i][j]==1 && j<2)
            {
                m[i][j+1]=m[i][j];
                
                count++;
                
            }
            else if(m[i][j]==1 && j>2)
            {
                m[i][j-1]=m[i][j];
                j=j-2;
                count++;
                
            }
            
        }
    }

    cout<<count;

}