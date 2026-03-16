#include <gl/glut.h>

void Gambar(void) {
  glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);

  glBegin(GL_TRIANGLE_FAN);

  glColor3f(1.0f, 1.0f, 1.0f);
  glVertex3f(0.0f, 0.0f, 0.0f);

  glColor3f(0.0f, 1.0f, 1.0f);
  glVertex3f(0.0f, 0.6f, 0.0f);

  glColor3f(1.0f, 0.0f, 1.0f);
  glVertex3f(0.4f, 0.0f, 0.0f);

  glColor3f(0.0f, 1.0f, 1.0f);
  glVertex3f(0.0f, -0.6f, 0.0f);

  glColor3f(1.0f, 0.0f, 1.0f);
  glVertex3f(-0.4f, 0.0f, 0.0f);

  glColor3f(0.0f, 1.0f, 1.0f);
  glVertex3f(0.0f, 0.6f, 0.0f);

  glEnd();

  glFlush();
}

int main(int argc, char *argv[]) {
  glutInit(&argc, argv);
  glutInitWindowSize(640, 480);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
  glutCreateWindow("GL_TRIANGLE_FAN - Diamond");
  glutDisplayFunc(Gambar);
  glutMainLoop();
  return 0;
}
