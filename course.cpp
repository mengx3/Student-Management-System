#include "../course.h"


course::course(int id, const string &name, int score, int value, int tid) : id(id), name(name), score(score),
                                                                            value(value), tid(tid) {}

course::course() {}

int course::getId() const {
    return id;
}

void course::setId(int id) {
    course::id = id;
}

const string &course::getName() const {
    return name;
}

void course::setName(const string &name) {
    course::name = name;
}

int course::getScore() const {
    return score;
}

void course::setScore(int score) {
    course::score = score;
}

int course::getValue() const {
    return value;
}

void course::setValue(int value) {
    course::value = value;
}

int course::getTid() const {
    return tid;
}

void course::setTid(int tid) {
    course::tid = tid;
}
