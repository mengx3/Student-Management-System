#include "StuManagement.h"

void StuManagement::run() {
    int op = menu();
    switch (op) {
    case StuManagement::ShowAll:
        showAllStu();
        break;
    case StuManagement::Add:
        AddStu();
        break;
    case StuManagement::Del:
        DelStu();
        break;
    case StuManagement::Update:
        UpdateStu();
        break;
    case StuManagement::SearchByName:
        CheckByName();
        break;
    default:
        break;

    }
}

int StuManagement::menu() {
    //Ã· æ”√ªß’‚ «≤Àµ•£¨∫Û–¯ÕÍ…∆
    cout << "menu" << endl;
    int op = 0;
    //ªÒ»°”√ªß ‰»Îµƒ÷∏¡Ó
    cin >> op;
    return op;
}

void StuManagement::showAllStu() {

}

int StuManagement::AddStu() {
    return 0;
}

int StuManagement::DelStu() {
    return 0;
}

int StuManagement::UpdateStu() {
    return 0;
}

vector<Student> StuManagement::CheckByName() {
    return vector<Student>();
}
