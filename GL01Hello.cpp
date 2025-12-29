//
// Created by clencyc on 12/28/25.
//
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(2.0f, 1.0f, 5.0f); // Red
        glVertex2f(-0.9f, -0.7f);    // x, y
        glVertex2f( 0.5f, -0.5f);
        glVertex2f( 0.5f,  0.5f);
        glVertex2f(-0.5f,  0.5f);
    glColor3f(0.2f, 0.2f, 0.2f);  // Dark Gray
    glVertex2f(-0.9f, -0.7f);
    glColor3f(1.0f, 1.0f, 1.0f);  // White
    glVertex2f(-0.5f, -0.7f);
    glColor3f(0.2f, 0.2f, 0.2f);  // Dark Gray
    glVertex2f(-0.5f, -0.3f);
    glColor3f(1.0f, 1.0f, 1.0f);  // White
    glVertex2f(-0.9f, -0.3f);

    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup test");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

