#include "Commpany.h"
#include "CpManger.h"
using namespace std;

Commpany::Commpany()
{

}

Commpany::~Commpany()
{

}

void Commpany::showMenu()
{
        cout << " ****  ��ҵְ��ϵͳ ****" << endl;
        cout << " 1. ������Ϣ " << endl;
        cout << " 2. ��˾��Ϣ " << endl;
        cout << " **** 10. �˳����� ****" << endl;

        CenterControl();
}

void Commpany::getCpinfo()
{
    std::ifstream cpopen;
    cpopen.open("N:\\codes\\Cplusplus\\ workers\\Commpanyinfo.txt", ios::in);
    if(cpopen.is_open())
    {
        cpopen >> CpName >> CpAddress >> CpTel >> CpEmail;
        cout << endl;
        cout << "��˾����: " << CpName << endl;
        cout << "��˾��ַ: " << CpAddress << endl;
        cout << "��ϵ�绰: " << CpTel << endl;
        cout << "�����ʼ�: " << CpEmail << endl;
        cout << endl;
    }
    else
    {
        cout << "Can't find Commpanyinfo.txt ." << endl;
    }
}



enum Con
{
    other,
    Workerinfo,
    enumTwo,
    enumThree,
    Cpinfo,
    setCpinfo,
    Exit = 10,
};

void Commpany::CenterControl() //�ܿ�
{
    cout << "����������ѡ��: ";
    int Ctmp;
    cin >> Ctmp;
    switch(Ctmp)
    {
        case Con::Workerinfo: //������Ϣ
            break;
        case Con::Cpinfo: //��˾��Ϣ
            break;
        case Con::setCpinfo:
            break;
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