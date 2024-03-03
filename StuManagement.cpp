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
