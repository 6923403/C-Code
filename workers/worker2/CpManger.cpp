#include "CpManger.h"

CpManger::CpManger()
{}

CpManger::~CpManger() {

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


void CpManger::setCpinfo()
{
    std::ofstream cpout;
    cpout.open("N:\\codes\\Cplusplus\\ workers\\Commpanyinfo.txt", ios::trunc);
    if(cpout.is_open())
    {
        string tname, tadd, tem, ttel;
        cout << "��˾��: ";
        cin >> tname;
        cout << "��ַ: ";
        cin >> tadd;
        cout << "����: ";
        cin >> tem;
        cout << "�绰: ";
        cin >> ttel;
        cpout << "��˾��: " << tname << endl;
        cpout << "��ַ: " << tadd << endl;
        cpout << "����: " << tem << endl;
        cpout << "�绰: " << ttel << endl;

        cout << endl << "���óɹ� ." << endl;
    }
    else
    {
        cout << "Can't find file ." << endl;
    }
}

void CpManger::getCpinfo()
{
    std::ifstream cpopen;
    cpopen.open("N:\\codes\\Cplusplus\\ workers\\Commpanyinfo.txt", ios::in);
    if(cpopen.is_open())
    {
        string tmp;
        while(getline(cpopen, tmp))
        {
            cout << tmp << endl;
            tmp.clear();
        }
    }
    else
    {
        cout << "Can't find Commpanyinfo.txt ." << endl;
    }
}

