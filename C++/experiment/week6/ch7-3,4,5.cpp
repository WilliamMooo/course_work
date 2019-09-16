#include <iostream>
#include <windows.h>
#include <cstring>
#include <iomanip>
using namespace std;

struct Student {
    char ID[13];
    char name[15];
    int score[3];
    float average;
};

void input(Student stud[], int &n) {
    Student newstu;
    char confirm;
    while (1) {
        cout << "������ѧ�ţ�����0ʱ�˳����� ";
        cin >> newstu.ID;
        if (strcasecmp(newstu.ID, "0") == 0) return;
        cout << "������������";
        cin >> newstu.name;
        cout << "�����������ģ���ѧ��Ӣ��3�ſγ̵ĳɼ���";
        cin >> newstu.score[0] >> newstu.score[1] >> newstu.score[2];
        newstu.average = (newstu.score[0]+newstu.score[1]+newstu.score[2])/3.0;
        cout << "�Ƿ�ȷ������Y/N����";
        cin >> confirm;
        if (confirm == 'Y' || confirm == 'y') {
            stud[n] = newstu;
            n++;
        }
        cout << endl;
    }
}

void studentData(Student stud[], int n) {
    cout << "-------------------------------------------------" << setiosflags(ios::left) << setprecision(4) << endl;
    cout << setw(13) << "ѧ��"<< setw(10) << "����" << setw(6) << "����" 
        << setw(6) <<"��ѧ" << setw(6) << "Ӣ��" << setw(6) << "ƽ����" << endl;
    cout << "-------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(13) << stud[i].ID ;
        cout << setw(10) << stud[i].name;
        cout << setw(6) << stud[i].score[0];
        cout << setw(6) << stud[i].score[1];
        cout << setw(6) << stud[i].score[2];
        cout << setw(6)  << stud[i].average << endl;
    }
    cout << "-------------------------------------------------" << endl;
    cout << "������ʾ���!";
    system("pause");
    return;
}

void averageGrade(Student stud[], int n) {
    float ave[3], sumAll = 0;
    cout << "��ƽ����" << endl;
    cout << "-------------------------------------------------" << setiosflags(ios::left) << setprecision(4) << endl;
    cout << setw(6) << "����" << setw(6) <<"��ѧ" << setw(6) << "Ӣ��" << setw(6) << "��ƽ����" << endl;
    cout << "-------------------------------------------------" << endl;
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < n; j++) sum += stud[j].score[0];
        ave[i] = sum/n;
        sumAll += sum;
    }
    for (int i = 0; i < 3; i++) cout << setw(6) << ave[i];
    cout << setw(6)  << sumAll/n << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "������ʾ���!";
    system("pause");
}

void findBest(Student stud[], int n) {
    float max = stud[0].average;
    int maxIndex = 0;
    for (int i = 0; i < n; i++) {
        if (stud[i].average > max) {
            max = stud[i].average;
            maxIndex = i;
        }
    }
    cout << "��߷�ƽ���ֵ�ѧ�� \n";
    cout << "-------------------------------------------------" << setiosflags(ios::left) << setprecision(4) << endl;
    cout << setw(13) << "ѧ��"<< setw(10) << "����" << setw(6) << "����" 
        << setw(6) <<"��ѧ" << setw(6) << "Ӣ��" << setw(6) << "ƽ����" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << setw(13) << stud[maxIndex].ID ;
    cout << setw(10) << stud[maxIndex].name;
    cout << setw(6) << stud[maxIndex].score[0];
    cout << setw(6) << stud[maxIndex].score[1];
    cout << setw(6) << stud[maxIndex].score[2];
    cout << setw(6)  << stud[maxIndex].average << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "������ʾ���!";
    system("pause");
}

int main() {
    Student stu[100];
    int n = 0;
    int opCode;
    while (1) {
        system("cls");
        cout << "ѧ����Ϣ����ϵͳ \n" << endl;
        cout << "��ѡ��Ҫ���еĲ�����\n";
        cout << "1. ����ѧ�����ݡ� \n";
        cout << "2. ���ѧ������ \n";
        cout << "3. ���3�ſγ���ƽ���ɼ� \n";
        cout << "4. �����߷�ƽ���ֵ�ѧ������ \n";
        cout << "5. �˳� \n" << endl;
        cin >> opCode;
        switch (opCode) {
        case 1:
            input(stu, n);
            break;
        case 2:
            studentData(stu, n);
            break;
        case 3:
            averageGrade(stu, n);
            break;
        case 4:
            findBest(stu, n);
            break;
        case 5:
            break;
        default:
            break;
        }
        if (opCode == 5) break;
    }
    cout << "�˳�ϵͳ�ɹ�!" << endl;
    system("pause");
    return 0;
}