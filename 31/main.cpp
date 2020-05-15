#include <iostream>
#include <string>
using namespace std;
int c=0;
char mass[26];
string maze[25]{
"####B######################",
"# #       #   #      #    #",
"# # # ###### #### ####### #",
"# # # #       #   #       #",
"#   # # ######### # ##### #",
"# # # #   #       #     # #",
"### ### ### ############# #",
"# #   #     # #           #",
"# # #   ####### ###########",
"# # # #       # #         C",
"# # ##### ### # # ####### #",
"# # #     ### # #       # #",
"#   ##### ### # ######### #",
"######### ### #           #",
"# ####### ### #############",
"A           #   ###   #   #",
"# ############# ### # # # #",
"# ###       # # ### # # # #",
"# ######### # # ### # # # F",
"#       ### # #     # # # #",
"# ######### # ##### # # # #",
"# #######   #       #   # #",
"# ####### ######### #######",
"#         #########       #",
"#######E############D######"};
void test(int x,int y)
{
        if((maze[x+1][y]!=(' '))&&(maze[x+1][y]!=('#'))&&(maze[x+1][y]!=('.')))
        {
           mass[c]=maze[x+1][y];
           c++;
        }
        else
            if((maze[x-1][y]!=(' '))&&(maze[x-1][y]!=('#'))&&(maze[x-1][y]!=('.')))
            {
               mass[c]=maze[x-1][y];
               c++;
            }
            else
                if((maze[x][y+1]!=(' '))&&(maze[x][y+1]!=('#'))&&(maze[x][y+1]!=('.')))
                {
                   mass[c]=maze[x][y+1];
                   c++;
                }
                else
                    if((maze[x][y-1]!=(' '))&&(maze[x][y-1]!=('#'))&&(maze[x][y-1]!=('.')))
                    {
                       mass[c]=maze[x][y-1];
                       c++;
                    }
}
void walk(int x,int y)
{
    if((maze[x][y]!=' ')||(x>24)||(y>26))
    {
        cout<<"Error"<<endl;
        system("pause");
        exit(1);
    }
    for(int i=0;i<25;i++)
    {
        for(int j=0;j<27;j++)
            cout<<maze[i][j];
    cout<<endl;}
    system("cls");
    test(x, y);
    maze[x][y]='.';
if (maze[x-1][y]==' ')
    walk (x-1,y);
if (maze[x+1][y]==' ')
    walk (x+1,y);
if (maze[x][y-1]==' ')
    walk (x,y-1);
if (maze[x][y+1]==' ')
    walk (x,y+1);
}
int main()
{
    setlocale(LC_ALL,"Russian");
    int x, y;
    cout<<"Ведите координаты"<<endl;
    cin>>x>>y;
    walk(x,y);
    for(int i=0;i<c;i++)
        cout<<mass[i]<<' ';
    cout<<endl;
    system("pause");
        return 0;
}

