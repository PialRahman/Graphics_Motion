#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846


GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position > 1.0)
        position = -1.2f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 0.1f);
}



GLfloat i = 0.0f;

void initGL()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{
     glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0.0f,0.0f,0.0f);
    GLfloat x=0.4f; GLfloat y=0.1; GLfloat radius =.6f;
	int j;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(j = 0; j <= lineAmount;j++) {
			glVertex2f(
			    x + (radius * cos(j *  twicePi / lineAmount)),
			    y + (radius* sin(j * twicePi / lineAmount))
			);
		}

	glEnd();
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    //glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix
glTranslatef(.4f,.1f,0.0f);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
   // glTranslatef(0.f,0.0f,0.f);
   glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0, 0.0f);
    glVertex2f( 0.3, 0.0f);
    glVertex2f(0.4, 0.2f);
    glVertex2f(.4, 0.3f);
    glEnd();
    glPopMatrix();
    i+=0.5f;
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
     glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.3f, -0.4f);
glVertex2f(0.2f, -0.4f);
glVertex2f( 0.0f, -0.3f);
    glEnd();
    glPopMatrix();
    i+=0.5f;
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
   // glTranslatef(0.f,0.0f,0.f);
   glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0, 0.0f);
    glVertex2f( 0.0, 0.3f);
    glVertex2f(-0.2, 0.4f);
    glVertex2f(-0.3, 0.4f);
    glEnd();
    glPopMatrix();
    i+=0.5f;
    glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.f);
    glVertex2f(-0.2, -1.0f);
    glVertex2f(-0.1, -0.6f);
    glVertex2f( 0.1, -0.6f);
    glVertex2f(.2, -1.0f);
    glEnd();
        glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.f);
    glVertex2f(0.4, -0.47f);
    glVertex2f(-0.4, 0.47f);
     glVertex2f(0.4, 0.47f);
    glVertex2f(-0.4, -0.47f);
     glVertex2f(0.0, 0.6f);
    glVertex2f(0.0, -0.6f);
      glVertex2f(0.6,0.0f);
    glVertex2f(-0.6, 0.0f);
     glEnd();
    glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.f);
    glVertex2f(-0.3, -1.1f);
    glVertex2f(-0.15, -0.9f);
    glVertex2f( 0.15, -0.9f);
    glVertex2f(.3, -1.1f);
    glEnd();
glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
     glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.3, 0.0f);
    glVertex2f(-0.4, -0.2f);
glVertex2f(-0.4, -0.3f);
    glEnd();
    glPopMatrix();
    i+=0.5f;
    glFlush();
glFlush();
}
void display_fast()
{
     glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0.0f,0.0f,0.0f);
    GLfloat x=0.4f; GLfloat y=0.1; GLfloat radius =.6f;
	int k;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(k = 0; k <= lineAmount;k++) {
			glVertex2f(
			    x + (radius * cos(k *  twicePi / lineAmount)),
			    y + (radius* sin(k * twicePi / lineAmount))
			);
		}

	glEnd();
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    //glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix
glTranslatef(.4f,.1f,0.0f);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
   // glTranslatef(0.f,0.0f,0.f);
   glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0, 0.0f);
    glVertex2f( 0.3, 0.0f);
    glVertex2f(0.4, 0.2f);
    glVertex2f(.4, 0.3f);
    glEnd();
    glPopMatrix();
    i+=2.0f;
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
     glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.3f, -0.4f);
glVertex2f(0.2f, -0.4f);
glVertex2f( 0.0f, -0.3f);
    glEnd();
    glPopMatrix();
    i+=2.0f;
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
   // glTranslatef(0.f,0.0f,0.f);
   glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0, 0.0f);
    glVertex2f( 0.0, 0.3f);
    glVertex2f(-0.2, 0.4f);
    glVertex2f(-0.3, 0.4f);
    glEnd();
    glPopMatrix();
    i+=2.0f;

     glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.f);
    glVertex2f(-0.2, -1.0f);
    glVertex2f(-0.1, -0.6f);
    glVertex2f( 0.1, -0.6f);
    glVertex2f(.2, -1.0f);
    glEnd();
       glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.f);
    glVertex2f(0.4, -0.47f);
    glVertex2f(-0.4, 0.47f);
     glVertex2f(0.4, 0.47f);
    glVertex2f(-0.4, -0.47f);
     glVertex2f(0.0, 0.6f);
    glVertex2f(0.0, -0.6f);
      glVertex2f(0.6,0.0f);
    glVertex2f(-0.6, 0.0f);
     glEnd();
    glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.f);
    glVertex2f(-0.3, -1.1f);
    glVertex2f(-0.15, -0.9f);
    glVertex2f( 0.15, -0.9f);
    glVertex2f(.3, -1.1f);
    glEnd();
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
     glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.3, 0.0f);
    glVertex2f(-0.4, -0.2f);
glVertex2f(-0.4, -0.3f);
    glEnd();
    glPopMatrix();
    i+=2.0f;
    glFlush();
glFlush();
}
void display_off()
{
   glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0.0f,0.0f,0.0f);
    GLfloat x=0.4f; GLfloat y=0.1; GLfloat radius =.6;
	int m;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(m = 0; m <= lineAmount;m++) {
			glVertex2f(
			    x + (radius * cos(m *  twicePi / lineAmount)),
			    y + (radius* sin(m * twicePi / lineAmount))
			);
		}

	glEnd();
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    //glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix
glTranslatef(.4f,.1f,0.0f);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
   // glTranslatef(0.f,0.0f,0.f);
   glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0, 0.0f);
    glVertex2f( 0.3, 0.0f);
    glVertex2f(0.4, 0.2f);
    glVertex2f(.4, 0.3f);
    glEnd();
    glPopMatrix();
    i=0.0f;
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
     glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.3f, -0.4f);
