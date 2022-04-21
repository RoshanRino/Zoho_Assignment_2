#include "Class_WhiteQueen.h"

class WhiteKing : public Box
{
    string name =" W_K ";
    string type ="white";
    string piece ="WhiteKing";
public:
    string getName()
    {
        return name;
    }
    string getType()
    {
        return type;
    }
    string getPiece()
    {
        return piece;
    }
    void possibleMovement(int i,int j)
    {
        if(i<8&&i>-1&&j+1<8&&j+1>-1 && board[i][j+1]->getType()!=board[i][j]->getType())
        {
            if(board[i][j+1]->getType() =="black" ) cout<<place(i,j+1)<<" Take Piece "<<endl;
            else cout<<place(i,j+1)<<endl;
            possible.push_back(place(i,j+1));
        }
        if(i-1<8&&i-1>-1&&j<8&&j>-1 && board[i-1][j]->getType()!=board[i][j]->getType())
        {
            if(board[i-1][j]->getType() == "black") cout<<place(i-1,j)<<" Take Piece "<<endl;
            else cout<<place(i-1,j)<<endl;
            possible.push_back(place(i-1,j));
        }
        if(i<8&&i>-1&&j-1<8&&j-1>-1 && board[i][j-1]->getType()!=board[i][j]->getType() )
        {
            if(board[i][j-1]->getType() =="black") cout<<place(i,j-1)<<" Take Piece "<<endl;
            else cout<<place(i,j-1)<<endl;
            possible.push_back(place(i,j-1));
        }
        if(i+1<8&&i+1>-1&&j<8&&j>-1 && board[i+1][j]->getType()!=board[i][j]->getType())
        {
            if(board[i+1][j]->getType()=="black") cout<<place(i+1,j)<<" Take Piece "<<endl;
            else cout<<place(i+1,j)<<endl;
            possible.push_back(place(i+1,j));
        }
        if(i+1<8&&i+1>-1&&j+1<8&&j+1>-1 && board[i+1][j+1]->getType()!=board[i][j]->getType())
        {
            if(board[i+1][j+1]->getType()=="black") cout<<place(i+1,j+1)<<" Take Piece "<<endl;
            else cout<<place(i+1,j+1)<<endl;
            possible.push_back(place(i+1,j+1));
        }
        if(i-1<8&&i-1>-1&&j-1<8&&j-1>-1 && board[i-1][j-1]->getType()!=board[i][j]->getType() )
        {
            if(board[i-1][j-1]->getType()=="black") cout<<place(i-1,j-1)<<" Take Piece "<<endl;
            else cout<<place(i-1,j-1)<<endl;
            possible.push_back(place(i-1,j-1));
        }
        if(i+1<8&&i+1>-1&&j-1<8&&j-1>-1 && board[i+1][j-1]->getType()!=board[i][j]->getType())
        {
            if(board[i+1][j-1]->getType()=="black") cout<<place(i+1,j-1)<<" Take Piece "<<endl;
            else cout<<place(i+1,j-1)<<endl;
            possible.push_back(place(i+1,j-1));
        }
        if(i-1<8&&i-1>-1&&j+1<8&&j+1>-1 && board[i-1][j+1]->getType()!=board[i][j]->getType())
        {
            if(board[i-1][j+1]->getType()=="black") cout<<place(i-1,j+1)<<" Take Piece "<<endl;
            else cout<<place(i-1,j+1)<<endl;
            possible.push_back(place(i-1,j+1));
        }
    }
};

