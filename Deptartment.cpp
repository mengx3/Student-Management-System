
#include "Deptartment.h"

Deptartment::Deptartment(const string& name, const string& director, int capcity, int num) : did(did),
name(name),
director(
    director),
    capcity(capcity),
    num(num) {}

Deptartment::Deptartment() {}

int Deptartment::getDid() const {
    return did;
}

void Deptartment::setDid(int did) {
    Deptartment::did = did;
}

const string& Deptartment::getName() const {
    return name;
}

void Deptartment::setName(const string& name) {
    Deptartment::name = name;
}

const string& Deptartment::getDirector() const {
    return director;
}

void Deptartment::setDirector(const string& director) {
    Deptartment::director = director;
}

int Deptartment::getCapcity() const {
    return capcity;
}

void Deptartment::setCapcity(int capcity) {
    Deptartment::capcity = capcity;
}

int Deptartment::getNum() const {
    return num;
}

void Deptartment::setNum(int num) {
    Deptartment::num = num;
}

bool Deptartment::operator==(const Deptartment& rhs) const {
    return did == rhs.did &&
        name == rhs.name &&
        director == rhs.director &&
        capcity == rhs.capcity &&
        num == rhs.num;
}

bool Deptartment::operator!=(const Deptartment& rhs) const {
    return !(rhs == *this);
}

ostream& operator<<(ostream& os, const Deptartment& deptartment) {
    os << "did: " << deptartment.did << " name: " << deptartment.name << " director: " << deptartment.director
        << " capcity: " << deptartment.capcity << " num: " << deptartment.num;
    return os;
}
