#include <GL/glut.h>
#include <stdio.h>

void render(void);
void keyboard(unsigned char c, int x, int y);

float xPos = 0.0f;
float yPos = 0.0f;

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Movement");
	glutDisplayFunc(render);
	glutKeyboardFunc(keyboard);
	glutMainLoop();

	return 0;
}

void render(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glPointSize(6.0);
	glBegin(GL_POINTS);
	glVertex2f(xPos,yPos);
	glEnd();

	glutSwapBuffers();

}

void keyboard(unsigned char c, int x, int y){
	if(c == 27){
		exit(0);
	}
	else if(c == 119){
		yPos += 0.01;
	}
	else if(c == 115){
		yPos -= 0.01;
	}
	else if(c == 97){
		xPos -= 0.01;
	}
	else if(c == 100){
		xPos += 0.01;
	}
	glutPostRedisplay();
}

