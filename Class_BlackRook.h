#include "Class_WhiteRook.h"

class BlackRook : public Box
{
    string name =" B_R ";
    string type ="black";
    string piece ="BlackRook";
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
        int tempi,tempj;
        for(tempi=i+1,tempj=j;;tempi++)
        {
            if(tempi<8 && tempi>-1 && tempj<8 && tempj>-1 && board[tempi][tempj]->getType()=="NA")
            {
                cout<<place(tempi,tempj)<<endl;
                possible.push_back(place(tempi,tempj));
            }
            else
                break;
        }
        if( tempi<8 && tempi>-1 && tempj<8 && tempj>-1&&board[tempi][tempj]->getType()=="white")
        {
            cout<<place(tempi,tempj)<<" Take Piece "<<endl;
            possible.push_back(place(tempi,tempj));
        }
        for(tempi=i,tempj=j+1;;tempj++)
        {
            if(tempi<8 && tempi>-1 && tempj<8 && tempj>-1 && board[tempi][tempj]->getType()=="NA")
            {
                cout<<place(tempi,tempj)<<endl;
                possible.push_back(place(tempi,tempj));
            }
            else
                break;
        }
        if(tempi<8 && tempi>-1 && tempj<8 && tempj>-1 &&board[tempi][tempj]->getType()=="white")
        {
            cout<<place(tempi,tempj)<<" Take Piece "<<endl;
            possible.push_back(place(tempi,tempj));
        }
        for(tempi=i-1,tempj=j;;tempi--)
        {
            if(tempi<8 && tempi>-1 && tempj<8 && tempj>-1 && board[tempi][tempj]->getType()=="NA")
            {
                cout<<place(tempi,tempj)<<endl;
                possible.push_back(place(tempi,tempj));
            }
            else
                break;
        }
        if( tempi<8 && tempi>-1 && tempj<8 && tempj>-1 && board[tempi][tempj]->getType()=="white")
        {
            cout<<place(tempi,tempj)<<" Take Piece "<<endl;
            possible.push_back(place(tempi,tempj));
        }

        for(tempi=i,tempj=j-1;;tempj--)
        {
            if(tempi<8 && tempi>-1 && tempj<8 && tempj>-1 && board[tempi][tempj]->getType()=="NA")
            {
                cout<<place(tempi,tempj)<<endl;
                possible.push_back(place(tempi,tempj));
            }
            else
                break;
        }
        if(tempi<8 && tempi>-1 && tempj<8 && tempj>-1 && board[tempi][tempj]->getType()=="white")
        {
            cout<<place(tempi,tempj)<<" Take Piece "<<endl;
            possible.push_back(place(tempi,tempj));
        }

    }

};

