#include "Member.h"

Member::Member() {
    id = 0;
    name = "";
}

Member::Member(int id, string name) {
    this->id = id;
    this->name = name;
}

int Member::getId() {
    return id;
}

string Member::getName() {
    return name;
}