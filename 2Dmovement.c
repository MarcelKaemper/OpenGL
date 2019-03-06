#include <GL/glut.h>

void render(void);
void keyboard(int c, int x, int y);

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Movement");
	glutDisplayFunc(render);
	glutSpecialFunc(keyboard);
	glutMainLoop();

	return 0;
}

void render(){

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glutSwapBuffers();

}

void keyboard(int c, int x, int y){

}

