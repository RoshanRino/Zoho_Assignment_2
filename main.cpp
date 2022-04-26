
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
string findWhiteKing()
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            if(board[i][j]->getPiece()=="WhiteKing")
                return place(i,j);
}
string findBlackKing()
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            if(board[i][j]->getPiece()=="BlackKing")
                return place(i,j);
}
void getRange(string temp)
{
    Range.clear();
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
            if(board[i][j]->getType()==temp)
                board[i][j]->possibleMovement(i,j);
    }
    system("cls");
}
bool inPossible(string a)
{
    for(int i=0;i<possible.size();i++)
        if(a==possible[i])
            return true;
    return false;
}
void possibleDisplay(string pp)
{

        cout<<"   ";
        for(int i=0;i<8;i++,cout<<"  "<<char(i+96)<<"  ");
        cout<<endl;
        for(int i=0;i<8;i++)
        {
            cout<<endl<<i+1<<"  ";
            for(int j=0;j<8;j++)
            {
                if(place(i,j)!=pp && inPossible(place(i,j)))
                    cout<<board[pp[1]-49][pp[0]-97]->takePiece();
                else
                    cout<<board[i][j]->getName();
            }
        }
        cout<<endl<<endl;
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
bool check(string a)
{
    string temp;
    if(a=="white")
    {
        getRange("black");
        temp=findWhiteKing();
    }
    else
    {
        getRange("white");
        temp=findBlackKing();
    }
    for(int i=0;i<Range.size();i++)
    {
        if(temp==Range[i])
            return true;
    }
    return false;
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
        if(f[0] >48 && f[0] <57) Empty::swa(f[0],f[1]);
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
            system("cls");
            cout<<"The unit you Selected is : "<<board[i][j]->getPiece()<<endl<<"The possible Moves you can make are :"<<endl;
            board[i][j]->possibleMovement(i,j);
            possibleDisplay(f);
        }
        else
            continue;
        if(possible.empty())
        {
            system("cls");
            cout<<"NO Possible Moves Choose a Different Coin:"<<endl<<endl;
            continue;
        }
        cout<<"To choose a different coin press type 'Back'"<<endl<<endl;
        cin>>t;
        if(t[0] >48 && t[0] <57) Empty::swa(t[0],t[1]);
        if(t=="Back")
            continue;
        if(verify(t)==true)
        {
            Box* temp=board[t[1]-49][t[0]-97];
            move(f,t);
            system("cls");
            if(check("white")==true && turn%2!=0)
            {
                cout<<"The White King is under attack cannot make this Move !"<<endl<<endl<<endl;
                move(t,f);
                board[t[1]-49][t[0]-97]=temp;
                continue;
            }
            if(check("black")==true && turn%2==0)
            {
                cout<<"The Black King is under attack cannot make this Move !"<<endl<<endl<<endl;
                move(t,f);
                board[t[1]-49][t[0]-97]=temp;
                continue;
            }
            turn++;
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
