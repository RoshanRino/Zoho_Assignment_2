#include "Class_BlackKnight.h"

class BlackPawn : public Box
{
    string name =" B_P ";
    string type ="black";
    string piece ="BlackPawn";
    string take  =" B*P ";
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
        if(board[i+1][j]->getType()== "NA"&& i+1<8&&i+1>-1&&j<8&&j>-1)
        {
            cout<<place(i+1,j)<<endl;
            possible.push_back(place(i+1,j));
        }
        if(i==1 &&board[i+2][j]->getType()== "NA")
        {
            cout<<place(i+2,j)<<endl;
            possible.push_back(place(i+2,j));
        }
        if(board[i+1][j+1]->getType()== "white"  && i+1<8&&i+1>-1&&j+1<8&&j+1>-1)
        {
            cout<<place(i+1,j+1)<<" Take Piece "<<board[i+1][j+1]->getPiece()<<endl;
            possible.push_back(place(i+1,j+1));Range.push_back(place(i+1,j+1));
        }
        if(board[i+1][j-1]->getType()== "white"  && i+1<8&&i+1>-1&&j-1<8&&j-1>-1)
        {
            cout<<place(i+1,j-1)<<" Take Piece "<<board[i+1][j-1]->getPiece()<<endl;
            possible.push_back(place(i+1,j-1));Range.push_back(place(i+1,j-1));
        }

    }

};

