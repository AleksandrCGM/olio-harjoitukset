#include <iostream>
#include <memory>

// Vaihe 1: Car-luokka
class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void setBrand(const std::string &b) { brand = b; }
    void setModel(const std::string &m) { model = m; }
    void setYearModel(int y) { yearModel = y; }

    void printData() const {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Year: " << yearModel << "\n";
    }
};

// Vaihe 2: Rectangle-luokka
class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }

    double getArea() const { return width * height; }
    double getCircum() const { return 2 * (width + height); }
};

// Vaihe 3: Student-luokka
class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    void setName(const std::string &n) { name = n; }
    void setStudentNumber(int s) { studentNumber = s; }
    void setAverage(double a) { average = a; }

    std::string getName() const { return name; }
    int getStudentNumber() const { return studentNumber; }
    double getAverage() const { return average; }
};

int main() {
    // Vaihe 1: Car-luokan testaus
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);
    car.printData();

    std::cout << "\n";

    // Vaihe 2: Rectangle-luokan testaus
    Rectangle *rectangle = new Rectangle();
    rectangle->setWidth(5.5);
    rectangle->setHeight(3.2);
    std::cout << "Rectangle Area: " << rectangle->getArea() << "\n";
    std::cout << "Rectangle Circumference: " << rectangle->getCircum() << "\n";
    delete rectangle;

    std::cout << "\n";

    // Vaihe 3: Student-luokan testaus
    std::shared_ptr<Student> student = std::make_shared<Student>();
    student->setName("Matti Meikalainen");
    student->setStudentNumber(123456);
    student->setAverage(3.8);
    std::cout << "Student Name: " << student->getName() << "\n";
    std::cout << "Student Number: " << student->getStudentNumber() << "\n";
    std::cout << "Student Average: " << student->getAverage() << "\n";

    return 0;
}
