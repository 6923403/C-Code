#include "Commpany.h"
#include "CpManger.h"
#include "WorkerManger.h"

enum
{ exits, cpinfo, setcpinfo,

  };

void run(int choose)
{
    Commpany * Cp = nullptr;
    Cp = new CpManger;
    Commpany * Wr = nullptr;
    //Wr = new WorkerManger;
    switch (choose)
    {
        case exits:
            cout << " �����˳� " << endl;
            exit(-1);
            break;
        case cpinfo:
            Cp->getCpinfo();
            break;
        case setcpinfo:
            Cp->setCpinfo();
            break;

        default:
            break;
    }
}

int main(int argc, char **argv)
{
    while(true)
    {
        cout << " 0. �˳����� " << endl;
        cout << " 1. �鿴��˾��Ϣ " << endl;
        cout << " 2. ���ù�˾��Ϣ " << endl;

        int choose;
        cin >> choose;
        run(choose);
        cout << endl;
    }
    return 0;
}