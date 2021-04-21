//
// copyright 2018 Palestine Polytechnic Univeristy
//
// This software can be used and/or modified for academich use as long as 
// this commented part is listed
//
// Last modified by: Zein Salah, on 26.03.2021
//


#include "RenderWidget.h"
#include <glut.h>
#include <QPainter>

RenderWidget::RenderWidget(QWidget *parent) : QGLWidget(parent)
{

}


RenderWidget::~RenderWidget()
{

}


QSize RenderWidget::minimumSizeHint() const
{
    return QSize(100, 100);
}


QSize RenderWidget::sizeHint() const
{
    return QSize(600, 600);
}


void RenderWidget::initializeGL()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}


void RenderWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

//    glLineWidth(3);
//    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//   glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

  

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(50, 300);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(230, 300);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(50, 500);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(230, 500);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(230, 300);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(50, 500);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(80, 200);
    glVertex2f(80, 350);
    glVertex2f(250, 200);
    glEnd();





    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(300, 400);
    glColor3f(0, 0, 1);
    glVertex2f(510, 400);
    glColor3f(0, 1, 0);
    glVertex2f(400, 570);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex2f(400, 180);
    glVertex2f(340, 300);
    glVertex2f(450, 400);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex2f(500, 180);
    glVertex2f(550, 300);
    glVertex2f(450, 400);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex2f(500, 180);
    glVertex2f(400, 180);
    glVertex2f(450, 400);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0, 1,0);
    glVertex2f(490, 250);
    glVertex2f(410, 250);
    glColor3f(1, 0, 0);
    glVertex2f(450, 280);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 1, 0);
    glVertex2f(490, 250);
    glVertex2f(450, 380);
    glColor3f(1, 0, 0);
    glVertex2f(450, 280);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 1, 0);
    glVertex2f(450, 380);
    glVertex2f(410, 250);
    glColor3f(1, 0, 0);
    glVertex2f(450, 280);
    glEnd();





    
    //glBegin(GL_TRIANGLES);
    //  glColor3f(1.0, 0.0, 0.0);   // red
    //  glVertex2f(100, 100);
    //  glColor3f(0.0, 1.0, 0.0);   // green
    //  glVertex2f(400, 100);
	   // glColor3f(0.0, 0.0, 1.0);   // blue
    //  glVertex2f(250, 400);
    //glEnd();



  

    glFlush();
}


void RenderWidget::resizeGL(int width, int height)
{
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);

//    glViewport(0, 0, width, height);
}


