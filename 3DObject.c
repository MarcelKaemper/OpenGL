#include <GL/glut.h>
#include <stdio.h>

void render(void);
void keyboard(int c, int x, int y);

double rotateX = 0;
double rotateY = 0;

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My new window");
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(render);
	glutSpecialFunc(keyboard);
	glutMainLoop();
	
	return 0;
}

void render(void) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glLoadIdentity();

		glRotatef(rotateX, 1.0, 0.0, 0.0 ); 
  		glRotatef(rotateY, 0.0, 1.0, 0.0 ); 

		glBegin(GL_POLYGON);
		glColor3f( 1.0, 0.0, 0.0 );     
		glVertex3f(  0.5, -0.5, -0.5 );      // P1 is red
		glColor3f( 0.0, 1.0, 0.0 );     
		glVertex3f(  0.5,  0.5, -0.5 );      // P2 is green
		glColor3f( 0.0, 0.0, 1.0 );     
		glVertex3f( -0.5,  0.5, -0.5 );      // P3 is blue
		glColor3f( 1.0, 0.0, 1.0 );     
		glVertex3f( -0.5, -0.5, -0.5 );      // P4 is purple
		glEnd();
				  
		glBegin(GL_POLYGON);
		glColor3f(   1.0,  1.0, 1.0 );
		glVertex3f(  0.5, -0.5, 0.5 );
		glVertex3f(  0.5,  0.5, 0.5 );
		glVertex3f( -0.5,  0.5, 0.5 );
		glVertex3f( -0.5, -0.5, 0.5 );
		glEnd();

		// Purple side - RIGHT
		glBegin(GL_POLYGON);
		glColor3f(  1.0,  0.0,  1.0 );
		glVertex3f( 0.5, -0.5, -0.5 );
		glVertex3f( 0.5,  0.5, -0.5 );
		glVertex3f( 0.5,  0.5,  0.5 );
		glVertex3f( 0.5, -0.5,  0.5 );
		glEnd();

		// Green side - LEFT
		glBegin(GL_POLYGON);
		glColor3f(   0.0,  1.0,  0.0 );
		glVertex3f( -0.5, -0.5,  0.5 );
		glVertex3f( -0.5,  0.5,  0.5 );
		glVertex3f( -0.5,  0.5, -0.5 );
		glVertex3f( -0.5, -0.5, -0.5 );
		glEnd();

		// Blue side - TOP
		glBegin(GL_POLYGON);
		glColor3f(   0.0,  0.0,  1.0 );
		glVertex3f(  0.5,  0.5,  0.5 );
		glVertex3f(  0.5,  0.5, -0.5 );
		glVertex3f( -0.5,  0.5, -0.5 );
		glVertex3f( -0.5,  0.5,  0.5 );
		glEnd();

		// Red side - BOTTOM
		glBegin(GL_POLYGON);
		glColor3f(   1.0,  0.0,  0.0 );
		glVertex3f(  0.5, -0.5, -0.5 );
		glVertex3f(  0.5, -0.5,  0.5 );
		glVertex3f( -0.5, -0.5,  0.5 );
		glVertex3f( -0.5, -0.5, -0.5 );
		glEnd();

		glFlush();
		glutSwapBuffers();
}

void keyboard(int c, int x, int y){
		if(c == GLUT_KEY_UP){
			rotateX+=1;
		}else if(c == GLUT_KEY_DOWN){
			rotateX-=1;
		}else if(c == GLUT_KEY_LEFT){
			rotateY-=1;
		}else if(c == GLUT_KEY_RIGHT){
			rotateY+=1;
		}
		glutPostRedisplay();
}