glVertex2f(0.2f, -0.4f);
glVertex2f( 0.0f, -0.3f);
    glEnd();
    glPopMatrix();
    i=0.0f;
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
   // glTranslatef(0.f,0.0f,0.f);
   glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0, 0.0f);
    glVertex2f( 0.0, 0.3f);
    glVertex2f(-0.2, 0.4f);
    glVertex2f(-0.3, 0.4f);
    glEnd();
    glPopMatrix();
    i=0.0f;
     glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.f);
    glVertex2f(-0.2, -1.0f);
    glVertex2f(-0.1, -0.6f);
    glVertex2f( 0.1, -0.6f);
    glVertex2f(.2, -1.0f);
    glEnd();
       glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.f);
    glVertex2f(0.4, -0.47f);
    glVertex2f(-0.4, 0.47f);
     glVertex2f(0.4, 0.47f);
    glVertex2f(-0.4, -0.47f);
     glVertex2f(0.0, 0.6f);
    glVertex2f(0.0, -0.6f);
      glVertex2f(0.6,0.0f);
    glVertex2f(-0.6, 0.0f);
     glEnd();
    glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.f);
    glVertex2f(-0.3, -1.1f);
    glVertex2f(-0.15, -0.9f);
    glVertex2f( 0.15, -0.9f);
    glVertex2f(.3, -1.1f);
    glEnd();
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
     glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.3, 0.0f);
    glVertex2f(-0.4, -0.2f);
glVertex2f(-0.4, -0.3f);
    glEnd();
    glPopMatrix();
    i=0.0f;
    glFlush();
glFlush();
}
void display_slow()
{
   glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0.0f,0.0f,0.0f);
    GLfloat x=0.4f; GLfloat y=0.1; GLfloat radius =.6f;
	int n;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(n = 0; n <= lineAmount;n++) {
			glVertex2f(
			    x + (radius * cos(n *  twicePi / lineAmount)),
			    y + (radius* sin(n * twicePi / lineAmount))
			);
		}
	glEnd();
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    //glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix
glTranslatef(.4f,.1f,0.0f);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
   // glTranslatef(0.f,0.0f,0.f);
   glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0, 0.0f);
    glVertex2f( 0.3, 0.0f);
    glVertex2f(0.4, 0.2f);
    glVertex2f(.4, 0.3f);
    glEnd();
    glPopMatrix();
    i+=0.07f;
        glFlush();
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
     glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.3f, -0.4f);
glVertex2f(0.2f, -0.4f);
glVertex2f( 0.0f, -0.3f);
    glEnd();
    glPopMatrix();
    i+=0.07f;
        glFlush();
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
   // glTranslatef(0.f,0.0f,0.f);
   glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.0, 0.0f);
    glVertex2f( 0.0, 0.3f);
    glVertex2f(-0.2, 0.4f);
    glVertex2f(-0.3, 0.4f);
    glEnd();
    glPopMatrix();
    i+=0.07f;
     glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.f);
    glVertex2f(-0.2, -1.0f);
    glVertex2f(-0.1, -0.6f);
    glVertex2f( 0.1, -0.6f);
    glVertex2f(.2, -1.0f);
    glEnd();
       glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.f);
    glVertex2f(0.4, -0.47f);
    glVertex2f(-0.4, 0.47f);
     glVertex2f(0.4, 0.47f);
    glVertex2f(-0.4, -0.47f);
     glVertex2f(0.0, 0.6f);
    glVertex2f(0.0, -0.6f);
      glVertex2f(0.6,0.0f);
    glVertex2f(-0.6, 0.0f);
     glEnd();
    glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.f);
    glVertex2f(-0.3, -1.1f);
    glVertex2f(-0.15, -0.9f);
    glVertex2f( 0.15, -0.9f);
    glVertex2f(.3, -1.1f);
    glEnd();
      glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
glLineWidth(5.0);
     glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.3, 0.0f);
    glVertex2f(-0.4, -0.2f);
glVertex2f(-0.4, -0.3f);
    glEnd();
    glPopMatrix();
    i+=0.07f;
    glFlush();
glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'w':
     glutDisplayFunc(display);//
    break;
case 'a':
     glutDisplayFunc(display_fast);//
    break;
case 's':
     glutDisplayFunc(display_off);//
    break;
    case 'd':
     glutDisplayFunc(display_slow);//
    break;
glutPostRedisplay();
	}
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
//do something here
//
break;
case GLUT_KEY_DOWN:

 //
break;
case GLUT_KEY_LEFT:
glutDisplayFunc(display_fast);
break;
case GLUT_KEY_RIGHT:
glutDisplayFunc(display_slow);
//do something here
break;
}
glutPostRedisplay();
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{

			glutDisplayFunc(display_fast);


	}

		if (button == GLUT_RIGHT_BUTTON)
	{

			glutDisplayFunc(display_slow);


	}



	glutPostRedisplay();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//

    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
     glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(SpecialInput);
   glutMouseFunc(handleMouse);

    glutMainLoop();
    return 0;
    }



