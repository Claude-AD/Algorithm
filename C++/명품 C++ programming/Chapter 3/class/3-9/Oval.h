#ifndef OVAL_H
#define OVAL_H

class Oval {
    int width, height;

public:
    Oval() : width(1), height(1) { }
    Oval(int w, int h) : width(w), height(h) { }
    ~Oval();
    int getWidth() { return width; }
    int getHeight() { return height; }
    void set(int w, int h);
    void show();
};

#endif
