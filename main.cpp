#include "Class_Empty.h"
Empty emptyy;
WhiteKnight whiteKnight;
BlackKnight blackKnight;
WhitePawn whitePawn;
BlackPawn blackPawn;
BlackRook blackRook;
WhiteRook whiteRook;
WhiteBishop whiteBishop;
BlackBishop blackBishop;
BlackQueen blackQueen;
WhiteQueen whiteQueen;
BlackKing blackKing;
WhiteKing whiteKing;
void initializeBoard()
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            board[i][j]=&emptyy;
    for(int i=0;i<8;i++)
        board[1][i]=&blackPawn;
    for(int i=0;i<8;i++)
        board[6][i]=&whitePawn;
    for(int i=0;i<8;i++)
    {
        if(i==0 || i==7)
        {
            board[0][i]=&blackRook;
            board[7][i]=&whiteRook;
        }
        else if(i==1 || i==6)
        {
            board[0][i]=&blackKnight;
            board[7][i]=&whiteKnight;
        }
        else if(i==2 || i==5)
        {
            board[0][i]=&blackBishop;
            board[7][i]=&whiteBishop;
        }
        else if(i==3)
        {
            board[0][i]=&blackQueen;
            board[7][i]=&whiteQueen;
        }
        else
        {
            board[0][i]=&blackKing;
            board[7][i]=&whiteKing;
        }
    }
}
void displayBoard()
{
    cout<<"   ";
    for(int i=0;i<8;i++,cout<<"  "<<char(i+96)<<"  ");
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<endl<<i+1<<"  ";
        for(int j=0;j<8;j++)
            cout<<board[i][j]->getName();
    }
    cout<<endl;
}
void move(string from,string to)
{
    int fi,fj,ti,tj;
    fj=from[0]-97;
    fi=from[1]-49;
    tj=to[0]-97;
    ti=to[1]-49;
    board[ti][tj]=board[fi][fj];
    board[fi][fj]=&emptyy;
}
void writeToFile(string from,string to)
{
    fileEdit.open("Move_History.txt",ios::app);
    fileEdit<<from<<" Moved To "<<to<<endl;
    fileEdit.close();
}
int main()
{
    int turn=1,i,j;
    initializeBoard();
    string f,t;
    while(1)
    {
        displayBoard();
        possible.clear();
        cout<<endl<<"Enter the position of the coin you want to Move"<<endl;
        cout<<endl<<"Type 'Exit' to exit the application"<<endl;
        cin>>f;
        if(f=="Exit") return 0;
        j=f[0]-97;
        i=f[1]-49;
        if(turn%2==0 && board[i][j]->getType()=="white")
        {
            system("cls");
            cout<<"It is the Turn of Black"<<endl<<endl;
            continue;
        }
        if(turn%2!=0 && board[i][j]->getType()=="black")
        {
            system("cls");
            cout<<"It is the Turn of White"<<endl<<endl;
            continue;
        }
        if(i<8&&i>-1&&j<8&&j>-1)
        {
            cout<<"The unit you Selected is : "<<board[i][j]->getPiece()<<endl<<"The possible Moves you can make are :"<<endl;
            board[i][j]->possibleMovement(i,j);
        }
        else
            continue;
        if(possible.empty())
        {
            system("cls");
            cout<<"NO Possible Moves Choose a Different Coin:"<<endl<<endl;
            continue;
        }
        cin>>t;
        if(verify(t)==true)
        {
            move(f,t);
            turn++;
            system("cls");
            cout<<" Moved! "<<endl<<endl;
            writeToFile(f,t);
        }
        else
        {
            system("cls");
            cout<<"Invalid Move"<<endl<<endl;
        }
    }
    return 0;
}
