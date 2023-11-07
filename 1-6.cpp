#include <iostream>
#include <string>
#include <math.h>

// Базовый класс "Фигура"
class Shape {
public:
    double calculateSquare() const {
        return 0.0;
    }

    double calculatePerimeter() const {
        return 0.0;
    }
};

// Класс "Прямоугольник", наследующийся от "Фигура"
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateSquare() const {
        return width * height;
    }

    double calculatePerimeter() const {
        return 2 * (width + height);
    }

    double calculateDiagonal() const {
        return sqrt(width * width + height * height);
    }

    bool isSquare() const {
        return width == height;
    }
};

// Класс "Треугольник", наследующийся от "Фигура"
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateSquare() const {
        return 0.5 * base * height;
    }

    double calculateHeight() const {
        return height;
    }
};

// Класс "Круг", наследующийся от "Фигура"
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateSquare() const {
        return 3.14159265358979323846 * radius * radius;
    }

    double calculatePerimeter() const {
        return 2.0 * 3.14159265358979323846 * radius;
    }

    double calculateCircumference() const {
        return 2.0 * 3.14159265358979323846 * radius;
    }
};

// Класс "Цветная фигура", наследующийся от "Фигура"
class ColoredShape : public Shape {
private:
    std::string color;

public:
    ColoredShape(const std::string& c) : color(c) {}

    std::string getColor() const {
        return color;
    }

    void setColor(const std::string& c) {
        color = c;
    }
};

// Класс "Цветной прямоугольник", наследующийся от "Прямоугольника" и "Цветной фигуры"
class ColoredRectangle : public Rectangle, public ColoredShape {
public:
    ColoredRectangle(double w, double h, const std::string& c)
        : Rectangle(w, h), ColoredShape(c) {}

    double calculateSquare() const {
        return Rectangle::calculateSquare();  // Вызов метода calculateSquare() из базового класса "Прямоугольник"
    }
};

int main() {
    Rectangle rectangle(4.0, 4.0);
    std::cout << "Rectangle Square: " << rectangle.calculateSquare() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    ColoredRectangle coloredRectangle(3.0, 3.0, "Red");
    std::cout << "Colored Rectangle Square: " << coloredRectangle.calculateSquare() << std::endl;
    std::cout << "Colored Rectangle Color: " << coloredRectangle.getColor() << std::endl;

    return 0;
}
