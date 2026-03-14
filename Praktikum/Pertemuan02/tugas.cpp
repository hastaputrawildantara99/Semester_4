#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

#define PI 3.1415926535898

// ==================== FUNGSI LINGKARAN ====================

void DrawCircle(float centerX, float centerY, float radius, int numPoints)
{
    glBegin(GL_LINE_LOOP);
        for (int i = 0; i < numPoints; i++)
        {
            float angle = 2.0f * PI * i / numPoints;
            float x = centerX + radius * cos(angle);
            float y = centerY + radius * sin(angle);
            glVertex2f(x, y);
        }
    glEnd();
}

void DrawFilledCircle(float centerX, float centerY, float radius, int numPoints)
{
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(centerX, centerY);
        for (int i = 0; i <= numPoints; i++)
        {
            float angle = 2.0f * PI * i / numPoints;
            float x = centerX + radius * cos(angle);
            float y = centerY + radius * sin(angle);
            glVertex2f(x, y);
        }
    glEnd();
}

// ==================== FUNGSI MOBIL ====================

void DrawRect(float x, float y, float width, float height)
{
    glPushMatrix();
        glTranslatef(x, y, 0.0f);
        glBegin(GL_QUADS);
            glVertex2f(-width/2, -height/2);
            glVertex2f(width/2, -height/2);
            glVertex2f(width/2, height/2);
            glVertex2f(-width/2, height/2);
        glEnd();
    glPopMatrix();
}

void DrawRectOutline(float x, float y, float width, float height)
{
    glPushMatrix();
        glTranslatef(x, y, 0.0f);
        glBegin(GL_LINE_LOOP);
            glVertex2f(-width/2, -height/2);
            glVertex2f(width/2, -height/2);
            glVertex2f(width/2, height/2);
            glVertex2f(-width/2, height/2);
        glEnd();
    glPopMatrix();
}

void DrawCar(void)
{
    // Badan mobil utama (warna merah)
    glPushMatrix();
        glColor3f(1.0f, 0.0f, 0.0f);
        DrawRect(0.0f, 0.0f, 0.60f, 0.25f);
    glPopMatrix();

    // Kabin mobil (bagian atas mobil - warna merah gelap)
    glPushMatrix();
        glColor3f(0.8f, 0.0f, 0.0f);
        DrawRect(-0.05f, 0.15f, 0.35f, 0.15f);
    glPopMatrix();

    // Jendela depan (kaca - warna biru muda)
    glPushMatrix();
        glColor3f(0.5f, 0.8f, 1.0f);
        DrawRect(-0.10f, 0.16f, 0.15f, 0.10f);
    glPopMatrix();

    // Jendela belakang (kaca - warna biru muda)
    glPushMatrix();
        glColor3f(0.5f, 0.8f, 1.0f);
        DrawRect(0.10f, 0.16f, 0.12f, 0.10f);
    glPopMatrix();

    // Bumper depan (warna hitam terang)
    glPushMatrix();
        glColor3f(0.2f, 0.2f, 0.2f);
        DrawRect(-0.35f, -0.02f, 0.08f, 0.10f);
    glPopMatrix();

    // Bumper belakang (warna hitam terang)
    glPushMatrix();
        glColor3f(0.2f, 0.2f, 0.2f);
        DrawRect(0.35f, -0.02f, 0.08f, 0.10f);
    glPopMatrix();

    // Lampu depan (warna kuning)
    glPushMatrix();
        glColor3f(1.0f, 1.0f, 0.0f);
        DrawFilledCircle(-0.28f, 0.08f, 0.03f, 20);
    glPopMatrix();

    // Lampu belakang (warna merah)
    glPushMatrix();
        glColor3f(1.0f, 0.0f, 0.0f);
        DrawFilledCircle(0.28f, 0.08f, 0.03f, 20);
    glPopMatrix();

    // Roda kiri (lingkaran hitam dengan outline)
    glPushMatrix();
        glColor3f(0.1f, 0.1f, 0.1f);
        DrawFilledCircle(-0.20f, -0.15f, 0.08f, 50);
        glColor3f(1.0f, 1.0f, 1.0f);
        DrawCircle(-0.20f, -0.15f, 0.08f, 50);
    glPopMatrix();

    // Velg roda kiri (roda dalam - warna perak)
    glPushMatrix();
        glColor3f(0.7f, 0.7f, 0.7f);
        DrawFilledCircle(-0.20f, -0.15f, 0.05f, 40);
    glPopMatrix();

    // Roda kanan (lingkaran hitam dengan outline)
    glPushMatrix();
        glColor3f(0.1f, 0.1f, 0.1f);
        DrawFilledCircle(0.20f, -0.15f, 0.08f, 50);
        glColor3f(1.0f, 1.0f, 1.0f);
        DrawCircle(0.20f, -0.15f, 0.08f, 50);
    glPopMatrix();

    // Velg roda kanan (roda dalam - warna perak)
    glPushMatrix();
        glColor3f(0.7f, 0.7f, 0.7f);
        DrawFilledCircle(0.20f, -0.15f, 0.05f, 40);
    glPopMatrix();

    // Garis tepi (outline) untuk badan mobil
    glPushMatrix();
        glColor3f(0.0f, 0.0f, 0.0f);
        glLineWidth(2.0f);
        DrawRectOutline(0.0f, 0.0f, 0.60f, 0.25f);
        glLineWidth(1.0f);
    glPopMatrix();

    // Antena (garis vertikal)
    glPushMatrix();
        glColor3f(0.0f, 0.0f, 0.0f);
        glLineWidth(2.0f);
        glBegin(GL_LINES);
            glVertex2f(-0.25f, 0.28f);
            glVertex2f(-0.25f, 0.38f);
        glEnd();
        glLineWidth(1.0f);
    glPopMatrix();

    // Pintu mobil (garis)
    glPushMatrix();
        glColor3f(0.0f, 0.0f, 0.0f);
        glLineWidth(1.5f);
        glBegin(GL_LINES);
            glVertex2f(0.05f, 0.0f);
            glVertex2f(0.05f, 0.10f);
        glEnd();
        glLineWidth(1.0f);
    glPopMatrix();
}

