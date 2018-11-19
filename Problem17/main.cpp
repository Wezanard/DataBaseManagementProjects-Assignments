#include <stdio.h>
#include <iostream>
#include <cstdio>
using namespace std;
int diskChoice;
int towerChoice;
int win = 0;
int towers [4][3] = {1,0,0,2,0,0,3,0,0,9,9,9};
void showTower()
{
    for(int i=0; i<3; i++)
    {
        cout << " | " << " " << " | " << " " << " | " << " " << " | " << endl;
        cout << " | " << towers[i][0] << " | " << towers[i][1] << " | " << towers[i][2] << " | " << endl;
    }
    cout << "---------------" << endl;
    cout << " " << " T1" << " " << " T2" << " " << " T3" << endl;
}
int whichSlot(int tower)
{
    tower = tower - 1;
    int slot;
    if(towers[2][tower] == 0)
    {
        //cout << "Bottom Slot Open" << endl;
        slot = 2;
    }
    else if(towers[1][tower] == 0)
    {
        //cout << "Middle Slot Open" << endl;
        slot = 1;
    }
    else if(towers[0][tower] == 0)
    {
        //cout << "Top Slot Open" << endl;
        slot = 0;
    }
    else
    {
        cout << "Error" << endl;
    }
    return slot;
}
int findDisk(int disk, int tower)
{
    int x;
    int y;
    int flag = 0;
    //cout << "You chose to move disk " << disk << " to tower " << tower << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(towers[i][j] == disk)
            {
                flag = 1;
                x=i;
                y=j;
                break;
            }
        }
    }
    if(flag)
    {
        //cout << "That disk is at " << y << " " << x << endl;
    }
    else
    {
        cout << "Could not find disk" << endl;
    }
    int slot = whichSlot(tower);
    if(towers[x-1][y] != 0 || disk > towers[(slot + 1)][(tower - 1)] || (tower-  1)==y)
    {
        cout << "Illegal Move" << endl;
    }
    else
    {
        //cout << "Moving disk to " << tower << " " << (slot + 1) << endl; 
        towers[(slot)][(tower - 1)] = disk;
        towers[x][y] = 0;
    }
    if(towers[0][1]==1 && towers[1][1]==2 && towers[2][1]==3)
    {
        win=1;
    }
    if(towers[0][2]==1 && towers[1][2]==2 && towers[2][2]==3)
    {
        win=1;
    }
    
    
}
void askMove()
{
    //cout << "Make your move." << endl;
    cout << "Which Disk do you want to move?" << endl;
    cout << " " << endl;
    cin >> diskChoice;
    if(0 >= diskChoice >= 4)
    {
        cout << " " << endl;
        cout << "Invalid Input." << endl;
        cout << " " << endl;
        askMove();
    }
    cout << " " << endl;
    cout << "What tower to move Disk to?" << endl;
    cout << " " << endl;
    cin >> towerChoice;
    if(0 >= diskChoice >= 4)
    {
        cout << "Invalid Input." << endl;
        cout << " " << endl;
        askMove();
    }
    findDisk(diskChoice, towerChoice);
}
int main(int argc, char **argv)
{
    cout << "Welcome to the Towers of Hanoi. " << endl;
    cout << " " << endl;
    do
    {
        cout << " " << endl;
        showTower();
        cout << " " << endl;
        askMove();
    }
    while(win != 1);
    showTower();
    cout << "You win!" << endl;
}