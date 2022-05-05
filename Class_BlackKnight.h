#include "Class_WhiteKnight.h"

class BlackKnight : public Box
{
    string name =" B_N ";
    string type ="black";
    string piece ="BlackKnight";
    string take  =" B*N ";
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
    string takePiece()
    {
        return take;
    }
    void possibleMovement(int i,int j)
    {
        if(i+2<8&&i+2>-1&&j+1<8&&j+1>-1 && board[i+2][j+1]->getType()!=board[i][j]->getType())
        {
            if(board[i+2][j+1]->getType()=="white") cout<<place(i+2,j+1)<<" Take Piece "<<board[i+2][j+1]->getPiece()<<endl;
            else cout<<place(i+2,j+1)<<endl;
            possible.push_back(place(i+2,j+1));Range.push_back(place(i+2,j+1));
        }
        if(i+1<8&&i+1>-1&&j+2<8&&j+2>-1 && board[i+1][j+2]->getType()!=board[i][j]->getType())
        {
            if(board[i+1][j+2]->getType()=="white") cout<<place(i+1,j+2)<<" Take Piece "<<board[i+1][j+2]->getPiece()<<endl;
            else cout<<place(i+1,j+2)<<endl;
            possible.push_back(place(i+1,j+2));Range.push_back(place(i+1,j+2));
        }
        if(i-2<8&&i-2>-1&&j-1<8&&j-1>-1 && board[i-2][j-1]->getType()!=board[i][j]->getType())
        {
            if(board[i-2][j-1]->getType()=="white") cout<<place(i-2,j-1)<<" Take Piece "<<board[i-2][j-1]->getPiece()<<endl;
            else cout<<place(i-2,j-1)<<endl;
            possible.push_back(place(i-2,j-1));Range.push_back(place(i-2,j-1));
        }
        if( i-1<8&&i-1>-1&&j-2<8&&j-2>-1 && board[i-1][j-2]->getType()!=board[i][j]->getType() )
        {
            if(board[i-1][j-2]->getType()=="white") cout<<place(i-1,j-2)<<" Take Piece "<<board[i-1][j-2]->getPiece()<<endl;
            else cout<<place(i-1,j-2)<<endl;
            possible.push_back(place(i-1,j-2));Range.push_back(place(i-1,j-2));
        }
        if(i+1<8&&i+1>-1&&j-2<8&&j-2>-1 && board[i+1][j-2]->getType()!=board[i][j]->getType())
        {
            if(board[i+1][j-2]->getType()=="white") cout<<place(i+1,j-2)<<" Take Piece "<<board[i+1][j-2]->getPiece()<<endl;
            else cout<<place(i+1,j-2)<<endl;
            possible.push_back(place(i+1,j-2));Range.push_back(place(i+1,j-2));
        }
        if(i-1<8&&i-1>-1&&j+2<8&&j+2>-1 && board[i-1][j+2]->getType()!=board[i][j]->getType() )
        {
            if(board[i-1][j+2]->getType()=="white") cout<<place(i-1,j+2)<<" Take Piece "<<board[i-1][j+2]->getPiece()<<endl;
            else cout<<place(i-1,j+2)<<endl;
            possible.push_back(place(i-1,j+2));Range.push_back(place(i-1,j+2));
        }
        if(i+2<8&&i+2>-1&&j-1<8&&j-1>-1 && board[i+2][j-1]->getType()!=board[i][j]->getType() )
        {
            if(board[i+2][j-1]->getType()=="white") cout<<place(i+2,j-1)<<" Take Piece "<<board[i+2][j-1]->getPiece()<<endl;
            else cout<<place(i+2,j-1)<<endl;
            possible.push_back(place(i+2,j-1));Range.push_back(place(i+2,j-1));
        }
        if(i-2<8&&i-2>-1&&j+1<8&&j+1>-1 && board[i-2][j+1]->getType()!=board[i][j]->getType())
        {
            if(board[i-2][j+1]->getType()=="white") cout<<place(i-1,j+1)<<" Take Piece "<<board[i-2][j+1]->getPiece()<<endl;
            else cout<<place(i-2,j+1)<<endl;
            possible.push_back(place(i-2,j+1));Range.push_back(place(i-2,j+1));
        }
    }

};

