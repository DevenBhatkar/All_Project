include<iostream>
using namespace std;
char board[3][3]={'1','2','3','4','5','6','7','8','9'};
int z=0;
class Game
{
    public:
    int q;
    void posn(int ch)
    {
        int count;
        count = check(ch);
            if(count==0)
            {
                switch(ch)
            {
            case 1:
            board[0][0]='X';
            break;
            case 2:
            board[0][1]='X';
            break;
            case 3:
            board[0][2]='X';
            break;
            case 4:
            board[1][0]='X';
            break;
            case 5:
            board[1][1]='X';
            break;
            case 6:
            board[1][2]='X';
            break;
            case 7:
            board[2][0]='X';
            break;
            case 8:
            board[2][1]='X';
            break;
            case 9:
            board[2][2]='X';
            break;
            default:
            cout<<"Invalid position.\n Choose another position : ";
            int a;
            cin>>a;
            posn(a);
            }
        }
        else
        {
            cout<<"Position is occupied.\nPlease enter another position\n";
            int b;
            cin>>b;
            posn(b);
        }
        over();

    }
    void posn1(int ch)
    {
                int count;
        count = check(ch);
            if(count==0)
            {

             switch(ch)
                {
                case 1:
                board[0][0]='O';
                break;
                case 2:
                board[0][1]='O';
                break;
                case 3:
                board[0][2]='O';
                break;
                case 4:
                board[1][0]='O';
                break;
                case 5:
                board[1][1]='O';
                break;
                case 6:
                board[1][2]='O';
                break;
                case 7:
                board[2][0]='O';
                break;
                case 8:
                board[2][1]='O';
                break;
                case 9:
                board[2][2]='O';
                break;
                default:
                cout<<"Invalid position.\n Choose another position : ";
                int a;
                cin>>a;
                posn1(a);
                }
            }
            else
        {
            cout<<"Position is occupied.\nPlease enter another position\n";
            int b;
            cin>>b;
            posn1(b);
        }
        over();

    }
    void display()
    {
        cout<<"\t\t\t\t-------------"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"\t\t\t\t| ";
            for(int j=0;j<3;j++)
            {
                cout<<board[i][j]<<" | ";
            }
            cout<<endl;
            cout<<"\t\t\t\t-------------"<<endl;
        }
    }
    void turn()
    {
        int ch;
         for(q=1;q<10;q++)
        {
            if(z==0)
            {if(q%2 == 1)
            {
                cout<<"Player 1 [X] turn \nChoose your position : ";
                cin>>ch;
                posn(ch);
                display();
            }
            else
            {
                cout<<"Player 2 [O] turn \nChoose your position : ";
                cin>>ch;
                posn1(ch);
                display();
            }
            }else
            break;
        }


    }
    int check(int ch)
    {
        int b;
        switch(ch)
            {
            case 1:
            if(board[0][0]=='O'||board[0][0]=='X')
            {
               return 1;
            }
            else
            {
                return 0;
            }
            break;
            case 2:
            if(board[0][1]=='O'||board[0][1]=='X')
            {
                return 1;
            }
             else
            {
                return 0;
            }
            break;
            case 3:
            if(board[0][2]=='O'||board[0][2]=='X')
            {
                return 1;
            }
             else
            {
                return 0;
            }
            break;
            case 4:
            if(board[1][0]=='O'||board[1][0]=='X')
            {
                return 1;
            }
             else
            {
                return 0;
            }
            break;
            case 5:
            if(board[1][1]=='O'||board[1][1]=='X')
            {
                return 1;
            }
             else
            {
                return 0;
            }
            break;
            case 6:
            if(board[1][2]=='O'||board[1][2]=='X')
            {
                return 1;
            }
             else
            {
                return 0;
            }
            break;
            case 7:
            if(board[2][0]=='O'||board[2][0]=='X')
            {
                return 1;
            }
            else
            {
                return 0;
            }
            break;
            case 8:
            if(board[2][1]=='O'||board[2][1]=='X')
            {
              return 1;
            }
             else
            {
               return 0;
            }
            break;
            case 9:
            if(board[2][2]=='O'||board[2][2]=='X')
            {
               return 1;
            }
             else
            {
               return 0;
            }
            break;
            }
    }
    void over()
    {
        if(board[0][0]==board[0][1]&&board[0][0]==board[0][2])
        {
            cout<<"\t\t\t\tGame Over\n";
            if(q%2==1)
            {
                cout<<"\t\t\t\tPlayer 1[X] WINS";
            }
            else
            {
                cout<<"\t\t\t\tPlayer 2[O] WINS";
            }
            ++q;
            z=1;
        }
        else if(board[1][0]==board[1][1]&&board[1][0]==board[1][2])
        {
            cout<<"\t\t\t\tGame Over\n";
            if(q%2==1)
            {
                cout<<"\t\t\t\tPlayer 1[X] WINS";
            }
            else
            {
                cout<<"\t\t\t\tPlayer 2[O] WINS";
            }
            ++q;
            z=1;
        }
        else if(board[2][0]==board[2][1]&&board[2][0]==board[2][2])
        {
            cout<<"\t\t\t\tGame Over\n";
            if(q%2==1)
            {
                cout<<"\t\t\t\tPlayer 1[X] WINS";
            }
            else
            {
                cout<<"\t\t\t\tPlayer 2[O] WINS";
            }
            ++q;
            z=1;
        }
        else if(board[0][0]==board[1][0]&&board[0][0]==board[2][0])
        {
            cout<<"\t\t\t\t\tGame Over\n";
            if(q%2==1)
            {
                cout<<"\t\t\t\tPlayer 1[X] WINS";
            }
            else
            {
                cout<<"\t\t\t\tPlayer 2[O] WINS";
            }
            ++q;
            z=1;
        }
        else if(board[0][1]==board[1][1]&&board[0][1]==board[2][1])
        {
            cout<<"\t\t\t\t\tGame Over\n";
            if(q%2==1)
            {
                cout<<"\t\t\t\tPlayer 1[X] WINS";
            }
            else
            {
                cout<<"\t\t\t\tPlayer 2[O] WINS";
            }
            ++q;
            z=1;
        }
        else if(board[0][2]==board[1][2]&&board[0][2]==board[2][2])
        {
            cout<<"\t\t\t\t\tGame Over\n";
            if(q%2==1)
            {
                cout<<"\t\t\t\tPlayer 1[X] WINS";
            }
            else
            {
                cout<<"\t\t\t\tPlayer 2[O] WINS";
            }
            ++q;
            z=1;
        }
        else if(board[0][0]==board[1][1]&&board[0][0]==board[2][2])
        {
            cout<<"\t\t\t\t\tGame Over\n";
            if(q%2==1)
            {
                cout<<"\t\t\t\tPlayer 1[X] WINS";
            }
            else
            {
                cout<<"\t\t\t\tPlayer 2[O] WINS";
            }
            ++q;
            z=1;
        }
        else if(board[0][2]==board[1][1]&&board[0][2]==board[2][0])
        {
            cout<<"\t\t\t\tGame Over\n";
            if(q%2==1)
            {
                cout<<"\t\t\t\tPlayer 1[X] WINS";
            }
            else
            {
                cout<<"\t\t\t\tPlayer 2[O] WINS";
            }
            ++q;
            z=1;
        }
        if(q==9)
        {
            cout<<"\t\t\t\tGAME OVER!!!!\n\t\t\t\tDRAW";
        }
    }

};
int main()
{
    Game gm;
    cout<<"\t\t\t\tTIC-TAC-TOE Game\nFor 2 players\n";
    cout<<"PLAYER 1 - [X]\nPLAYER 2 - [O]\n";
    gm.display();
    gm.turn();
    return 0;
}