// ==================== RENDER SCENE ====================

void RenderScene(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // ========== BAGIAN ATAS: LINGKARAN ==========
    glPushMatrix();
        glTranslatef(0.0f, 0.30f, 0.0f);

        // Lingkaran 1 - Outline biru di tengah (besar)
        glPushMatrix();
            glColor3f(0.0f, 0.0f, 1.0f);
            glLineWidth(3.0f);
            DrawCircle(0.0f, 0.0f, 0.25f, 100);
            glLineWidth(1.0f);
        glPopMatrix();

        // Lingkaran 2 - Diisi merah (sedang, di atas kiri)
        glPushMatrix();
            glColor3f(1.0f, 0.0f, 0.0f);
            DrawFilledCircle(-0.25f, 0.20f, 0.12f, 80);
        glPopMatrix();

        // Lingkaran 3 - Outline hijau (kecil, di atas kanan)
        glPushMatrix();
            glColor3f(0.0f, 1.0f, 0.0f);
            glLineWidth(2.5f);
            DrawCircle(0.25f, 0.20f, 0.10f, 60);
            glLineWidth(1.0f);
        glPopMatrix();

        // Lingkaran 4 - Diisi kuning (kecil, di bawah kiri)
        glPushMatrix();
            glColor3f(1.0f, 1.0f, 0.0f);
            DrawFilledCircle(-0.25f, -0.20f, 0.08f, 50);
        glPopMatrix();

        // Lingkaran 5 - Diisi cyan (kecil, di bawah kanan)
        glPushMatrix();
            glColor3f(0.0f, 1.0f, 1.0f);
            DrawFilledCircle(0.25f, -0.20f, 0.07f, 40);
        glPopMatrix();

    glPopMatrix();

    // ========== BAGIAN BAWAH: MOBIL ==========
    glPushMatrix();
        glTranslatef(0.0f, -0.40f, 0.0f);

        // Mobil 1 di posisi kiri dengan skala
        glPushMatrix();
            glTranslatef(-0.35f, 0.0f, 0.0f);
            glScalef(0.75f, 0.75f, 1.0f);
            DrawCar();
        glPopMatrix();

        // Mobil 2 di posisi tengah dengan rotasi kecil
        glPushMatrix();
            glTranslatef(0.0f, 0.0f, 0.0f);
            glRotatef(5.0f, 0.0f, 0.0f, 1.0f);
            DrawCar();
        glPopMatrix();

        // Mobil 3 di posisi kanan dengan skala
        glPushMatrix();
            glTranslatef(0.35f, 0.0f, 0.0f);
            glScalef(0.75f, 0.75f, 1.0f);
            DrawCar();
        glPopMatrix();

    glPopMatrix();

    // Garis pemisah horizontal (antara lingkaran dan mobil)
    glPushMatrix();
        glColor3f(0.3f, 0.3f, 0.3f);
        glLineWidth(2.0f);
        glBegin(GL_LINES);
            glVertex2f(-1.0f, 0.0f);
            glVertex2f(1.0f, 0.0f);
        glEnd();
        glLineWidth(1.0f);
    glPopMatrix();

    // Garis referensi vertikal tengah
    glPushMatrix();
        glColor3f(0.5f, 0.5f, 0.5f);
        glLineWidth(0.5f);
        glBegin(GL_LINES);
            glVertex2f(0.0f, -1.0f);
            glVertex2f(0.0f, 1.0f);
        glEnd();
    glPopMatrix();

    glFlush();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(900, 700);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Lingkaran & Mobil 2D - Praktikum 3");
    glutDisplayFunc(RenderScene);
    glutReshapeFunc(reshape);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
