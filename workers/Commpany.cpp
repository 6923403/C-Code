#include "Commpany.h"
#include <iostream>
using namespace std;

Commpany::Commpany()
{
    Ctmp = 10;
}

Commpany::~Commpany()
{

}

void Commpany::showMenu() //init
{
    cout << " ****  ��ҵְ��ϵͳ ****" << endl;
    cout << " **** 1. �����Ա�� ****" << endl;
    cout << " **** 2. ����Ա���б� ****" << endl;
    cout << " **** 3. Ա���������� ****" << endl;
    cout << " **** 4. ��˾��Ϣչʾ ****" << endl;
    cout << " **** 10. �˳����� ****" << endl;

    CenterControl();
}


enum Con
{
    Workerinfo,
    enumTwo,
    enumThree,
    Cpinfo,
    Exit = 10,
};

void Commpany::CenterControl() //�ܿ�
{
    cout << "����������ѡ��: ";
    cin >> Ctmp;
    switch(Ctmp)
    {
        case Con::Workerinfo:
            break;
        case Con::Cpinfo:
           // CpManger();
        case Con::Exit:
            ExitProgam();
        default:
            cout << "ѡ�������������" << endl;
            CenterControl();
            break;
    }

}


void Commpany::ExitProgam() //�˳�����
{
    cout << "�����˳� ." << endl;
    exit(-1);
}