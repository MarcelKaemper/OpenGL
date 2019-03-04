#include <GL/glut.h>
#include <stdio.h>

void render(void);
void keyboard(unsigned char c, int x, int y);

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My new window");
	glutDisplayFunc(render);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	
	return 0;
}

void render(void) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glBegin(GL_POLYGON);

		glVertex3f( -0.5, -0.5, -0.5);       // P1
		glVertex3f( -0.5,  0.5, -0.5);       // P2
		glVertex3f(  0.5,  0.5, -0.5);       // P3
		glVertex3f(  0.5, -0.5, -0.5);       // P4

		glEnd();
		glutSwapBuffers();
}

void keyboard(unsigned char c, int x, int y){
		if(c == 27){
			exit(0);
		}
}
