#include<iostream>
using namespace std;
string P1,P2;
char token;
void Structure(char A[3][3])
{
    for(int i=0;i<3;i++)
    {
        if(i==2)
        {
            cout<<"   "<<A[0][0]<<"     |     "<<A[0][1]<<"     |     "<<A[0][2]<<"\n";
        }
        cout<<"         |           |           \n";
    }
   cout<<"_________|___________|_________\n";
    for(int i=0;i<3;i++)
    {
        if(i==2)
        {
            cout<<"   "<<A[1][0]<<"     |     "<<A[1][1]<<"     |     "<<A[1][2]<<"\n";
        }
        cout<<"         |           |           \n";
    }
    cout<<"_________|___________|_________\n";
    for(int i=0;i<4;i++)
    {
        if(i==2)
        {
            cout<<"   "<<A[2][0]<<"     |     "<<A[2][1]<<"     |     "<<A[2][2]<<"\n";
        }
        cout<<"         |           |           \n";
    }
}
int Logic(char A[3][3])
{
    for(int i=0;i<3;i++)
    {
        if((A[0][i]==A[1][i])&&(A[2][i]==A[0][i]))
        {
            if(A[0][i]=='X')
            {
                cout<<"\nGame Over!!\n";
                cout<<"Hurray!!\n"<<P1<<" You Won the Game!!\n";
            }
            else
            {
                cout<<"\nGame Over!!\n";
                cout<<"Hurray!!\n"<<P2<<" You Won the Game!!\n";
            }
            return 1;
            break;
        }
        else if((A[i][0]==A[i][1])&&(A[i][1]==A[i][2]))
        {
            if(A[i][0]=='X')
            {
                cout<<"\nGame Over!!\n";
                cout<<"Hurray!!\n"<<P1<<" You Won the Game!!\n";
            }
            else
            {
                cout<<"\nGame Over!!\n";
                cout<<"Hurray!!\n"<<P2<<" You Won the Game!!\n";
            }
            return 1;
            break;
        }
        else if((A[0][0]==A[1][1])&&(A[1][1]==A[2][2]))
        {
            if(A[0][0]=='X')
            {
                cout<<"\nGame Over!!\n";
                cout<<"Hurray!!\n"<<P1<<" You Won the Game!!\n";
            }
            else
            {
                cout<<"\nGame Over!!\n";
                cout<<"Hurray!!\n"<<P2<<" You Won the Game!!\n";
            }
            return 1;
            break;
        }
    }
    return 0;
}
void Input(char A[3][3])
{
    int id,pos,i,j,m;
    cout<<"Hello\nWelcome to Tic-Tac-Toe\n";
    cout<<"\nLets Start the Game!!\n";
    cout<<"\nEnter the name of Player1\t";
    cin>>P1;
    cout<<"\nEnter the name of Player2\t";
    cin>>P2;
    cout<<"\nPlayer1 your Token is  X\n";
    cout<<"\nPlayer2 your Token is  O\n";
    int count=0;
    while(count<9)
    {
        cout<<P1<<"\tIt's Your Turn!!\n";
        cout<<"\nEnter the id where you want to add X\t";
        cin>>id;
        if(id==1)
        {
            i=0;
            j=0;
        }
        else if(id==2)
        {
            i=0;
            j=1;
        }
        else if(id==3)
        {
            i=0;
            j=2;
        }
        else if(id==4)
        {
            i=1;
            j=0;
        }
        else if(id==5)
        {
            i=1;
            j=1;
        }
        else if(id==6)
        {
            i=1;
            j=2;
        }
        else if(id==7)
        {
            i=2;
            j=0;
        }
        else if(id==8)
        {
            i=2;
            j=1;
        }
        else if(id==9)
        {
            i=2;
            j=2;
        }
        else
        {
            cout<<"Please Enter Valid Id!!";
        }
        A[i][j]='X';
        Structure(A);
        m=Logic(A);
        if(m==1)
        break;
        count+=1;
        if(count<9)
        {
            cout<<P2<<"\tIt's Your Turn!!\n";
            cout<<"\nEnter the id where you want to add O\t";
            cin>>id;
            if(id==1)
            {
                i=0;
                j=0;
            }
            else if(id==2)
            {
                i=0;
                j=1;
            }
            else if(id==3)
            {
                i=0;
                j=2;
            }
            else if(id==4)
            {
                i=1;
                j=0;
            }
            else if(id==5)
            {
                i=1;
                j=1;
            }
            else if(id==6)
            {
                i=1;
                j=2;
            }
            else if(id==7)
            {
                i=2;
                j=0;
            }
            else if(id==8)
            {
                i=2;
                j=1;
            }
            else if(id==9)
            {
                i=2;
                j=2;
            }
            else
            {
                cout<<"Please Enter Valid Id!!";
            }
            A[i][j]='O';
        }
        Structure(A);
        m=Logic(A);
        if(m==1)
        break;
        count+=1;
    }
    if(m==0)
    {
        cout<<"\nWell Played "<<P1<<" and "<<P2<<"\n";
        cout<<"\nGame Over!!\n";
        cout<<"\nIt's a Tie!!\n";
        cout<<"\nBetter Luck next Time!!\n";
    }
}

int main()
{
    char Mat[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    Structure(Mat);
    Input(Mat);
    Structure(Mat);
    return 0;
}
