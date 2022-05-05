#include "Class_BlackRook.h"

class BlackQueen : public Box
{
    string name =" B_Q ";
    string type ="black";
    string piece ="BlackQueen";
    string take  =" B*Q ";
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
            cout<<place(tempi,tempj)<<" Take Piece "<<board[tempi][tempj]->getPiece()<<endl;
            possible.push_back(place(tempi,tempj));Range.push_back(place(tempi,tempj));
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
            cout<<place(tempi,tempj)<<" Take Piece "<<board[tempi][tempj]->getPiece()<<endl;
            possible.push_back(place(tempi,tempj));Range.push_back(place(tempi,tempj));
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
            cout<<place(tempi,tempj)<<" Take Piece "<<board[tempi][tempj]->getPiece()<<endl;
            possible.push_back(place(tempi,tempj));Range.push_back(place(tempi,tempj));
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
            cout<<place(tempi,tempj)<<" Take Piece "<<board[tempi][tempj]->getPiece()<<endl;
            possible.push_back(place(tempi,tempj));Range.push_back(place(tempi,tempj));
        }
        tempi,tempj;
        for(tempi=i+1,tempj=j+1;;tempi++,tempj++)
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
            cout<<place(tempi,tempj)<<" Take Piece "<<board[tempi][tempj]->getPiece()<<endl;
            possible.push_back(place(tempi,tempj));Range.push_back(place(tempi,tempj));
        }
        for(tempi=i+1,tempj=j-1;;tempi++,tempj--)
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
            cout<<place(tempi,tempj)<<" Take Piece "<<board[tempi][tempj]->getPiece()<<endl;
            possible.push_back(place(tempi,tempj));Range.push_back(place(tempi,tempj));
        }
        for(tempi=i-1,tempj=j+1;;tempi--,tempj++)
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
            cout<<place(tempi,tempj)<<" Take Piece "<<board[tempi][tempj]->getPiece()<<endl;
            possible.push_back(place(tempi,tempj));Range.push_back(place(tempi,tempj));
        }

        for(tempi=i-1,tempj=j-1;;tempi--,tempj--)
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
            cout<<place(tempi,tempj)<<" Take Piece "<<board[tempi][tempj]->getPiece()<<endl;
            possible.push_back(place(tempi,tempj));Range.push_back(place(tempi,tempj));
        }
    }

};

