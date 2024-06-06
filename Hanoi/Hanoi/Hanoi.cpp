#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

void PrintTower(vector<int> Tower)
{
    

    for (int i = 0; i < 5; i++)
    {
        int cos = 0;
        int spaces = (13 - Tower[i]) / 2;
        for (int j = 1; j < spaces; j++)
        {
            cout << " ";
        }
            do
            {
                if (Tower[i] != 0)
                {
                    cout << "#";
                    cos++;
                }
                else {
                    cout << "";
                    cos++;
                }
            } while (cos < Tower[i] + 2);

            for (int j = 1; j < spaces; j++)
            {
                cout << " ";
            }
            cout << endl;
        
    }
    cout << "-------------" << endl;
};

int main()
{
    int st;
    bool win = false;
    int takeFromTower;
    int setOnTower;
    int heighestOne;
    int heighestTwo;
    int heighestThree;
    vector<int> TowerOne = { 1,3,5,7,9 };
    vector<int> TowerTwo = { 0,0,0,0,0 };
    vector<int> TowerThree = { 0,0,0,0,0 };
    PrintTower(TowerOne);
    PrintTower(TowerTwo);
    PrintTower(TowerThree);
    do
    {
        int temp = 0;
        cout << "Prosze podac wieze z ktorej chcesz wziac krazek" << endl;
        cin >> takeFromTower;
        cout << "Prosze podac wieze na ktorej chcesz polozyc krazek" << endl;
        cin >> setOnTower;
        switch (takeFromTower) {
        case 1:
            for (int i = 0; i <= 4; i++)
            {
                if (TowerOne[i] != 0)
                {
                    temp = TowerOne[i];
                    st = i;
                    TowerOne[i] = 0;
                    break;
                }
            }
            break;
        case 2:
            for (int i = 0; i <= 4; i++)
            {
                if (TowerTwo[i] != 0)
                {
                    temp = TowerTwo[i];
                    st = i;
                    TowerTwo[i] = 0;
                    break;
                }
            }
            break;
        case 3:
            for (int i = 0; i <= 4; i++)
            {
                if (TowerThree[i] != 0)
                {
                    temp = TowerThree[i];
                    st = i;
                    TowerThree[i] = 0;
                    break;
                }
            }
            break;
        default:
            cout << "Nie ma takiej opcji" <<endl;
            break;
        }


        switch (setOnTower) {
        case 1:
            for (int i = 4; i >= 0; i--)
            {
                if (TowerOne[i] == 0)
                {
                    TowerOne[i] = temp;
                    heighestOne = temp;
                    break;
                }
                else if (heighestOne < temp)
                {
                    if (takeFromTower == 1)
                    {
                        TowerOne[st] = temp;
                    }
                    else if (takeFromTower == 2)
                    {
                        TowerTwo[st] = temp;
                    }
                    else if (takeFromTower == 3)
                    {
                        TowerThree[st] = temp;
                    }
                    break;
                }
            }
            break;
        case 2:
            for (int i = 4; i >= 0; i--)
            {
                if (TowerTwo[i] == 0)
                {
                    TowerTwo[i] = temp;
                    heighestTwo = temp;
                    break;
                }
                else if (heighestTwo < temp)
                {
                    if (takeFromTower == 1)
                    {
                        TowerOne[st] = temp;
                    }
                    else if (takeFromTower == 2)
                    {
                        TowerTwo[st] = temp;
                    }
                    else if (takeFromTower == 3)
                    {
                        TowerThree[st] = temp;
                    }
                    break;
                }
            }
            break;
        case 3:
            for (int i = 4; i >= 0; i--)
            {
                if (TowerThree[i] == 0)
                {
                    TowerThree[i] = temp;
                    heighestThree = temp;
                    break;
                }
                else if (heighestThree < temp)
                {
                    if (takeFromTower == 1)
                    {
                        TowerOne[st] = temp;
                    }
                    else if (takeFromTower == 2)
                    {
                        TowerTwo[st] = temp;
                    }
                    else if (takeFromTower == 3)
                    {
                        TowerThree[st] = temp;
                    }
                    break;
                }
            }
            break;
        default:
            cout << "Nie ma takiej opcji"<<endl;
            break;
        }

        if (TowerThree[0] == 1 && TowerThree[1] == 3 && TowerThree[2] == 5 && TowerThree[3] == 7 && TowerThree[4] == 9)
        {
            win = true;
        }
        else 
        {
            win = false;
        }

        PrintTower(TowerOne);
        PrintTower(TowerTwo);
        PrintTower(TowerThree);
    } while (!win);
    cout << "Wygrales";
    _getch();
}   