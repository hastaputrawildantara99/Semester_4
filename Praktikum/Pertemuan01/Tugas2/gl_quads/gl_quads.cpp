#include <gl/glut.h>

void Gambar(void)
{
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Background biru
    glClear(GL_COLOR_BUFFER_BIT);

    // GL_QUADS: setiap 4 titik membentuk 1 segiempat
    glBegin(GL_QUADS);

        // Segiempat 1 - Merah (kiri)
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.8f,  0.4f, 0.0f); // Kiri atas
        glVertex3f(-0.8f, -0.4f, 0.0f); // Kiri bawah
        glVertex3f(-0.1f, -0.4f, 0.0f); // Kanan bawah
        glVertex3f(-0.1f,  0.4f, 0.0f); // Kanan atas

        // Segiempat 2 - Hijau (tengah)
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.0f,  0.4f, 0.0f); // Kiri atas
        glVertex3f(-0.0f, -0.4f, 0.0f); // Kiri bawah
        glVertex3f( 0.3f, -0.4f, 0.0f); // Kanan bawah
        glVertex3f( 0.3f,  0.4f, 0.0f); // Kanan atas

        // Segiempat 3 - Kuning (kanan)
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f( 0.4f,  0.4f, 0.0f); // Kiri atas
        glVertex3f( 0.4f, -0.4f, 0.0f); // Kiri bawah
        glVertex3f( 0.8f, -0.4f, 0.0f); // Kanan bawah
        glVertex3f( 0.8f,  0.4f, 0.0f); // Kanan atas

    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_QUADS - Tiga Persegi");
    glutDisplayFunc(Gambar);
    glutMainLoop();
    return 0;
}

