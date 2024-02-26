#include "Course.h"


Course::Course(int id, const string& name, int score, int value) : id(id), name(name), score(score),
value(value) {}

Course::Course() {}

int Course::getId() const {
    return id;
}

void Course::setId(int id) {
    Course::id = id;
}

const string& Course::getName() const {
    return name;
}

void Course::setName(const string& name) {
    Course::name = name;
}

int Course::getScore() const {
    return score;
}

void Course::setScore(int score) {
    Course::score = score;
}

int Course::getValue() const {
    return value;
}

void Course::setValue(int value) {
    Course::value = value;
}

Course::~Course() {
    cout << this->name << "课程成绩信息已经销毁" << endl;
}

ostream& operator<<(ostream& os, const Course& course) {
    os << "id: " << course.id << " name: " << course.name << " score: " << course.score << " value: " << course.value;
    return os;
}


