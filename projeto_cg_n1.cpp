#include <iostream>
#include <cmath>
#include <GL/freeglut.h>
#ifdef APPLE_CC
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

// Vertices do triangulo origem
float x1_tri = 0.0, y1_tri = 0.0;
float x2_tri = -0.12, y2_tri = 0.12;
float x3_tri = 0.0, y3_tri = 0.25;

// Vertices do quadrilatero origem
float x1_quad = 0.0, y1_quad = 0.0;
float x2_quad = 0.0, y2_quad = 0.25;
float x3_quad = 0.25, y3_quad = 0.25;
float x4_quad = 0.25, y4_quad = 0.0;

void DrawScene() {

    glClear(GL_COLOR_BUFFER_BIT);

    // Desenha o triangulo origem
    glColor3f(1.0, 0.3, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1_tri, y1_tri);
    glVertex2f(x2_tri, y2_tri);
    glVertex2f(x3_tri, y3_tri);
    glEnd();

    // Desenha o quadrilatero origem
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(x1_quad, y1_quad);
    glVertex2f(x2_quad, y2_quad);
    glVertex2f(x3_quad, y3_quad);
    glVertex2f(x4_quad, y4_quad);
    glEnd();

    // Desenha os triangulos transformados
 
    // Triangulo 1
    glColor3f(0.4, 1.0, 1.0);
    glPushMatrix();
    glScalef(1.0, 1.0, 0.0);
    glRotatef(180.0, 0.0, 1.0, 0.0);
    glTranslatef(-0.25, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1_tri, y1_tri);
    glVertex2f(x2_tri, y2_tri);
    glVertex2f(x3_tri, y3_tri);
    glEnd();
    glPopMatrix();

    // Triangulo 2
    glColor3f(0.4, 1.0, 1.0);
    glPushMatrix();
    glScalef(0.5, 0.5, 0.0);
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glTranslatef(0.0, -0.37, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1_tri, y1_tri);
    glVertex2f(x2_tri, y2_tri);
    glVertex2f(x3_tri, y3_tri);
    glEnd();
    glPopMatrix();

    // Triangulo 3
    glColor3f(0.4, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(0.0, 0.25, 0.0);
    glScalef(0.5, 0.5, 0.0);
    glRotatef(-90.0, 0.0, 0.0, 1.0);
    glTranslatef(0.75, 0.12, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1_tri, y1_tri);
    glVertex2f(x2_tri, y2_tri);
    glVertex2f(x3_tri, y3_tri);
    glEnd();
    glPopMatrix();

    // Desenha os quadrilateros transformados

    // Quad 1
    glColor3f(0.4, 1.0, 1.0);
    glPushMatrix();
    glScalef(1.0, 3.0, 0.0);
    glTranslatef(-0.37, -0.08, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(x1_quad, y1_quad);
    glVertex2f(x2_quad, y2_quad);
    glVertex2f(x3_quad, y3_quad);
    glVertex2f(x4_quad, y4_quad);
    glEnd();
    glPopMatrix();

    // Quad 2
    glColor3f(0.4, 1.0, 1.0);
    glPushMatrix();
    glScalef(1.0, 3.0, 0.0);
    glTranslatef(0.37, -0.08, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(x1_quad, y1_quad);
    glVertex2f(x2_quad, y2_quad);
    glVertex2f(x3_quad, y3_quad);
    glVertex2f(x4_quad, y4_quad);
    glEnd();
    glPopMatrix();

    //Quad 3
    glColor3f(0.4, 1.0, 1.0);
    glPushMatrix();
    glScalef(0.25, 0.25, 0.0);
    glRotatef(45.0, 0.0, 0.0, 1.0);
    glTranslatef(1.05, 0.35, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(x1_quad, y1_quad);
    glVertex2f(x2_quad, y2_quad);
    glVertex2f(x3_quad, y3_quad);
    glVertex2f(x4_quad, y4_quad);
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}

void Inicio() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Imagem");
    glutInitWindowPosition(100, 100);
    glutDisplayFunc(DrawScene);
    Inicio();
    glutMainLoop();

    return 0;
}