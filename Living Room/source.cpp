#include <iostream>
#include <glut.h>
using namespace std;
static float megh_t = 0.0;

int win1, win2;
void Write(float x, float y, float z, float scale, char *s)
{
   int i, l = strlen(s);
   glPushMatrix();
   glTranslatef(x, y, z);
   glScalef(scale, scale, scale);
   for (i = 0; i < l; i++)
      glutStrokeCharacter(GLUT_STROKE_ROMAN, s[i]);
   glPopMatrix();
}

void frontsheet(void)
{
   glClearColor(0, 0, 0, 1);
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 1.0, 0.0);
   Write(-0.50, 0.9, 1, 0.0007, (char *)"Global Academy Of Technology");
   Write(-0.55, 0.8, 1, 0.0006, (char *)"    Department of CSE");
   glColor3f(1.0, 0.0, 0.0);
   Write(-0.45, 0.6, 0.0, 0.0007, (char *)" Living Room");
   glColor3f(1.0, 1.0, 0.5);
   Write(-0.4, -0.8, 0.0, 0.0006, (char *)"Press 'C' to continue");
   glColor3f(1, 1, 0.0);
   Write(-1.0, 0.1, 0.0, 0.0007, (char *)" Submitted BY:");
   glColor3f(1.0, 1.0, 1.0);

   Write(-1.0, -0.13, 0.0, 0.0006, (char *)" Sathyalakshmi S 1GA19CS194");
   glColor3f(1, 1, 0.0);

   glFlush();
}
void triangle()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.88, 0.88, 0.88);
   glPointSize(4.0);
   glBegin(GL_TRIANGLES);
   glVertex2f(0.0, 768.0);
   glVertex2f(0.0, 748.0);
   glVertex2f(70.0, 748.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.0, 768.0);
   glVertex2f(0.0, 748.0);
   glVertex2f(70.0, 748.0);
   glEnd();
   glFlush();
}
void roof()
{
   // roof
   glBegin(GL_POLYGON);
   glColor3f(0.96, 0.96, 0.93);
   glVertex2f(0.0, 768.0);
   glVertex2f(70.0, 748.0);
   glVertex2f(130.0, 748.0);
   glVertex2f(300.0, 718.0);
   glVertex2f(800.0, 718.0);
   glVertex2f(1024.0, 768.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.0, 768.0);
   glVertex2f(70.0, 748.0);
   glVertex2f(130.0, 748.0);
   glVertex2f(300.0, 718.0);
   glVertex2f(800.0, 718.0);
   glVertex2f(1024.0, 768.0);
   glEnd();
   glFlush();
}
void floor()
{
   // floor
   glBegin(GL_QUADS);
   glColor3f(1.1, 1.0, 0.6);
   glVertex2f(130.0, 0.0);
   glVertex2f(1024.0, 0.0);
   glVertex2f(800.0, 238.0);
   glVertex2f(300.0, 238.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(130.0, 0.0);
   glVertex2f(1024.0, 0.0);
   glVertex2f(800.0, 238.0);
   glVertex2f(300.0, 238.0);
   glEnd();
   glFlush();
}
void background_wall()
{
   // background wall
   glBegin(GL_POLYGON);
   glColor3f(0.2, 0.1, 0.0);
   glVertex2f(800.0, 718.0);
   glVertex2f(300.0, 718.0);
   glVertex2f(300.0, 538.0);
   glVertex2f(220.0, 491.0);
   glVertex2f(220.0, 360.0);
   glVertex2f(300.0, 360.0);
   glVertex2f(300.0, 238.0);
   glVertex2f(800.0, 238.0);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glColor3f(0.25, 0.25, 0.25);
   glVertex2f(700.0, 718.0);
   glVertex2f(500.0, 718.0);
   glVertex2f(500.0, 360.0);
   glVertex2f(700.0, 360.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(700.0, 718.0);
   glVertex2f(500.0, 718.0);
   glVertex2f(500.0, 360.0);
   glVertex2f(700.0, 360.0);
   glEnd();
   glFlush();
}
void right_side_wall()
{
   // right side wall
   glBegin(GL_QUADS);
   glColor3f(0.88, 0.88, 0.88);
   glVertex2f(1024.0, 768.0);
   glVertex2f(800.0, 718.0);
   glVertex2f(800.0, 238.0);
   glVertex2f(1024.0, 0.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(1024.0, 768.0);
   glVertex2f(800.0, 718.0);
   glVertex2f(800.0, 238.0);
   glVertex2f(1024.0, 0.0);
   glEnd();
   glFlush();
}
void left_side_wall()
{
   // left side wall
   glBegin(GL_QUADS);
   glColor3f(0.88, 0.88, 0.88);
   glVertex2f(1024.0, 768.0);
   glVertex2f(800.0, 718.0);
   glVertex2f(800.0, 238.0);
   glVertex2f(1024.0, 0.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(1024.0, 768.0);
   glVertex2f(800.0, 718.0);
   glVertex2f(800.0, 238.0);
   glVertex2f(1024.0, 0.0);
   glEnd();
   glFlush();
}
void window()
{
   // window
   glBegin(GL_QUADS);
   glColor3f(0.90, 0.97, 0.98);
   glVertex2f(900.0, 600.0);
   glVertex2f(900.0, 300.0);
   glVertex2f(970.0, 280.0);
   glVertex2f(970.0, 600.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(900.0, 600.0);
   glVertex2f(900.0, 300.0);
   glVertex2f(970.0, 280.0);
   glVertex2f(970.0, 600.0);
   glEnd();
   glFlush();
}
void cabinet_top()
{
   // cabinet side top
   glBegin(GL_QUADS);
   glColor3f(0.25, 0.25, 0.25);
   glVertex2f(0.0, 748.0);
   glVertex2f(0.0, 438.0);
   glVertex2f(130.0, 438.0);
   glVertex2f(130.0, 748.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.0, 748.0);
   glVertex2f(0.0, 438.0);
   glVertex2f(130.0, 438.0);
   glVertex2f(130.0, 748.0);
   glEnd();
   glFlush();
   // cabinet front top
   glBegin(GL_QUADS);
   glColor3f(0.25, 0.25, 0.25);
   glVertex2f(130.0, 748.0);
   glVertex2f(130.0, 438.0);
   glVertex2f(300.0, 538.0);
   glVertex2f(300.0, 718.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(130.0, 748.0);
   glVertex2f(130.0, 438.0);
   glVertex2f(300.0, 538.0);
   glVertex2f(300.0, 718.0);
   glEnd();
   glFlush();
}
void cabinet_top_design()
{
   // cabinet front door design
   glBegin(GL_QUADS);
   glColor3f(0.88, 0.93, 0.93);
   glVertex2f(130.0, 480.0);
   glVertex2f(130.0, 455.0);
   glVertex2f(135.0, 455.0);
   glVertex2f(135.0, 480.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(130.0, 480.0);
   glVertex2f(130.0, 455.0);
   glVertex2f(135.0, 455.0);
   glVertex2f(135.0, 480.0);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glColor3f(0.88, 0.93, 0.93);
   glVertex2f(135.0, 480.0);
   glVertex2f(135.0, 455.0);
   glVertex2f(300.0, 550.0);
   glVertex2f(300.0, 565.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(135.0, 480.0);
   glVertex2f(135.0, 455.0);
   glVertex2f(300.0, 550.0);
   glVertex2f(300.0, 565.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(135.0, 477.0);
   glVertex2f(300.0, 562.0);
   glEnd();
   glFlush();
   // cabinet front door
   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(200.0, 737.0);
   glVertex2f(200.0, 480.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(250.0, 728.0);
   glVertex2f(250.0, 508.0);
   glEnd();
   glFlush();
}
void cabinet_bottom()
{
   // cabinet side Bottom
   glBegin(GL_QUADS);
   glColor3f(0.25, 0.25, 0.25);
   glVertex2f(0.0, 200.0);
   glVertex2f(0.0, 0.0);
   glVertex2f(130.0, 0.0);
   glVertex2f(130.0, 200.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.0, 200.0);
   glVertex2f(0.0, 0.0);
   glVertex2f(130.0, 0.0);
   glVertex2f(130.0, 200.0);
   glEnd();
   glFlush();
   // cabinet front Bottom
   glBegin(GL_QUADS);
   glColor3f(0.25, 0.25, 0.25);
   glVertex2f(130.0, 200.0);
   glVertex2f(130.0, 0.0);
   glVertex2f(300.0, 238.0);
   glVertex2f(300.0, 360.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(130.0, 200.0);
   glVertex2f(130.0, 0.0);
   glVertex2f(300.0, 238.0);
   glVertex2f(300.0, 360.0);
   glEnd();
   glFlush();
}
void cabinet_bottom_design()
{
   // cabinet front Bottom Design
   glBegin(GL_QUADS);
   glColor3f(0.88, 0.93, 0.93);
   glVertex2f(130.0, 180.0);
   glVertex2f(130.0, 155.0);
   glVertex2f(135.0, 155.0);
   glVertex2f(135.0, 180.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(130.0, 180.0);
   glVertex2f(130.0, 155.0);
   glVertex2f(135.0, 155.0);
   glVertex2f(135.0, 180.0);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glColor3f(0.88, 0.93, 0.93);
   glVertex2f(130.0, 180.0);
   glVertex2f(135.0, 180.0);
   glVertex2f(305.0, 345.0);
   glVertex2f(300.0, 345.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(130.0, 180.0);
   glVertex2f(135.0, 180.0);
   glVertex2f(305.0, 345.0);
   glVertex2f(300.0, 345.0);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glColor3f(0.88, 0.93, 0.93);
   glVertex2f(135.0, 180.0);
   glVertex2f(135.0, 155.0);
   glVertex2f(305.0, 325.0);
   glVertex2f(305.0, 345.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(135.0, 180.0);
   glVertex2f(135.0, 155.0);
   glVertex2f(305.0, 325.0);
   glVertex2f(305.0, 345.0);
   glEnd();
   glFlush();
}
void sink()
{
   // sink
   glBegin(GL_QUADS);
   glColor3f(0.63, 0.63, 0.63);
   glVertex2f(0.0, 200.0);
   glVertex2f(130.0, 200.0);
   glVertex2f(300.0, 360.0);
   glVertex2f(220.0, 360.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.0, 200.0);
   glVertex2f(130.0, 200.0);
   glVertex2f(300.0, 360.0);
   glVertex2f(220.0, 360.0);
   glEnd();
   glFlush();
   // sink side wall
   glBegin(GL_POLYGON);
   glColor3f(0.63, 0.63, 0.63);
   glVertex2f(0.0, 200.0);
   glVertex2f(220.0, 360.0);
   glVertex2f(220.0, 491.0);
   glVertex2f(130.0, 438.0);
   glVertex2f(0.0, 438.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(0.0, 200.0);
   glVertex2f(220.0, 360.0);
   glVertex2f(220.0, 491.0);
   glVertex2f(130.0, 438.0);
   glVertex2f(0.0, 438.0);
   glEnd();
   glFlush();
}
void tv_cabinet()
{
   glBegin(GL_QUADS);
   glColor3f(0.25, 0.25, 0.25);
   glVertex2f(450.0, 360.0);
   glVertex2f(452.0, 358.0);
   glVertex2f(752.0, 358.0);
   glVertex2f(750.0, 360.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(450.0, 360.0);
   glVertex2f(452.0, 357.0);
   glVertex2f(752.0, 357.0);
   glVertex2f(750.0, 360.0);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glColor3f(0.25, 0.25, 0.25);
   glVertex2f(452.0, 357.0);
   glVertex2f(452.0, 220.0);
   glVertex2f(752.0, 220.0);
   glVertex2f(752.0, 357.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(452.0, 357.0);
   glVertex2f(452.0, 220.0);
   glVertex2f(752.0, 220.0);
   glVertex2f(752.0, 357.0);
   glEnd();
   glFlush();
}
void tv_cabinet_design()
{
   glBegin(GL_QUADS);
   glColor3f(0.88, 0.93, 0.93);
   glVertex2f(452.0, 345.0);
   glVertex2f(452.0, 335.0);
   glVertex2f(752.0, 335.0);
   glVertex2f(752.0, 345.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(452.0, 345.0);
   glVertex2f(452.0, 335.0);
   glVertex2f(752.0, 335.0);
   glVertex2f(752.0, 345.0);
   glEnd();
   glFlush();
}
void tv()
{
   // stand
   glBegin(GL_QUADS);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(550.0, 367.0);
   glVertex2f(550.0, 360.0);
   glVertex2f(650.0, 360.0);
   glVertex2f(650.0, 367.0);
   glEnd();
   glFlush();
   // frame
   glBegin(GL_QUADS);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(475.0, 500.0);
   glVertex2f(475.0, 367.0);
   glVertex2f(725.0, 367.0);
   glVertex2f(725.0, 500.0);
   glEnd();
   glFlush();
   // screen
   glBegin(GL_QUADS);
   glColor3f(0.70, 0.96, 0.96);
   glVertex2f(485.0, 490.0);
   glVertex2f(485.0, 377.0);
   glVertex2f(715.0, 377.0);
   glVertex2f(715.0, 490.0);
   glEnd();
   glFlush();
}
void floor_mat()
{
   glBegin(GL_QUADS);
   glColor3f(0.11, 0.13, 0.51);
   glVertex2f(472.0, 200.0);
   glVertex2f(482.0, 130.0);
   glVertex2f(800.0, 130.0);
   glVertex2f(772.0, 200.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.11, 0.13, 0.51);
   glVertex2f(472.0, 200.0);
   glVertex2f(482.0, 130.0);
   glVertex2f(800.0, 130.0);
   glVertex2f(772.0, 200.0);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glColor3f(0.57, 0.57, 0.59);
   glVertex2f(482.0, 190.0);
   glVertex2f(492.0, 140.0);
   glVertex2f(785.0, 140.0);
   glVertex2f(762.0, 190.0);
   glEnd();
   glFlush();
}
void sofa()
{
   // top
   glBegin(GL_QUADS);
   glColor3f(0.50, 0.50, 0.50);
   glVertex2f(950.0, 145.0);
   glVertex2f(940.0, 160.0);
   glVertex2f(700.0, 160.0);
   glVertex2f(720.0, 145.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(950.0, 145.0);
   glVertex2f(940.0, 160.0);
   glVertex2f(700.0, 160.0);
   glVertex2f(720.0, 145.0);
   glEnd();
   glFlush();
   // back
   glBegin(GL_QUADS);
   glColor3f(0.50, 0.50, 0.50);
   glVertex2f(950.0, 145.0);
   glVertex2f(720.0, 145.0);
   glVertex2f(720.0, 65.0);
   glVertex2f(950.0, 65.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(950.0, 145.0);
   glVertex2f(720.0, 145.0);
   glVertex2f(720.0, 65.0);
   glVertex2f(950.0, 65.0);
   glEnd();
   glFlush();
   // side
   glBegin(GL_QUADS);
   glColor3f(0.50, 0.50, 0.50);
   glVertex2f(700.0, 160.0);
   glVertex2f(700.0, 120.0);
   glVertex2f(720.0, 120.0);
   glVertex2f(720.0, 145.0);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glColor3f(0.50, 0.50, 0.50);
   glVertex2f(720.0, 120.0);
   glVertex2f(660.0, 140.0);
   glVertex2f(660.0, 90.0);
   glVertex2f(720.0, 65.0);
   glEnd();
   glFlush();

   glBegin(GL_LINE_LOOP);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(700.0, 160.0);
   glVertex2f(700.0, 120.0);
   glVertex2f(660.0, 140.0);
   glVertex2f(660.0, 90.0);
   glVertex2f(720.0, 65.0);
   glVertex2f(720.0, 145.0);
   glEnd();
   glFlush();
   // stand
   glBegin(GL_QUADS);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(720.0, 65.0);
   glVertex2f(720.0, 50.0);
   glVertex2f(730.0, 50.0);
   glVertex2f(730.0, 65.0);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(940.0, 65.0);
   glVertex2f(940.0, 50.0);
   glVertex2f(950.0, 50.0);
   glVertex2f(950.0, 65.0);
   glEnd();
   glFlush();

   glBegin(GL_QUADS);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(660.0, 90.0);
   glVertex2f(660.0, 75.0);
   glVertex2f(670.0, 77.0);
   glVertex2f(670.0, 87.0);
   glEnd();
   glFlush();
}
void draw()
{
   triangle();
   sink();
   roof();
   floor();
   background_wall();
   right_side_wall();
   window();
   cabinet_top();
   cabinet_top_design();
   cabinet_bottom();
   cabinet_bottom_design();
   tv_cabinet();
   tv_cabinet_design();
   tv();
   floor_mat();
   sofa();
   glutSwapBuffers();
}
void myDisplay(void)
{
   glViewport(-400, -300, 1600, 1200);
   glPushMatrix();
   draw();
   glPopMatrix();
}
void keyboard(unsigned char key, int x, int y)
{
   if (key == 'w')
   {
      glTranslatef(0, -50, 0);
      glutPostRedisplay();
   }
   else if (key == 's')
   {
      glTranslatef(0, 50, 0);
      glutPostRedisplay();
   }
   else if (key == 'd')
   {
      glTranslatef(-50, 0, 0);
      glutPostRedisplay();
   }
   else if (key == 'a')
   {
      glTranslatef(50, 0, 0);
      glutPostRedisplay();
   }
}
void myInit(void)
{
   glClearColor(1.0, 1.0, 1.0, 0.0);
   glColor3f(0.0f, 0.0f, 0.0f);
   glPointSize(4.0);
   glMatrixMode(GL_PROJECTION_MATRIX);
   glLoadIdentity();
   gluOrtho2D(0.0, 1024.0, 0.0, 768.0);
}
void update(int value)
{
   glutPostRedisplay();
   glutTimerFunc(50, update, 0);
}

void keyboards(unsigned char key, int x4, int y4)
{
   if (key == 'c' || key == 'C')
   {
      glutDestroyWindow(win1);
      glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
      win2 = glutCreateWindow("Living Room");
      glClearColor(0.0, 0.0, 0.0, 0.0);
      glFlush();
      glutDisplayFunc(myDisplay);
      gluOrtho2D(-1000, 1000, 0, 1000);
      myInit();
      glutKeyboardFunc(keyboard);
   }
}
int main(int argc, char **argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(800, 600);
   glutInitWindowPosition(200, 200);
   win1 = glutCreateWindow("Mini Project");
   glFlush();
   glutDisplayFunc(frontsheet);
   glutKeyboardFunc(keyboards);
   glutMainLoop();
   return 0;
}