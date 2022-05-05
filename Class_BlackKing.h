#include "Class_BlackPawn.h"

class BlackKing : public Box
{
    string name =" B_K ";
    string type ="black";
    string piece ="BlackKing";
    string take  =" B*K ";
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
        if(i<8&&i>-1&&j+1<8&&j+1>-1 && board[i][j+1]->getType()!=board[i][j]->getType())
        {
            if(board[i][j+1]->getType()=="white") cout<<place(i,j+1)<<" Take Piece "<<board[i][j+1]->getPiece()<<endl;
            else cout<<place(i,j+1)<<endl;
            possible.push_back(place(i,j+1));Range.push_back(place(i,j+1));
        }
        if(i-1<8&&i-1>-1&&j<8&&j>-1 && board[i-1][j]->getType()!=board[i][j]->getType())
        {
            if(board[i-1][j]->getType()=="white") cout<<place(i-1,j)<<" Take Piece "<<board[i-1][j]->getPiece()<<endl;
            else cout<<place(i-1,j)<<endl;
            possible.push_back(place(i-1,j));Range.push_back(place(i-1,j));
        }
        if(i<8&&i>-1&&j-1<8&&j-1>-1 && board[i][j-1]->getType()!=board[i][j]->getType())
        {
            if(board[i][j-1]->getType()=="white") cout<<place(i,j-1)<<" Take Piece "<<board[i][j-1]->getType()<<endl;
            else cout<<place(i,j-1)<<endl;
            possible.push_back(place(i,j-1));Range.push_back(place(i,j-1));
        }
        if( i+1<8&&i+1>-1&&j<8&&j>-1 && board[i+1][j]->getType()!=board[i][j]->getType() )
        {
            if(board[i+1][j]->getType()=="white") cout<<place(i+1,j)<<" Take Piece "<<board[i+1][j]->getType()<<endl;
            else cout<<place(i+1,j)<<endl;
            possible.push_back(place(i+1,j));Range.push_back(place(i+1,j));
        }
        if(i+1<8&&i+1>-1&&j+1<8&&j+1>-1 && board[i+1][j+1]->getType()!=board[i][j]->getType())
        {
            if(board[i+1][j+1]->getType()=="white") cout<<place(i+1,j+1)<<" Take Piece "<<board[i+1][j+1]->getType()<<endl;
            else cout<<place(i+1,j+1)<<endl;
            possible.push_back(place(i+1,j+1));Range.push_back(place(i+1,j+1));
        }
        if(i-1<8&&i-1>-1&&j-1<8&&j-1>-1 && board[i-1][j-1]->getType()!=board[i][j]->getType() )
        {
            if(board[i-1][j-1]->getType()=="white") cout<<place(i-1,j-1)<<" Take Piece "<<board[i-1][j-1]->getType()<<endl;
            else cout<<place(i-1,j-1)<<endl;
            possible.push_back(place(i-1,j-1));Range.push_back(place(i-1,j-1));
        }
        if(i+1<8&&i+1>-1&&j-1<8&&j-1>-1 && board[i+1][j-1]->getType()!=board[i][j]->getType() )
        {
            if(board[i+1][j-1]->getType()=="white") cout<<place(i+1,j-1)<<" Take Piece "<<board[i+1][j-1]->getType()<<endl;
            else cout<<place(i+1,j-1)<<endl;
            possible.push_back(place(i+1,j-1));Range.push_back(place(i+1,j-1));
        }
        if(i-1<8&&i-1>-1&&j+1<8&&j+1>-1 && board[i-1][j+1]->getType()!=board[i][j]->getType())
        {
            if(board[i-1][j+1]->getType()=="white") cout<<place(i-1,j+1)<<" Take Piece "<<board[i-1][j+1]->getType()<<endl;
            else cout<<place(i-1,j+1)<<endl;
            possible.push_back(place(i-1,j+1));Range.push_back(place(i-1,j+1));
        }
    }

};

