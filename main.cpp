//includes
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

//defines
#define WINDOW_WIDTH 512
#define WINDOW_EIGHT 512
#define SHIP_SPEED 10

using namespace std;

class StardustShip {
    private:
    GLfloat pos_x;
    GLfloat pos_y;
    GLfloat color_r;
    GLfloat color_g;
    GLfloat color_b;

    public:
    StardustShip();
    StardustShip(GLfloat pos_x, GLfloat pos_y, GLfloat color_r, GLfloat color_g, GLfloat color_b) {
        pos_x = pos_x;
        pos_y = pos_y;
        color_r = color_r;
        color_g = color_g;
        color_b = color_b;
    }

    void left() { pos_x -= SHIP_SPEED; }
    void right() { pos_x += SHIP_SPEED; }
    void up() { pos_y += SHIP_SPEED; }
    void down() { pos_y -= SHIP_SPEED; }
};

class FactionShip {
    private:
    GLfloat pos_x;
    GLfloat pos_y;
    GLfloat color_r;
    GLfloat color_g;
    GLfloat color_b;

    public:
    void down(){}
    void shot(){}
    void destroy(FactionShip fs) {
    }
};

class Shot {
    private:
    GLfloat pos_x;
    GLfloat pos_y;
    GLfloat color_r;
    GLfloat color_g;
    GLfloat color_b;

    public:
    void on(){
        
    }
};

void init() {
   StardustShip ssZ3r0 =  StardustShip::StardustShip(100, 100, 100, 100, 100);
}


//functions
void display(void);
void keyboard(unsigned char key, GLint x, GLint y);


int main(int argc, char* argv[]) {
    //init window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_EIGHT);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Stardust Invaders");
    glutMainLoop();
    //setup main loop
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    return 0;
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}