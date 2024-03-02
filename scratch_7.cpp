/*
#include <iostream>
#include <string>
using namespace std;

class Tutor {
public:
    Tutor();
    void Print() const;

private:
    string name;
    string topic;
};

Tutor::Tutor() : name("Unnamed"), topic("NoTopic") {}

void Tutor::Print() const {
    cout << topic << ", by " << name << endl;
}

int main() {
    Tutor myTutor;

    myTutor.Print();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Tutor {
public:
    Tutor();
    Tutor(string tutorName);
    void Print() const;

private:
    string name;
    string topic;
};

Tutor::Tutor() : name("Unnamed"), topic("NeedsTopic") {}

Tutor::Tutor(string tutorName) : name(tutorName), topic("NeedsTopic") {}

void Tutor::Print() const {
    cout << name << " tutors " << topic << endl;
}

int main() {
    Tutor myTutor;
    Tutor yourTutor("Kai");

    myTutor.Print();
    yourTutor.Print();

    return 0;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tutor {
public:
    Tutor(string, int);
    void Print() const;

private:
    string name;
    vector<string> students;
};

Tutor::Tutor(string tutorName, int numStudents) : name(tutorName), students(numStudents) {}

void Tutor::Print() const {
    if (students.size() == 0){
        cout << name << " is alone" << endl;
    }
    else {
        cout << name << " teaches " << students.size() << " students" << endl;
    }
}

int main() {
    Tutor myTutor("May", 2);
    Tutor yourTutor("Jan", 0);

    yourTutor.Print();
    myTutor.Print();

    return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tutor {
public:
    Tutor(string, int);
    void Print() const;

private:
    string name;
    vector<string> students;
};

Tutor::Tutor(string tutorName, int numStudents) : name(tutorName), students(numStudents) {}

void Tutor::Print() const {
    if (students.size() == 0){
        cout << name << " is solo" << endl;
    }
    else {
        cout << name << " has " << students.size() << " students" << endl;
    }
}

int main() {
    Tutor myTutor("Kai", 0);
    Tutor yourTutor("Ian", 6);

    myTutor.Print();
    yourTutor.Print();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Students {
public:
    Students(int);
    int GetTotal() const { return  numStudents; }

private:
    int numStudents;
};

Students::Students(int num) : numStudents(num) {}

class Tutor {
public:
    Tutor(string);
    Tutor(string, int);
    void Print() const;

private:
    string name;
    Students students;
};

Tutor::Tutor(string tutorName) : name(tutorName), students(0) {}
Tutor::Tutor(string tutorName, int numStudents) : name(tutorName), students(numStudents) {}

void Tutor::Print() const {
    if (students.GetTotal() == 0){
        cout << name << " is solo" << endl;
    }
    else {
        cout << name << " tutors " << students.GetTotal() << " students" << endl;
    }
}

int main() {
    Tutor myTutor("Isa");
    Tutor yourTutor("Aya", 4);

    yourTutor.Print();
    myTutor.Print();

    return 0;
}*/

#include <iostream>
#include <string>
using namespace std;

class Students {
public:
    Students();
    Students(int);
    int GetTotal() const { return  numStudents; }

private:
    int numStudents;
};

Students::Students() : numStudents(0) {}
Students::Students(int num) : numStudents(num) {}

class Tutor {
public:
    Tutor(string);
    Tutor(string, int);
    void Print() const;

private:
    string name;
    Students students;
};

Tutor::Tutor(string tutorName) : name(tutorName) {}
Tutor::Tutor(string tutorName, int numStudents) : name(tutorName), students(numStudents) {}

void Tutor::Print() const {
    if (students.GetTotal() == 0){
        cout << name << " is solo" << endl;
    }
    else {
        cout << name << " teaches " << students.GetTotal() << " students" << endl;
    }
}

int main() {
    Tutor myTutor("May");
    Tutor yourTutor("Jay", 2);

    yourTutor.Print();
    myTutor.Print();

    return 0;
}