#include <gl/glut.h>

void Garis(void) {
  glClear(GL_COLOR_BUFFER_BIT);
  glLineWidth(2.0f);

  glBegin(GL_LINE_LOOP);
  glColor3f(1.0f, 1.0f, 0.0f); // Kuning

  glVertex3f(-0.5f, 0.5f, 0.0f);  // Titik 1 - Kiri Atas
  glVertex3f(0.5f, 0.5f, 0.0f);   // Titik 2 - Kanan Atas
  glVertex3f(0.5f, -0.5f, 0.0f);  // Titik 3 - Kanan Bawah
  glVertex3f(-0.5f, -0.5f, 0.0f); // Titik 4 - Kiri Bawah
  glEnd();

  glFlush();
}

int main(int argc, char *argv[]) {
  glutInit(&argc, argv);
  glutInitWindowSize(640, 480);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
  glutCreateWindow("GL_LINE_LOOP - Persegi");
  glutDisplayFunc(Garis);
  glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
  glutMainLoop();
  return 0;
}
