#include <iostream>
#include <fstream>
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

void init(Student stud[], int &n);
void input(Student stud[], int &n);
void studentData(Student stud[], int n);
void averageGrade(Student stud[], int n);
void findBest(Student stud[], int n);
int save(Student stud[], int n);

int main() {
    Student stu[100];
    int n = 0;
    int opCode;
    init(stu, n);
    while (1) {
        system("cls");
        cout << "学生信息管理系统 " << '\n';
        cout << "--------------------------------------" << endl;
        cout << "请选择要进行的操作：" << '\n';
        cout << "1. 输入学生数据。 " << '\n';
        cout << "2. 浏览学生数据 " << '\n';
        cout << "3. 查看3门课程总平均成绩 " << '\n';
        cout << "4. 查看最高分平均分的学生数据 " << '\n';
        cout << "5. 退出 " << '\n' << endl;
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
            opCode = save(stu, n);
            break;
        default:
            break;
        }
        if (opCode == 0) break;
    }
    cout << "退出系统成功!" << endl;
    system("pause");
    return 0;
}

void init(Student stud[], int &n) {
    ifstream infile;
    Student newstu;
    infile.open("data/data.txt", ios::in);
    if (!infile) {
        cout << "未找到数据文件data.txt！" << endl;
        Sleep(4000);
        n = 0;
        return;
    }
    while (!infile.eof()) {
        infile >> newstu.ID >> newstu.name >> newstu.score[0] >> newstu.score[1] >> newstu.score[2] >> newstu.average;
        if (infile) {
            stud[n] = newstu;
            n++;
        } else {
            break;
        }
    }
    infile.close();
}

void input(Student stud[], int &n) {
    Student newstu;
    char confirm;
    while (1) {
        cout << "请输入学号（输入0时退出）： ";
        cin >> newstu.ID;
        if (strcasecmp(newstu.ID, "0") == 0) return;
        cout << "请输入姓名：";
        cin >> newstu.name;
        cout << "依次输入语文，数学，英语3门课程的成绩：";
        cin >> newstu.score[0] >> newstu.score[1] >> newstu.score[2];
        newstu.average = (newstu.score[0]+newstu.score[1]+newstu.score[2])/3.0;
        cout << "是否确认无误（Y/N）？";
        cin >> confirm;
        if (confirm == 'Y' || confirm == 'y') {
            stud[n] = newstu;
            n++;
        }
        cout << endl;
    }
}

void studentData(Student stud[], int n) {
    cout << "-------------------------------------------------------" << setiosflags(ios::left) << setprecision(4) << endl;
    cout << setw(15) << "学号" << setw(10) << "姓名" << setw(8) << "语文" 
        << setw(8) <<"数学" << setw(8) << "英语" << setw(8) << "平均分" << endl;
    cout << "-------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(15) << stud[i].ID ;
        cout << setw(10) << stud[i].name;
        cout << setw(8) << stud[i].score[0];
        cout << setw(8) << stud[i].score[1];
        cout << setw(8) << stud[i].score[2];
        cout << setw(8)  << stud[i].average << endl;
    }
    cout << "-------------------------------------------------------" << endl;
    cout << "数据显示完毕!";
    system("pause");
    return;
}

void averageGrade(Student stud[], int n) {
    float ave[3], sumAll = 0;
    cout << "总平均分" << endl;
    cout << "-------------------------------------------------------" << setiosflags(ios::left) << setprecision(4) << endl;
    cout << setw(8) << "语文" << setw(8) <<"数学" << setw(8) << "英语" << setw(8) << "总分" << endl;
    cout << "-------------------------------------------------------" << endl;
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < n; j++) sum += stud[j].score[0];
        ave[i] = sum/n;
        sumAll += sum;
    }
    for (int i = 0; i < 3; i++) cout << setw(8) << ave[i];
    cout << setw(8)  << sumAll/n << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "数据显示完毕!";
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
    cout << "最高分平均分的学生 " << '\n';
    cout << "-------------------------------------------------------" << setiosflags(ios::left) << setprecision(4) << endl;
    cout << setw(15) << "学号"<< setw(10) << "姓名" << setw(8) << "语文" 
        << setw(8) <<"数学" << setw(8) << "英语" << setw(8) << "平均分" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << setw(15) << stud[maxIndex].ID ;
    cout << setw(10) << stud[maxIndex].name;
    cout << setw(8) << stud[maxIndex].score[0];
    cout << setw(8) << stud[maxIndex].score[1];
    cout << setw(8) << stud[maxIndex].score[2];
    cout << setw(8)  << stud[maxIndex].average << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "数据显示完毕!";
    system("pause");
}

int save(Student stud[], int n) {
    ofstream outFile;
    outFile.open("data/data.txt", ios::out);
    if (!outFile) {
        cout << "保存文件失败！" << endl;
        Sleep(2000);
        return -1;
    }
    for (int i = 0; i < n; i++) {
        outFile << stud[i].ID << " " << stud[i].name << " " << stud[i].score[0] << " " <<
            stud[i].score[1] << " " << stud[i].score[2] << " " << stud[i].average << endl;
    }
    outFile.close();
    return 0;
}