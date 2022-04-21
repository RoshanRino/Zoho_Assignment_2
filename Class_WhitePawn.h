#include "Class_BlackBishop.h"

class WhitePawn : public Box
{
    string name =" W_P ";
    string type ="white";
    string piece ="WhitePawn";
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

        if(board[i-1][j]->getType()== "NA"&& i-1<8&&i-1>-1&&j<8&&j>-1)
        {
            cout<<place(i-1,j)<<endl;
            possible.push_back(place(i-1,j));
        }
        if(i==6 &&board[i-2][j]->getType()== "NA")
        {
            cout<<place(i-2,j)<<endl;
            possible.push_back(place(i-2,j));
        }
        if(board[i-1][j+1]->getType()== "black"  && i-1<8&&i-1>-1&&j+1<8&&j+1>-1)
        {
            cout<<place(i-1,j+1)<<" Take Piece "<<endl;
            possible.push_back(place(i-1,j+1));
        }
        if(board[i-1][j-1]->getType()== "black"  && i-1<8&&i-1>-1&&j-1<8&&j-1>-1)
        {
            cout<<place(i-1,j-1)<<" Take Piece "<<endl;
            possible.push_back(place(i-1,j-1));
        }
    }

};

