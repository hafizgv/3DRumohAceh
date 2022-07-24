#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>

using namespace std;

int x1=0, y1=-1, z1=0, sudut=w20;
int z=-21;

void changeSize(int w, int h) {

	// Prevent a divide by zero, when window is too short
	// (you cant make a window of zero width).
	if (h == 0)
		h = 1;

	float ratio =  w * 1.0 / h;

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

	// Reset Matrix
	glLoadIdentity();

	// Set the viewport to be the entire window
	glViewport(0, 0, w, h);

	// Set the correct perspective.
	gluPerspective(45.0f, ratio, 0.1f, 100.0f);

	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
}

void gambar(void) {

    static float alpha =0;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glLoadIdentity();

    //Lighting
    //glEnable(GL_LIGHTING);
    //glEnable(GL_COLOR_MATERIAL);
    //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);


    // Posisi camera
    /*gluLookAt(	5.0f, 2.0f, 7.0f,
			0.0f, 0.0f,  0.0f,
			0.0f, 1.0f,  0.0f);*/

    //Posisi gambar
    glTranslatef(2,-3,z);
    glRotatef (sudut, x1, y1, z1);
    glRotatef (alpha,0,1,0);
    alpha = +0.00;

    //warna background
    glClearColor(0.35,0.35,0.6,0.1);

    //Gambar disini
    //Bulan
    glColor3f(0.92,0.76,0.12);
    glPushMatrix();
        glTranslatef(8,8,0);
        glutSolidSphere(1.0,20,50);
    glPopMatrix();

    //Rumput nan Hijauu
    //atas
    glBegin(GL_QUADS);
    glColor3f(0.12,0.25,0);
    glVertex3f(6,0,6); // kanan bawah
    glVertex3f(-11,0,6); // kiri bawah
    glVertex3f(-11,0,-7); // kiri atas
    glVertex3f(6,0,-7); // kanan atas

    glEnd();
    //RUMAH SEDERHANA///////////////////////////////////////////////////////////////
    //Genteng
    //bawah
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.45);
    glVertex3f(-0.2,2,-2.2);
    glVertex3f(-0.2,2,2.2);
    glVertex3f(2.2,2.7,2.2);
    glVertex3f(2.2,2.7,-2.2);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.45);
    glVertex3f(-0.2,2.15,-2.2);
    glVertex3f(-0.2,2.15,2.2);
    glVertex3f(2.2,2.85,2.2);
    glVertex3f(2.2,2.85,-2.2);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.3);
    glVertex3f(2.2,2.7,2.2);
    glVertex3f(-0.2,2,2.2);
    glVertex3f(-0.2,2.15,2.2);
    glVertex3f(2.2,2.85,2.2);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.2);
    glVertex3f(2.2,2.7,-2.2);
    glVertex3f(-0.2,2,-2.2);
    glVertex3f(-0.2,2.15,-2.2);
    glVertex3f(2.2,2.85,-2.2);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.2);
    glVertex3f(-0.2,2,2.2);
    glVertex3f(-0.2,2,-2.2);
    glVertex3f(-0.2,2.15,-2.2);
    glVertex3f(-0.2,2.15,2.2);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.3);
    glVertex3f(2.2,2.7,-2.2);
    glVertex3f(2.2,2.7,2.2);
    glVertex3f(2.2,2.85,2.2);
    glVertex3f(2.2,2.85,-2.2);
    glEnd();


    //Genteng2
    //bawah
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.45);
    glVertex3f(4.2,2,-2.2);
    glVertex3f(4.2,2,2.2);
    glVertex3f(1.8,2.45,2.2);
    glVertex3f(1.8,2.45,-2.2);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.45);
    glVertex3f(4.2,2.15,-2.2);
    glVertex3f(4.2,2.15,2.2);
    glVertex3f(1.8,2.6,2.2);
    glVertex3f(1.8,2.6,-2.2);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.3);
    glVertex3f(4.2,2,-2.2);
    glVertex3f(4.2,2,2.2);
    glVertex3f(4.2,2.15,2.2);
    glVertex3f(4.2,2.15,-2.2);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.2);
    glVertex3f(1.8,2.45,-2.2);
    glVertex3f(1.8,2.45,2.2);
    glVertex3f(1.8,2.6,2.2);
    glVertex3f(1.8,2.6,-2.2);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.3);
    glVertex3f(4.2,2,2.2);
    glVertex3f(1.8,2.45,2.2);
    glVertex3f(1.8,2.6,2.2);
    glVertex3f(4.2,2.15,2.2);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.2);
    glVertex3f(4.2,2,-2.2);
    glVertex3f(1.8,2.45,-2.2);
    glVertex3f(1.8,2.6,-2.2);
    glVertex3f(4.2,2.15,-2.2);
    glEnd();


    //Segitiga Atap
    glBegin(GL_QUADS);

    //depan
    glColor3f(0.6,0.4,0.4);
    glVertex3f(2,2,2);
    glVertex3f(0,2,2);
    glVertex3f(0,2,2);
    glVertex3f(2,2.7,2);

    //belakang
    glColor3f(0.3,0.15,0.15);
    glVertex3f(2,2,-2);
    glVertex3f(0,2,-2);
    glVertex3f(0,2,-2);
    glVertex3f(2,2.7,-2);

    //kanan
    glColor3f(0.5,0.3,0.3);
    glVertex3f(2,2,-2);
    glVertex3f(2,2,2);
    glVertex3f(2,2.7,2);
    glVertex3f(2,2.7,-2);

    //kiri
    glColor3f(0.4,0.2,0.2);
    glVertex3f(0,2,2);
    glVertex3f(0,2,-2);
    glVertex3f(2,2.7,-2);
    glVertex3f(2,2.7,2);

    //bawah
    glColor3f(0.4,0.2,0.2);
    glVertex3f(2,2,2);
    glVertex3f(0,2,2);
    glVertex3f(0,2,-2);
    glVertex3f(2,2,-2);

    glEnd();

    //Segitiga Atap2
    glBegin(GL_QUADS);

    //depan
    glColor3f(0.6,0.4,0.4);
    glVertex3f(4,2,1.6);
    glVertex3f(2,2,1.6);
    glVertex3f(2,2.4,1.6);
    glVertex3f(2,2.4,1.6);

    //belakang
    glColor3f(0.3,0.15,0.15);
    glVertex3f(4,2,-2);
    glVertex3f(2,2,-2);
    glVertex3f(2,2.4,-2);
    glVertex3f(2,2.4,-2);

    //kanan
    glColor3f(0.6,0.4,0.4);
    glVertex3f(4,2,-2);
    glVertex3f(4,2,1.6);
    glVertex3f(2,2.4,1.6);
    glVertex3f(2,2.4,-2);

    //kiri
    glColor3f(0.4,0.2,0.2);
    glVertex3f(2,2,1.6);
    glVertex3f(2,2,-2);
    glVertex3f(2,2.4,-2);
    glVertex3f(2,2.4,1.6);

    //bawah
    glColor3f(0.4,0.2,0.2);
    glVertex3f(4,2,1.6);
    glVertex3f(2,2,1.6);
    glVertex3f(2,2,-2);
    glVertex3f(4,2,-2);

    glEnd();

    //Dinding Rumah
    glBegin(GL_QUADS);

    //depan
    glColor3f(0.6,0.4,0.4);
    glVertex3f(2,0,2); // kanan bawah
    glVertex3f(0,0,2); // kiri bawah
    glVertex3f(0,2,2); // kiri atas
    glVertex3f(2,2,2); // kanan atas

    //belakang
    glColor3f(0.3,0.15,0.15);
    glVertex3f(2,0,-2); // kanan bawah
    glVertex3f(0,0,-2); // kiri bawah
    glVertex3f(0,2,-2); // kiri atas
    glVertex3f(2,2,-2); // kanan atas

    //kanan
    glColor3f(0.5,0.3,0.3);
    glVertex3f(2,0,-2); // kanan bawah
    glVertex3f(2,0,2); // kiri bawah
    glVertex3f(2,2,2); // kiri atas
    glVertex3f(2,2,-2); // kanan atas

    //kiri
    glColor3f(0.4,0.2,0.2);
    glVertex3f(0,0,2); // kanan bawah
    glVertex3f(0,0,-2); // kiri bawah
    glVertex3f(0,2,-2); // kiri atas
    glVertex3f(0,2,2); // kanan atas

    //bawah
    glColor3f(0.4,0.2,0.2);
    glVertex3f(2,0,2); // kanan bawah
    glVertex3f(0,0,2); // kiri bawah
    glVertex3f(0,0,-2); // kiri atas
    glVertex3f(2,0,-2); // kanan atas

    //atas
    glColor3f(0.6,0.4,0.4);
    glVertex3f(0,2,2); // kanan bawah
    glVertex3f(2,2,2); // kiri bawah
    glVertex3f(2,2,-2); // kiri atas
    glVertex3f(0,2,-2); // kanan atas

    glEnd();

    //Dinding Rumah2
    glBegin(GL_QUADS);

    //depan
    glColor3f(0.6,0.4,0.4);
    glVertex3f(4,0,1.6); // kanan bawah
    glVertex3f(2,0,1.6); // kiri bawah
    glVertex3f(2,2,1.6); // kiri atas
    glVertex3f(4,2,1.6); // kanan atas

    //belakang
    glColor3f(0.3,0.15,0.15);
    glVertex3f(4,0,-2); // kanan bawah
    glVertex3f(2,0,-2); // kiri bawah
    glVertex3f(2,2,-2); // kiri atas
    glVertex3f(4,2,-2); // kanan atas

    //kanan
    glColor3f(0.6,0.4,0.4);
    glVertex3f(4,0,-2); // kanan bawah
    glVertex3f(4,0,1.6); // kiri bawah
    glVertex3f(4,2,1.6); // kiri atas
    glVertex3f(4,2,-2); // kanan atas

    //kiri
    glColor3f(0.4,0.2,0.2);
    glVertex3f(2,0,1.6); // kanan bawah
    glVertex3f(2,0,-2); // kiri bawah
    glVertex3f(2,2,-2); // kiri atas
    glVertex3f(2,2,1.6); // kanan atas

    //bawah
    glColor3f(0.4,0.2,0.2);
    glVertex3f(4,0,1.6); // kanan bawah
    glVertex3f(2,0,1.6); // kiri bawah
    glVertex3f(2,0,-2); // kiri atas
    glVertex3f(4,0,-2); // kanan atas

    //atas
    glColor3f(0.6,0.4,0.4);
    glVertex3f(2,2,1.6); // kanan bawah
    glVertex3f(4,2,1.6); // kiri bawah
    glVertex3f(4,2,-2); // kiri atas
    glVertex3f(2,2,-2); // kanan atas
    glEnd();

    //Signature
    //H
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(3.4,0.5,-2.01);
    glVertex3f(3.3,0.5,-2.01);
    glVertex3f(3.3,1.5,-2.01);
    glVertex3f(3.4,1.5,-2.01);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(3.3,0.9,-2.01);
    glVertex3f(3.2,0.9,-2.01);
    glVertex3f(3.2,1.1,-2.01);
    glVertex3f(3.3,1.1,-2.01);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(3.2,0.5,-2.01);
    glVertex3f(3.1,0.5,-2.01);
    glVertex3f(3.1,1.5,-2.01);
    glVertex3f(3.2,1.5,-2.01);
    glEnd();
    //A
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(2.95,0.5,-2.01);
    glVertex3f(3.0,0.5,-2.01);
    glVertex3f(2.9,1.5,-2.01);
    glVertex3f(2.85,1.5,-2.01);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(2.8,0.9,-2.01);
    glVertex3f(2.95,0.9,-2.01);
    glVertex3f(2.9,1.1,-2.01);
    glVertex3f(2.85,1.1,-2.01);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(2.75,0.5,-2.01);
    glVertex3f(2.8,0.5,-2.01);
    glVertex3f(2.9,1.5,-2.01);
    glVertex3f(2.85,1.5,-2.01);
    glEnd();
    //F
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(2.55,0.5,-2.01);
    glVertex3f(2.65,0.5,-2.01);
    glVertex3f(2.65,1.5,-2.01);
    glVertex3f(2.55,1.5,-2.01);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(2.35,1.4,-2.01);
    glVertex3f(2.55,1.4,-2.01);
    glVertex3f(2.55,1.5,-2.01);
    glVertex3f(2.35,1.5,-2.01);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(2.45,1.0,-2.01);
    glVertex3f(2.55,1.0,-2.01);
    glVertex3f(2.55,1.1,-2.01);
    glVertex3f(2.45,1.1,-2.01);
    glEnd();
    //I
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(2.15,0.5,-2.01);
    glVertex3f(2.25,0.5,-2.01);
    glVertex3f(2.25,1.5,-2.01);
    glVertex3f(2.15,1.5,-2.01);
    glEnd();
    //Z
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(1.75,1.4,-2.01);
    glVertex3f(2.05,1.4,-2.01);
    glVertex3f(2.05,1.5,-2.01);
    glVertex3f(1.75,1.5,-2.01);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(1.95,0.5,-2.01);
    glVertex3f(2.05,0.5,-2.01);
    glVertex3f(1.85,1.5,-2.01);
    glVertex3f(1.75,1.5,-2.01);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(1.75,0.6,-2.01);
    glVertex3f(2.05,0.6,-2.01);
    glVertex3f(2.05,0.5,-2.01);
    glVertex3f(1.75,0.5,-2.01);
    glEnd();

    //Genteng Depan
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.3);
    glVertex3f(1.6,1.5,3); // kanan bawah
    glVertex3f(4.2,1.5,3); // kiri bawah
    glVertex3f(4.2,1.65,3); // kiri atas
    glVertex3f(1.6,1.65,3); // kanan atas
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.2);
    glVertex3f(1.6,1.85,1.62); // kanan bawah
    glVertex3f(4.2,1.85,1.62); // kiri bawah
    glVertex3f(4.2,2,1.62); // kiri atas
    glVertex3f(1.6,2,1.62); // kanan atas
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.2);
    glVertex3f(1.6,1.5,3); // kanan bawah
    glVertex3f(1.6,1.85,1.62); // kiri bawah
    glVertex3f(1.6,2,1.62); // kiri atas
    glVertex3f(1.6,1.65,3); // kanan atas
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.3);
    glVertex3f(4.2,1.85,1.62); // kanan bawah
    glVertex3f(4.2,1.5,3); // kiri bawah
    glVertex3f(4.2,1.65,3); // kiri atas
    glVertex3f(4.2,2,1.62); // kanan atas
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.45);
    glVertex3f(4.2,1.65,3); // kanan bawah
    glVertex3f(1.6,1.65,3); // kiri bawah
    glVertex3f(1.6,2,1.62); // kiri atas
    glVertex3f(4.2,2,1.62); // kanan atas
    glEnd();
    //bawah
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.2);
    glVertex3f(4.2,1.5,3); // kanan bawah
    glVertex3f(1.6,1.5,3); // kiri bawah
    glVertex3f(1.6,1.85,1.62); // kiri atas
    glVertex3f(4.2,1.85,1.62); // kanan atas
    glEnd();

    //Tiangdepan
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);
    glVertex3f(2,0,2.8);
    glVertex3f(1.8,0,2.8);
    glVertex3f(1.8,1.6,2.8);
    glVertex3f(2,1.6,2.8);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);
    glVertex3f(2,0,2.6);
    glVertex3f(1.8,0,2.6);
    glVertex3f(1.8,1.6,2.6);
    glVertex3f(2,1.6,2.6);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.6,0.6,0.6);
    glVertex3f(1.8,0,2.8);
    glVertex3f(1.8,0,2.6);
    glVertex3f(1.8,1.6,2.6);
    glVertex3f(1.8,1.6,2.8);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.6,0.6,0.6);
    glVertex3f(2,0,2.8);
    glVertex3f(2,0,2.6);
    glVertex3f(2,1.6,2.6);
    glVertex3f(2,1.6,2.8);
    glEnd();

    //Tiangdepan2
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);
    glVertex3f(4,0,2.8);
    glVertex3f(3.8,0,2.8);
    glVertex3f(3.8,1.6,2.8);
    glVertex3f(4,1.6,2.8);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);
    glVertex3f(4,0,2.6);
    glVertex3f(3.8,0,2.6);
    glVertex3f(3.8,1.6,2.6);
    glVertex3f(4,1.6,2.6);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.6,0.6,0.6);
    glVertex3f(3.8,0,2.8);
    glVertex3f(3.8,0,2.6);
    glVertex3f(3.8,1.6,2.6);
    glVertex3f(3.8,1.6,2.8);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.6,0.6,0.6);
    glVertex3f(4,0,2.8);
    glVertex3f(4,0,2.6);
    glVertex3f(4,1.6,2.6);
    glVertex3f(4,1.6,2.8);
    glEnd();

    //Lantai Depan
    //atas
    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(4,0.05,2.8);
    glVertex3f(1.8,0.05,2.8);
    glVertex3f(1.8,0.05,1.6);
    glVertex3f(4,0.05,1.6);
    glEnd();
    //bawah
    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(4,0,2.8);
    glVertex3f(1.8,0,2.8);
    glVertex3f(1.8,0,1.6);
    glVertex3f(4,0,1.6);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(4,0,2.8);
    glVertex3f(1.8,0,2.8);
    glVertex3f(1.8,0.05,2.8);
    glVertex3f(4,0.05,2.8);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(1.8,0,2.8);
    glVertex3f(1.8,0,1.6);
    glVertex3f(1.8,0.05,1.6);
    glVertex3f(1.8,0.05,2.8);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(4,0,2.8);
    glVertex3f(4,0,1.6);
    glVertex3f(4,0.05,1.6);
    glVertex3f(4,0.05,2.8);
    glEnd();

    //pintu
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.67,0);
    glVertex3f(2.8,0,1.63); // kanan bawah
    glVertex3f(2.25,0,1.63); // kiri bawah
    glVertex3f(2.25,1.12,1.63); // kiri atas
    glVertex3f(2.8,1.12,1.63); // kanan atas
    glEnd();

    //Gagangpintu
    glBegin(GL_POLYGON);
    glColor3f(0,0.2,0.4);
    glVertex3f(2.37,0.45,1.64);
    glVertex3f(2.31,0.45,1.64);
    glVertex3f(2.31,0.5,1.64);
    glVertex3f(2.37,0.5,1.64);
    glEnd();

    //JendelaDepan
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.5);
    glVertex3f(1,0.75,2.05);
    glVertex3f(0.75,0.75,2.05);
    glVertex3f(0.75,1.25,2.05);
    glVertex3f(1,1.25,2.05);
    glEnd();
    //JendelaDepan2
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.1,0);
    glVertex3f(1.3,0.75,2.05);
    glVertex3f(1,0.75,2.05);
    glVertex3f(1,1.25,2.05);
    glVertex3f(1.3,1.25,2.05);
    glEnd();

    //JendelaKiri
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.5);
    glVertex3f(-0.05,0.75,1.25);
    glVertex3f(-0.05,0.75,1.75);
    glVertex3f(-0.05,1.25,1.75);
    glVertex3f(-0.05,1.25,1.25);
    glEnd();
    //JendelaKiri2
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.1,0);
    glVertex3f(-0.05,0.75,1.25);
    glVertex3f(-0.05,0.75,0.75);
    glVertex3f(-0.05,1.25,0.75);
    glVertex3f(-0.05,1.25,1.25);
    glEnd();

    //JendelaKiri2.1
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.5);
    glVertex3f(-0.05,0.75,-1.25);
    glVertex3f(-0.05,0.75,-0.75);
    glVertex3f(-0.05,1.25,-0.75);
    glVertex3f(-0.05,1.25,-1.25);
    glEnd();
    //JendelaKiri2.2
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.1,0);
    glVertex3f(-0.05,0.75,-1.25);
    glVertex3f(-0.05,0.75,-1.75);
    glVertex3f(-0.05,1.25,-1.75);
    glVertex3f(-0.05,1.25,-1.25);
    glEnd();

    //JendelaKanan
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.5);
    glVertex3f(4.05,0.75,-0.25);
    glVertex3f(4.05,0.75,0.25);
    glVertex3f(4.05,1.25,0.25);
    glVertex3f(4.05,1.25,-0.25);
    glEnd();
    //JendelaKanan2
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.1,0);
    glVertex3f(4.05,0.75,-0.25);
    glVertex3f(4.05,0.75,-0.75);
    glVertex3f(4.05,1.25,-0.75);
    glVertex3f(4.05,1.25,-0.25);
    glEnd();

    //RUMAH ACEH///////////////////////////////////////////////////////////////////////
    //Base Rumah Aceh1
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(-2,2,2); // kanan bawah
    glVertex3f(-4,2,2); // kiri bawah
    glVertex3f(-4,2,-4); // kiri atas
    glVertex3f(-2,2,-4); // kanan atas
    glEnd();
    //Batas1
    glBegin(GL_QUADS);
    glColor3f(0.2,0.1,0.0);
    glVertex3f(-4,2,-4); // kanan bawah
    glVertex3f(-4,2,2); // kiri bawah
    glVertex3f(-4,2.3,2); // kiri atas
    glVertex3f(-4,2.3,-4); // kanan atas
    glEnd();
    //Base Rumah Aceh2
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(-4,2.3,2); // kanan bawah
    glVertex3f(-6,2.3,2); // kiri bawah
    glVertex3f(-6,2.3,-4); // kiri atas
    glVertex3f(-4,2.3,-4); // kanan atas
    glEnd();
    //Batas2
    glBegin(GL_QUADS);
    glColor3f(0.2,0.1,0.0);
    glVertex3f(-6,2,-4); // kanan bawah
    glVertex3f(-6,2,2); // kiri bawah
    glVertex3f(-6,2.3,2); // kiri atas
    glVertex3f(-6,2.3,-4); // kanan atas
    glEnd();
    //Base Rumah Aceh3
    glBegin(GL_QUADS);
    glColor3f(0.5,0,1);
    glVertex3f(-6,2,2); // kanan bawah
    glVertex3f(-8,2,2); // kiri bawah
    glVertex3f(-8,2,-4); // kiri atas
    glVertex3f(-6,2,-4); // kanan atas
    glEnd();

    //Kaki Rumah Aceh
    //Kaki Rumah Aceh1 Depan1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-2,0,2); // kanan bawah
    glVertex3f(-2.2,0,2); // kiri bawah
    glVertex3f(-2.2,2,2); // kiri atas
    glVertex3f(-2,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh1 Kiri1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-2.2,0,2); // kanan bawah
    glVertex3f(-2.2,0,1.8); // kiri bawah
    glVertex3f(-2.2,2,1.8); // kiri atas
    glVertex3f(-2.2,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh1 Kanan1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-2,0,2); // kanan bawah
    glVertex3f(-2,0,1.8); // kiri bawah
    glVertex3f(-2,2,1.8); // kiri atas
    glVertex3f(-2,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh1 Belakang1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-2,0,1.8); // kanan bawah
    glVertex3f(-2.2,0,1.8); // kiri bawah
    glVertex3f(-2.2,2,1.8); // kiri atas
    glVertex3f(-2,2,1.8); // kanan atas
    glEnd();

    //Kaki Rumah Aceh1 Depan2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-2,0,-0.9); // kanan bawah
    glVertex3f(-2.2,0,-0.9); // kiri bawah
    glVertex3f(-2.2,2,-0.9); // kiri atas
    glVertex3f(-2,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh1 Kiri2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-2.2,0,-1.1); // kanan bawah
    glVertex3f(-2.2,0,-0.9); // kiri bawah
    glVertex3f(-2.2,2,-0.9); // kiri atas
    glVertex3f(-2.2,2,-1.1); // kanan atas
    glEnd();
    //Kaki Rumah Aceh1 Kanan2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-2,0,-1.1); // kanan bawah
    glVertex3f(-2,0,-0.9); // kiri bawah
    glVertex3f(-2,2,-0.9); // kiri atas
    glVertex3f(-2,2,-1.1); // kanan atas
    glEnd();
    //Kaki Rumah Aceh1 Belakang2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-2,0,-1.1); // kanan bawah
    glVertex3f(-2.2,0,-1.1); // kiri bawah
    glVertex3f(-2.2,2,-1.1); // kiri atas
    glVertex3f(-2,2,-1.1); // kanan atas
    glEnd();

    //Kaki Rumah Aceh1 Depan3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-2,0,-3.8); // kanan bawah
    glVertex3f(-2.2,0,-3.8); // kiri bawah
    glVertex3f(-2.2,2,-3.8); // kiri atas
    glVertex3f(-2,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh1 Kiri3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-2.2,0,-3.8); // kanan bawah
    glVertex3f(-2.2,0,-4); // kiri bawah
    glVertex3f(-2.2,2,-4); // kiri atas
    glVertex3f(-2.2,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh1 Kanan3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-2,0,-4); // kanan bawah
    glVertex3f(-2,0,-3.8); // kiri bawah
    glVertex3f(-2,2,-3.8); // kiri atas
    glVertex3f(-2,2,-4); // kanan atas
    glEnd();
    //Kaki Rumah Aceh1 Belakang3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-2,0,-4); // kanan bawah
    glVertex3f(-2.2,0,-4); // kiri bawah
    glVertex3f(-2.2,2,-4); // kiri atas
    glVertex3f(-2,2,-4); // kanan atas
    glEnd();

    //Kaki Rumah Aceh2.1 Depan1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-4,0,2); // kanan bawah
    glVertex3f(-3.8,0,2); // kiri bawah
    glVertex3f(-3.8,2,2); // kiri atas
    glVertex3f(-4,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.1 Kiri1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-3.8,0,2); // kanan bawah
    glVertex3f(-3.8,0,1.8); // kiri bawah
    glVertex3f(-3.8,2,1.8); // kiri atas
    glVertex3f(-3.8,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.1 Kanan1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-4,0,2); // kanan bawah
    glVertex3f(-4,0,1.8); // kiri bawah
    glVertex3f(-4,2,1.8); // kiri atas
    glVertex3f(-4,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.1 Belakang1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-4,0,1.8); // kanan bawah
    glVertex3f(-3.8,0,1.8); // kiri bawah
    glVertex3f(-3.8,2,1.8); // kiri atas
    glVertex3f(-4,2,1.8); // kanan atas
    glEnd();

    //Kaki Rumah Aceh2.1 Depan2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-4,0,-0.9); // kanan bawah
    glVertex3f(-3.8,0,-0.9); // kiri bawah
    glVertex3f(-3.8,2,-0.9); // kiri atas
    glVertex3f(-4,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.1 Kiri2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-3.8,0,-0.9); // kanan bawah
    glVertex3f(-3.8,0,-1.1); // kiri bawah
    glVertex3f(-3.8,2,-1.1); // kiri atas
    glVertex3f(-3.8,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.1 Kanan2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-4,0,-0.9); // kanan bawah
    glVertex3f(-4,0,-1.1); // kiri bawah
    glVertex3f(-4,2,-1.1); // kiri atas
    glVertex3f(-4,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.1 Belakang2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-4,0,-1.1); // kanan bawah
    glVertex3f(-3.8,0,-1.1); // kiri bawah
    glVertex3f(-3.8,2,-1.1); // kiri atas
    glVertex3f(-4,2,-1.1); // kanan atas
    glEnd();

    //Kaki Rumah Aceh2.1 Depan3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-4,0,-3.8); // kanan bawah
    glVertex3f(-3.8,0,-3.8); // kiri bawah
    glVertex3f(-3.8,2,-3.8); // kiri atas
    glVertex3f(-4,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.1 Kiri3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-3.8,0,-3.8); // kanan bawah
    glVertex3f(-3.8,0,-4); // kiri bawah
    glVertex3f(-3.8,2,-4); // kiri atas
    glVertex3f(-3.8,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.1 Kanan3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-4,0,-3.8); // kanan bawah
    glVertex3f(-4,0,-4); // kiri bawah
    glVertex3f(-4,2,-4); // kiri atas
    glVertex3f(-4,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.1 Belakang3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-4,0,-4); // kanan bawah
    glVertex3f(-3.8,0,-4); // kiri bawah
    glVertex3f(-3.8,2,-4); // kiri atas
    glVertex3f(-4,2,-4); // kanan atas
    glEnd();

    //Kaki Rumah Aceh2.2 Depan1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-6,0,2); // kanan bawah
    glVertex3f(-6.2,0,2); // kiri bawah
    glVertex3f(-6.2,2,2); // kiri atas
    glVertex3f(-6,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.2 Kiri1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-6.2,0,2); // kanan bawah
    glVertex3f(-6.2,0,1.8); // kiri bawah
    glVertex3f(-6.2,2,1.8); // kiri atas
    glVertex3f(-6.2,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.2 Kanan1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-6,0,2); // kanan bawah
    glVertex3f(-6,0,1.8); // kiri bawah
    glVertex3f(-6,2,1.8); // kiri atas
    glVertex3f(-6,2,2); // kanan atas
    glEnd();

    //Kaki Rumah Aceh2.2 Belakang1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-6,0,1.8); // kanan bawah
    glVertex3f(-6.2,0,1.8); // kiri bawah
    glVertex3f(-6.2,2,1.8); // kiri atas
    glVertex3f(-6,2,1.8); // kanan atas
    glEnd();

    //Kaki Rumah Aceh2.2 Depan2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-6,0,-0.9); // kanan bawah
    glVertex3f(-6.2,0,-0.9); // kiri bawah
    glVertex3f(-6.2,2,-0.9); // kiri atas
    glVertex3f(-6,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.2 Kiri2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-6.2,0,-0.9); // kanan bawah
    glVertex3f(-6.2,0,-1.1); // kiri bawah
    glVertex3f(-6.2,2,-1.1); // kiri atas
    glVertex3f(-6.2,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.2 Kanan2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-6,0,-0.9); // kanan bawah
    glVertex3f(-6,0,-1.1); // kiri bawah
    glVertex3f(-6,2,-1.1); // kiri atas
    glVertex3f(-6,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.2 Belakang2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-6,0,-1.1); // kanan bawah
    glVertex3f(-6.2,0,-1.1); // kiri bawah
    glVertex3f(-6.2,2,-1.1); // kiri atas
    glVertex3f(-6,2,-1.1); // kanan atas
    glEnd();

    //Kaki Rumah Aceh2.2 Depan3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-6,0,-3.8); // kanan bawah
    glVertex3f(-6.2,0,-3.8); // kiri bawah
    glVertex3f(-6.2,2,-3.8); // kiri atas
    glVertex3f(-6,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.2 Kiri3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-6.2,0,-3.8); // kanan bawah
    glVertex3f(-6.2,0,-4); // kiri bawah
    glVertex3f(-6.2,2,-4); // kiri atas
    glVertex3f(-6.2,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.2 Kanan3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-6,0,-3.8); // kanan bawah
    glVertex3f(-6,0,-4); // kiri bawah
    glVertex3f(-6,2,-4); // kiri atas
    glVertex3f(-6,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.2 Belakang3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-6,0,-4); // kanan bawah
    glVertex3f(-6.2,0,-4); // kiri bawah
    glVertex3f(-6.2,2,-4); // kiri atas
    glVertex3f(-6,2,-4); // kanan atas
    glEnd();

    //Kaki Rumah Aceh3 Depan1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-7.8,0,2); // kanan bawah
    glVertex3f(-8,0,2); // kiri bawah
    glVertex3f(-8,2,2); // kiri atas
    glVertex3f(-7.8,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh3 Kiri1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-8,0,2); // kanan bawah
    glVertex3f(-8,0,1.8); // kiri bawah
    glVertex3f(-8,2,1.8); // kiri atas
    glVertex3f(-8,2,2); // kanan atas
    glEnd();
    //Kaki Rumah Aceh3 Kanan1
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-7.8,0,2); // kanan bawah
    glVertex3f(-7.8,0,1.8); // kiri bawah
    glVertex3f(-7.8,2,1.8); // kiri atas
    glVertex3f(-7.8,2,2); // kanan atas
    glEnd();

    //Kaki Rumah Aceh3 Belakang1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-7.8,0,1.8); // kanan bawah
    glVertex3f(-8,0,1.8); // kiri bawah
    glVertex3f(-8,2,1.8); // kiri atas
    glVertex3f(-7.8,2,1.8); // kanan atas
    glEnd();

    //Kaki Rumah Aceh3 Depan2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-7.8,0,-0.9); // kanan bawah
    glVertex3f(-8,0,-0.9); // kiri bawah
    glVertex3f(-8,2,-0.9); // kiri atas
    glVertex3f(-7.8,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh3 Kiri2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-8,0,-0.9); // kanan bawah
    glVertex3f(-8,0,-1.1); // kiri bawah
    glVertex3f(-8,2,-1.1); // kiri atas
    glVertex3f(-8,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh2.2 Kanan2
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-7.8,0,-0.9); // kanan bawah
    glVertex3f(-7.8,0,-1.1); // kiri bawah
    glVertex3f(-7.8,2,-1.1); // kiri atas
    glVertex3f(-7.8,2,-0.9); // kanan atas
    glEnd();
    //Kaki Rumah Aceh3 Belakang2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-7.8,0,-1.1); // kanan bawah
    glVertex3f(-8,0,-1.1); // kiri bawah
    glVertex3f(-8,2,-1.1); // kiri atas
    glVertex3f(-7.8,2,-1.1); // kanan atas
    glEnd();

    //Kaki Rumah Aceh3 Depan3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-7.8,0,-3.8); // kanan bawah
    glVertex3f(-8,0,-3.8); // kiri bawah
    glVertex3f(-8,2,-3.8); // kiri atas
    glVertex3f(-7.8,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh3 Kiri3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-8,0,-3.8); // kanan bawah
    glVertex3f(-8,0,-4); // kiri bawah
    glVertex3f(-8,2,-4); // kiri atas
    glVertex3f(-8,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh3 Kanan3
    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex3f(-7.8,0,-3.8); // kanan bawah
    glVertex3f(-7.8,0,-4); // kiri bawah
    glVertex3f(-7.8,2,-4); // kiri atas
    glVertex3f(-7.8,2,-3.8); // kanan atas
    glEnd();
    //Kaki Rumah Aceh3 Belakang3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.7);
    glVertex3f(-7.8,0,-4); // kanan bawah
    glVertex3f(-8,0,-4); // kiri bawah
    glVertex3f(-8,2,-4); // kiri atas
    glVertex3f(-7.8,2,-4); // kanan atas
    glEnd();

    //Tangga
    //kanandepan
    glBegin(GL_QUADS);
    glColor3f(0.48,0.24,0.0);
    glVertex3f(-2.4,0.15,1.8); // kanan bawah
    glVertex3f(-2.55,0.15,1.8); // kiri bawah
    glVertex3f(-2.55,2,1); // kiri atas
    glVertex3f(-2.4,2,1); // kanan atas
    glEnd();
    //kananbelakang
    glBegin(GL_QUADS);
    glColor3f(0.48,0.24,0.0);
    glVertex3f(-2.4,0.15,1.7); // kanan bawah
    glVertex3f(-2.55,0.15,1.7); // kiri bawah
    glVertex3f(-2.55,2,0.9); // kiri atas
    glVertex3f(-2.4,2,0.9); // kanan atas
    glEnd();
    //kanankanan
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,0.15,1.7); // kanan bawah
    glVertex3f(-2.4,0.15,1.8); // kiri bawah
    glVertex3f(-2.4,2,1); // kiri atas
    glVertex3f(-2.4,2,0.9); // kanan atas
    glEnd();
    //kanankiri
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.55,0.15,1.7); // kanan bawah
    glVertex3f(-2.55,0.15,1.8); // kiri bawah
    glVertex3f(-2.55,2,1); // kiri atas
    glVertex3f(-2.55,2,0.9); // kanan atas
    glEnd();

    //kiridepan
    glBegin(GL_QUADS);
    glColor3f(0.48,0.24,0.0);
    glVertex3f(-3.4,0.15,1.8); // kanan bawah
    glVertex3f(-3.55,0.15,1.8); // kiri bawah
    glVertex3f(-3.55,2,1); // kiri atas
    glVertex3f(-3.4,2,1); // kanan atas
    glEnd();
    //kiribelakang
    glBegin(GL_QUADS);
    glColor3f(0.48,0.24,0.0);
    glVertex3f(-3.4,0.15,1.7); // kanan bawah
    glVertex3f(-3.55,0.15,1.7); // kiri bawah
    glVertex3f(-3.55,2,0.9); // kiri atas
    glVertex3f(-3.4,2,0.9); // kanan atas
    glEnd();
    //kirikanan
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-3.4,0.15,1.7); // kanan bawah
    glVertex3f(-3.4,0.15,1.8); // kiri bawah
    glVertex3f(-3.4,2,1); // kiri atas
    glVertex3f(-3.4,2,0.9); // kanan atas
    glEnd();
    //kirikiri
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-3.55,0.15,1.7); // kanan bawah
    glVertex3f(-3.55,0.15,1.8); // kiri bawah
    glVertex3f(-3.55,2,1); // kiri atas
    glVertex3f(-3.55,2,0.9); // kanan atas
    glEnd();

    //baris1
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,0.25,1.7); // kanan bawah
    glVertex3f(-3.55,0.25,1.8); // kiri bawah
    glVertex3f(-3.55,0.32,1.6); // kiri atas
    glVertex3f(-2.4,0.32,1.5); // kanan atas
    glEnd();
    //baris2
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,0.45,1.59); // kanan bawah
    glVertex3f(-3.55,0.45,1.69); // kiri bawah
    glVertex3f(-3.55,0.52,1.49); // kiri atas
    glVertex3f(-2.4,0.52,1.39); // kanan atas
    glEnd();
    //baris3
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,0.65,1.5); // kanan bawah
    glVertex3f(-3.55,0.65,1.6); // kiri bawah
    glVertex3f(-3.55,0.72,1.4); // kiri atas
    glVertex3f(-2.4,0.72,1.3); // kanan atas
    glEnd();
    //baris4
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,0.85,1.4); // kanan bawah
    glVertex3f(-3.55,0.85,1.5); // kiri bawah
    glVertex3f(-3.55,0.92,1.3); // kiri atas
    glVertex3f(-2.4,0.92,1.2); // kanan atas
    glEnd();
    //baris5
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,1.05,1.3); // kanan bawah
    glVertex3f(-3.55,1.05,1.4); // kiri bawah
    glVertex3f(-3.55,1.12,1.2); // kiri atas
    glVertex3f(-2.4,1.12,1.1); // kanan atas
    glEnd();
    //baris6
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,1.25,1.2); // kanan bawah
    glVertex3f(-3.55,1.25,1.3); // kiri bawah
    glVertex3f(-3.55,1.32,1.1); // kiri atas
    glVertex3f(-2.4,1.32,1.0); // kanan atas
    glEnd();
    //baris7
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,1.45,1.1); // kanan bawah
    glVertex3f(-3.55,1.45,1.2); // kiri bawah
    glVertex3f(-3.55,1.52,1.0); // kiri atas
    glVertex3f(-2.4,1.52,0.9); // kanan atas
    glEnd();
    //baris8
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,1.65,1.0); // kanan bawah
    glVertex3f(-3.55,1.65,1.1); // kiri bawah
    glVertex3f(-3.55,1.72,0.9); // kiri atas
    glVertex3f(-2.4,1.72,0.8); // kanan atas
    glEnd();
    //baris9
    glBegin(GL_QUADS);
    glColor3f(0.22,0.10,0.0);
    glVertex3f(-2.4,1.85,0.9); // kanan bawah
    glVertex3f(-3.55,1.85,1.0); // kiri bawah
    glVertex3f(-3.55,1.92,0.8); // kiri atas
    glVertex3f(-2.4,1.92,0.7); // kanan atas
    glEnd();

    //Semen Bawah
    //bawah
    glBegin(GL_QUADS);
    glColor3f(0.5,0.6,0.5);
    glVertex3f(-1.3,0,2.8); // kanan bawah
    glVertex3f(-8.7,0,2.8); // kiri bawah
    glVertex3f(-8.7,0,-4.8); // kiri atas
    glVertex3f(-1.3,0,-4.8); // kanan atas
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3f(0.5,0.6,0.5);
    glVertex3f(-1.3,0.15,2.8); // kanan bawah
    glVertex3f(-8.7,0.15,2.8); // kiri bawah
    glVertex3f(-8.7,0.15,-4.8); // kiri atas
    glVertex3f(-1.3,0.15,-4.8); // kanan atas
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.4,0.2);
    glVertex3f(-1.3,0,2.8); // kanan bawah
    glVertex3f(-8.7,0,2.8); // kiri bawah
    glVertex3f(-8.7,0.15,2.8); // kiri atas
    glVertex3f(-1.3,0.15,2.8); // kanan atas
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.2,0.4,0.2);
    glVertex3f(-8.7,0,2.8); // kanan bawah
    glVertex3f(-8.7,0,-4.8); // kiri bawah
    glVertex3f(-8.7,0.15,-4.8); // kiri atas
    glVertex3f(-8.7,0.15,2.8); // kanan atas
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.4,0.2);
    glVertex3f(-1.3,0,-4.8); // kanan bawah
    glVertex3f(-1.3,0,2.8); // kiri bawah
    glVertex3f(-1.3,0.15,2.8); // kiri atas
    glVertex3f(-1.3,0.15,-4.8); // kanan atas
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.2,0.4,0.2);
    glVertex3f(-8.7,0,-4.8); // kanan bawah
    glVertex3f(-1.3,0,-4.8); // kiri bawah
    glVertex3f(-1.3,0.15,-4.8); // kiri atas
    glVertex3f(-8.7,0.15,-4.8); // kanan atas
    glEnd();

    //Dinding depan1
    glBegin(GL_QUADS);
    glColor3f(0.3,0.15,0.0);
    glVertex3f(-2,2,2); // kanan bawah
    glVertex3f(-4,2,2); // kiri bawah
    glVertex3f(-4,4,2); // kiri atas
    glVertex3f(-2,2.8,2); // kanan atas
    glEnd();
    //Lukis
    //Leskuning
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-2,2,2.01); // kanan bawah
    glVertex3f(-4,2,2.01); // kiri bawah
    glVertex3f(-4,2.2,2.01); // kiri atas
    glVertex3f(-2,2.2,2.01); // kanan atas
    glEnd();
    //LesAtas1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);
    glVertex3f(-2,2.8,2.01); // kanan bawah
    glVertex3f(-3.9,2.8,2.01); // kiri bawah
    glVertex3f(-3.9,3.0,2.01); // kiri atas
    glVertex3f(-2.35,3.0,2.01); // kanan atas
    glEnd();
    //LesAtas2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.7,0.2);
    glVertex3f(-2.35,3.0,2.01); // kanan bawah
    glVertex3f(-3.9,3.0,2.01); // kiri bawah
    glVertex3f(-3.9,3.2,2.01); // kiri atas
    glVertex3f(-2.7,3.2,2.01); // kanan atas
    glEnd();
    //LesAtas3
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.4);
    glVertex3f(-2.7,3.2,2.01); // kanan bawah
    glVertex3f(-3.9,3.2,2.01); // kiri bawah
    glVertex3f(-3.9,4,2.01); // kiri atas
    glVertex3f(-3.9,4,2.01); // kanan atas
    glEnd();
    //jendela1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.2);
    glVertex3f(-2.1,2.3,2.01); // kanan bawah
    glVertex3f(-2.5,2.3,2.01); // kiri bawah
    glVertex3f(-2.5,2.8,2.01); // kiri atas
    glVertex3f(-2.1,2.8,2.01); // kanan atas
    glEnd();
    //jendela2
    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.1);
    glVertex3f(-2.6,2.3,2.01); // kanan bawah
    glVertex3f(-3,2.3,2.01); // kiri bawah
    glVertex3f(-3,2.8,2.01); // kiri atas
    glVertex3f(-2.6,2.8,2.01); // kanan atas
    glEnd();
    //jendela3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.2);
    glVertex3f(-3.1,2.3,2.01); // kanan bawah
    glVertex3f(-3.9,2.3,2.01); // kiri bawah
    glVertex3f(-3.9,2.8,2.01); // kiri atas
    glVertex3f(-3.1,2.8,2.01); // kanan atas
    glEnd();
    //Dinding depan2
    glBegin(GL_QUADS);
    glColor3f(0.3,0.15,0.0);
    glVertex3f(-4,2.3,2); // kanan bawah
    glVertex3f(-6,2.3,2); // kiri bawah
    glVertex3f(-6,4,2); // kiri atas
    glVertex3f(-4,4,2); // kanan atas
    glEnd();
    //Pucuk Dinding depan2
    glBegin(GL_QUADS);
    glColor3f(0.5,0.25,0.0);
    glVertex3f(-4,4,2.4); // kanan bawah
    glVertex3f(-6,4,2.4); // kiri bawah
    glVertex3f(-5,4.8,2.7); // kiri atas
    glVertex3f(-5,4.8,2.7); // kanan atas
    glEnd();
    //Lukis
    //Leskuning
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-4,2.3,2.01); // kanan bawah
    glVertex3f(-6,2.3,2.01); // kiri bawah
    glVertex3f(-6,2.5,2.01); // kiri atas
    glVertex3f(-4,2.5,2.01); // kanan atas
    glEnd();
    //vent1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-4.1,3.5,2.01); // kanan bawah
    glVertex3f(-4.6,3.5,2.01); // kiri bawah
    glVertex3f(-4.6,4,2.01); // kiri atas
    glVertex3f(-4.1,4,2.01); // kanan atas
    glEnd();
    //vent1.2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.1);
    glVertex3f(-4.1,3.5,2.01); // kanan bawah
    glVertex3f(-4.6,3.5,2.01); // kiri bawah
    glVertex3f(-4.6,2.6,2.01); // kiri atas
    glVertex3f(-4.1,2.6,2.01); // kanan atas
    glEnd();
    //vent2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-4.7,3.5,2.01); // kanan bawah
    glVertex3f(-5.3,3.5,2.01); // kiri bawah
    glVertex3f(-5.3,4,2.01); // kiri atas
    glVertex3f(-4.7,4,2.01); // kanan atas
    glEnd();
    //vent2.1
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.1);
    glVertex3f(-4.7,3.5,2.01); // kanan bawah
    glVertex3f(-5.3,3.5,2.01); // kiri bawah
    glVertex3f(-5.3,2.6,2.01); // kiri atas
    glVertex3f(-4.7,2.6,2.01); // kanan atas
    glEnd();
    //vent3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-5.9,3.5,2.01); // kanan bawah
    glVertex3f(-5.4,3.5,2.01); // kiri bawah
    glVertex3f(-5.4,4,2.01); // kiri atas
    glVertex3f(-5.9,4,2.01); // kanan atas
    glEnd();
    //vent3.1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.1);
    glVertex3f(-5.9,3.5,2.01); // kanan bawah
    glVertex3f(-5.4,3.5,2.01); // kiri bawah
    glVertex3f(-5.4,2.6,2.01); // kiri atas
    glVertex3f(-5.9,2.6,2.01); // kanan atas
    glEnd();

    //kanan1
    glBegin(GL_QUADS);
    glColor3f(0.7,0.5,0.4);
    glVertex3f(-4.2,4.1,2.44); // kanan bawah
    glVertex3f(-4.5,4.1,2.44); // kiri bawah
    glVertex3f(-4.95,4.5,2.61); // kiri atas
    glVertex3f(-4.95,4.7,2.71); // kanan atas
    glEnd();
    //kiri1
    glBegin(GL_QUADS);
    glColor3f(0.7,0.5,0.4);
    glVertex3f(-5.8,4.1,2.44); // kanan bawah
    glVertex3f(-5.5,4.1,2.44); // kiri bawah
    glVertex3f(-5.05,4.5,2.61); // kiri atas
    glVertex3f(-5.05,4.7,2.71); // kanan atas
    glEnd();
    //kanan2
    glBegin(GL_QUADS);
    glColor3f(0.7,0.6,0.6);
    glVertex3f(-4.55,4.1,2.44); // kanan bawah
    glVertex3f(-4.85,4.1,2.44); // kiri bawah
    glVertex3f(-4.95,4.2,2.5); // kiri atas
    glVertex3f(-4.95,4.45,2.6); // kanan atas
    glEnd();
    //kiri2
    glBegin(GL_QUADS);
    glColor3f(0.7,0.6,0.6);
    glVertex3f(-5.45,4.1,2.44); // kanan bawah
    glVertex3f(-5.15,4.1,2.44); // kiri bawah
    glVertex3f(-5.05,4.2,2.5); // kiri atas
    glVertex3f(-5.05,4.45,2.6); // kanan atas
    glEnd();

    //Batas Kiri
    glBegin(GL_QUADS);
    glColor3f(0.2,0.1,0.05);
    glVertex3f(-6,4,2.4); // kanan bawah
    glVertex3f(-6,4,2); // kiri bawah
    glVertex3f(-5,4.8,2); // kiri atas
    glVertex3f(-5,4.8,2.7); // kanan atas
    glEnd();
    //Batas Kanan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.1,0.05);
    glVertex3f(-4,4,2); // kanan bawah
    glVertex3f(-4,4,2.4); // kiri bawah
    glVertex3f(-5,4.8,2.7); // kiri atas
    glVertex3f(-5,4.8,2); // kanan atas
    glEnd();
    //Batas Bawah
    glBegin(GL_QUADS);
    glColor3f(0.2,0.1,0.05);
    glVertex3f(-4,4,2.4); // kanan bawah
    glVertex3f(-6,4,2.4); // kiri bawah
    glVertex3f(-6,4,2); // kiri atas
    glVertex3f(-4,4,2); // kanan atas
    glEnd();
    /*Batas Pucuk Dinding depan2
    */
    //Dinding depan3
    glBegin(GL_QUADS);
    glColor3f(0.3,0.15,0.0);
    glVertex3f(-6,2,2); // kanan bawah
    glVertex3f(-8,2,2); // kiri bawah
    glVertex3f(-8,2.8,2); // kiri atas
    glVertex3f(-6,4,2); // kanan atas
    glEnd();
    //Lukis
    //Leskuning
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-6,2,2.01); // kanan bawah
    glVertex3f(-8,2,2.01); // kiri bawah
    glVertex3f(-8,2.2,2.01); // kiri atas
    glVertex3f(-6,2.2,2.01); // kanan atas
    glEnd();
    //LesAtas1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);
    glVertex3f(-6.1,2.8,2.01); // kanan bawah
    glVertex3f(-8,2.8,2.01); // kiri bawah
    glVertex3f(-7.65,3.0,2.01); // kiri atas
    glVertex3f(-6.1,3.0,2.01); // kanan atas
    glEnd();
    //LesAtas2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.7,0.2);
    glVertex3f(-6.1,3.0,2.01); // kanan bawah
    glVertex3f(-7.65,3.0,2.01); // kiri bawah
    glVertex3f(-7.3,3.2,2.01); // kiri atas
    glVertex3f(-6.1,3.2,2.01); // kanan atas
    glEnd();
    //LesAtas3
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.4);
    glVertex3f(-6.1,3.2,2.01); // kanan bawah
    glVertex3f(-7.3,3.2,2.01); // kiri bawah
    glVertex3f(-6.1,4,2.01); // kiri atas
    glVertex3f(-6.1,4,2.01); // kanan atas
    glEnd();
    //jendela1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.2);
    glVertex3f(-6.1,2.3,2.01); // kanan bawah
    glVertex3f(-6.5,2.3,2.01); // kiri bawah
    glVertex3f(-6.5,2.8,2.01); // kiri atas
    glVertex3f(-6.1,2.8,2.01); // kanan atas
    glEnd();
    //jendela2
    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.1);
    glVertex3f(-6.6,2.3,2.01); // kanan bawah
    glVertex3f(-7,2.3,2.01); // kiri bawah
    glVertex3f(-7,2.8,2.01); // kiri atas
    glVertex3f(-6.6,2.8,2.01); // kanan atas
    glEnd();
    //jendela3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.2);
    glVertex3f(-7.1,2.3,2.01); // kanan bawah
    glVertex3f(-7.9,2.3,2.01); // kiri bawah
    glVertex3f(-7.9,2.8,2.01); // kiri atas
    glVertex3f(-7.1,2.8,2.01); // kanan atas
    glEnd();

    //Belakang
    //Dinding belakang1
    glBegin(GL_QUADS);
    glColor3f(0.3,0.15,0.0);
    glVertex3f(-2,2,-4); // kanan bawah
    glVertex3f(-4,2,-4); // kiri bawah
    glVertex3f(-4,4,-4); // kiri atas
    glVertex3f(-2,2.8,-4); // kanan atas
    glEnd();
    //Lukis
    //Leskuning
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-2,2,-4.01); // kanan bawah
    glVertex3f(-4,2,-4.01); // kiri bawah
    glVertex3f(-4,2.2,-4.01); // kiri atas
    glVertex3f(-2,2.2,-4.01); // kanan atas
    glEnd();
    //LesAtas1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);
    glVertex3f(-2,2.8,-4.01); // kanan bawah
    glVertex3f(-3.9,2.8,-4.01); // kiri bawah
    glVertex3f(-3.9,3.0,-4.01); // kiri atas
    glVertex3f(-2.35,3.0,-4.01); // kanan atas
    glEnd();
    //LesAtas2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.7,0.2);
    glVertex3f(-2.35,3.0,-4.01); // kanan bawah
    glVertex3f(-3.9,3.0,-4.01); // kiri bawah
    glVertex3f(-3.9,3.2,-4.01); // kiri atas
    glVertex3f(-2.7,3.2,-4.01); // kanan atas
    glEnd();
    //LesAtas3
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.4);
    glVertex3f(-2.7,3.2,-4.01); // kanan bawah
    glVertex3f(-3.9,3.2,-4.01); // kiri bawah
    glVertex3f(-3.9,4,-4.01); // kiri atas
    glVertex3f(-3.9,4,-4.01); // kanan atas
    glEnd();
    //jendela1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.2);
    glVertex3f(-2.1,2.3,-4.01); // kanan bawah
    glVertex3f(-2.5,2.3,-4.01); // kiri bawah
    glVertex3f(-2.5,2.8,-4.01); // kiri atas
    glVertex3f(-2.1,2.8,-4.01); // kanan atas
    glEnd();
    //jendela2
    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.1);
    glVertex3f(-2.6,2.3,-4.01); // kanan bawah
    glVertex3f(-3,2.3,-4.01); // kiri bawah
    glVertex3f(-3,2.8,-4.01); // kiri atas
    glVertex3f(-2.6,2.8,-4.01); // kanan atas
    glEnd();
    //jendela3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.2);
    glVertex3f(-3.1,2.3,-4.01); // kanan bawah
    glVertex3f(-3.9,2.3,-4.01); // kiri bawah
    glVertex3f(-3.9,2.8,-4.01); // kiri atas
    glVertex3f(-3.1,2.8,-4.01); // kanan atas
    glEnd();
    //Dinding belakang2
    glBegin(GL_QUADS);
    glColor3f(0.3,0.15,0.0);
    glVertex3f(-4,2.3,-4); // kanan bawah
    glVertex3f(-6,2.3,-4); // kiri bawah
    glVertex3f(-6,4,-4); // kiri atas
    glVertex3f(-4,4,-4); // kanan atas
    glEnd();
    /*Pucuk Dinding
    */
    //Pucuk Dinding belakang2
    glBegin(GL_QUADS);
    glColor3f(0.5,0.25,0.0);
    glVertex3f(-4,4,-4.4); // kanan bawah
    glVertex3f(-6,4,-4.4); // kiri bawah
    glVertex3f(-5,4.8,-4.7); // kiri atas
    glVertex3f(-5,4.8,-4.7); // kanan atas
    glEnd();
    //Lukis
    //Leskuning
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-4,2.3,-4.01); // kanan bawah
    glVertex3f(-6,2.3,-4.01); // kiri bawah
    glVertex3f(-6,2.5,-4.01); // kiri atas
    glVertex3f(-4,2.5,-4.01); // kanan atas
    glEnd();
    //vent1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-4.1,3.5,-4.01); // kanan bawah
    glVertex3f(-4.6,3.5,-4.01); // kiri bawah
    glVertex3f(-4.6,4,-4.01); // kiri atas
    glVertex3f(-4.1,4,-4.01); // kanan atas
    glEnd();
    //vent1.2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.1);
    glVertex3f(-4.1,3.5,-4.01); // kanan bawah
    glVertex3f(-4.6,3.5,-4.01); // kiri bawah
    glVertex3f(-4.6,2.6,-4.01); // kiri atas
    glVertex3f(-4.1,2.6,-4.01); // kanan atas
    glEnd();
    //vent2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-4.7,3.5,-4.01); // kanan bawah
    glVertex3f(-5.3,3.5,-4.01); // kiri bawah
    glVertex3f(-5.3,4,-4.01); // kiri atas
    glVertex3f(-4.7,4,-4.01); // kanan atas
    glEnd();
    //vent2.1
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.1);
    glVertex3f(-4.7,3.5,-4.01); // kanan bawah
    glVertex3f(-5.3,3.5,-4.01); // kiri bawah
    glVertex3f(-5.3,2.6,-4.01); // kiri atas
    glVertex3f(-4.7,2.6,-4.01); // kanan atas
    glEnd();
    //vent3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-5.9,3.5,-4.01); // kanan bawah
    glVertex3f(-5.4,3.5,-4.01); // kiri bawah
    glVertex3f(-5.4,4,-4.01); // kiri atas
    glVertex3f(-5.9,4,-4.01); // kanan atas
    glEnd();
    //vent3.1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.1);
    glVertex3f(-5.9,3.5,-4.01); // kanan bawah
    glVertex3f(-5.4,3.5,-4.01); // kiri bawah
    glVertex3f(-5.4,2.6,-4.01); // kiri atas
    glVertex3f(-5.9,2.6,-4.01); // kanan atas
    glEnd();
    //kanan1
    glBegin(GL_QUADS);
    glColor3f(0.7,0.5,0.4);
    glVertex3f(-4.2,4.1,-4.44); // kanan bawah
    glVertex3f(-4.5,4.1,-4.44); // kiri bawah
    glVertex3f(-4.95,4.5,-4.61); // kiri atas
    glVertex3f(-4.95,4.7,-4.71); // kanan atas
    glEnd();
    //kiri1
    glBegin(GL_QUADS);
    glColor3f(0.7,0.5,0.4);
    glVertex3f(-5.8,4.1,-4.44); // kanan bawah
    glVertex3f(-5.5,4.1,-4.44); // kiri bawah
    glVertex3f(-5.05,4.5,-4.61); // kiri atas
    glVertex3f(-5.05,4.7,-4.71); // kanan atas
    glEnd();
    //kanan2
    glBegin(GL_QUADS);
    glColor3f(0.7,0.6,0.6);
    glVertex3f(-4.55,4.1,-4.44); // kanan bawah
    glVertex3f(-4.85,4.1,-4.44); // kiri bawah
    glVertex3f(-4.95,4.2,-4.5); // kiri atas
    glVertex3f(-4.95,4.45,-4.6); // kanan atas
    glEnd();
    //kiri2
    glBegin(GL_QUADS);
    glColor3f(0.7,0.6,0.6);
    glVertex3f(-5.45,4.1,-4.44); // kanan bawah
    glVertex3f(-5.15,4.1,-4.44); // kiri bawah
    glVertex3f(-5.05,4.2,-4.5); // kiri atas
    glVertex3f(-5.05,4.45,-4.6); // kanan atas
    glEnd();

    //Batas Kiri
    glBegin(GL_QUADS);
    glColor3f(0.2,0.1,0.05);
    glVertex3f(-6,4,-4.4); // kanan bawah
    glVertex3f(-6,4,-4); // kiri bawah
    glVertex3f(-5,4.8,-4); // kiri atas
    glVertex3f(-5,4.8,-4.7); // kanan atas
    glEnd();
    //Batas Kanan
    glBegin(GL_QUADS);
    glColor3f(0.2,0.1,0.05);
    glVertex3f(-4,4,-4); // kanan bawah
    glVertex3f(-4,4,-4.4); // kiri bawah
    glVertex3f(-5,4.8,-4.7); // kiri atas
    glVertex3f(-5,4.8,-4); // kanan atas
    glEnd();
    //Batas Bawah
    glBegin(GL_QUADS);
    glColor3f(0.2,0.1,0.05);
    glVertex3f(-4,4,-4.4); // kanan bawah
    glVertex3f(-6,4,-4.4); // kiri bawah
    glVertex3f(-6,4,-4); // kiri atas
    glVertex3f(-4,4,-4); // kanan atas
    glEnd();
    /*Batas Pucuk Dinding belakang2
    */
    //Dinding belakang3
    glBegin(GL_QUADS);
    glColor3f(0.3,0.15,0.0);
    glVertex3f(-6,2,-4); // kanan bawah
    glVertex3f(-8,2,-4); // kiri bawah
    glVertex3f(-8,2.8,-4); // kiri atas
    glVertex3f(-6,4,-4); // kanan atas
    glEnd();
    //Lukis
    //Leskuning
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-6,2,-4.01); // kanan bawah
    glVertex3f(-8,2,-4.01); // kiri bawah
    glVertex3f(-8,2.2,-4.01); // kiri atas
    glVertex3f(-6,2.2,-4.01); // kanan atas
    glEnd();
    //LesAtas1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);
    glVertex3f(-6.1,2.8,-4.01); // kanan bawah
    glVertex3f(-8,2.8,-4.01); // kiri bawah
    glVertex3f(-7.65,3.0,-4.01); // kiri atas
    glVertex3f(-6.1,3.0,-4.01); // kanan atas
    glEnd();
    //LesAtas2
    glBegin(GL_QUADS);
    glColor3f(0.8,0.7,0.2);
    glVertex3f(-6.1,3.0,-4.01); // kanan bawah
    glVertex3f(-7.65,3.0,-4.01); // kiri bawah
    glVertex3f(-7.3,3.2,-4.01); // kiri atas
    glVertex3f(-6.1,3.2,-4.01); // kanan atas
    glEnd();
    //LesAtas3
    glBegin(GL_QUADS);
    glColor3f(0.3,0.3,0.4);
    glVertex3f(-6.1,3.2,-4.01); // kanan bawah
    glVertex3f(-7.3,3.2,-4.01); // kiri bawah
    glVertex3f(-6.1,4,-4.01); // kiri atas
    glVertex3f(-6.1,4,-4.01); // kanan atas
    glEnd();
    //jendela1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.2);
    glVertex3f(-6.1,2.3,-4.01); // kanan bawah
    glVertex3f(-6.5,2.3,-4.01); // kiri bawah
    glVertex3f(-6.5,2.8,-4.01); // kiri atas
    glVertex3f(-6.1,2.8,-4.01); // kanan atas
    glEnd();
    //jendela2
    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.1);
    glVertex3f(-6.6,2.3,-4.01); // kanan bawah
    glVertex3f(-7,2.3,-4.01); // kiri bawah
    glVertex3f(-7,2.8,-4.01); // kiri atas
    glVertex3f(-6.6,2.8,-4.01); // kanan atas
    glEnd();
    //jendela3
    glBegin(GL_QUADS);
    glColor3f(0.8,0.4,0.2);
    glVertex3f(-7.1,2.3,-4.01); // kanan bawah
    glVertex3f(-7.9,2.3,-4.01); // kiri bawah
    glVertex3f(-7.9,2.8,-4.01); // kiri atas
    glVertex3f(-7.1,2.8,-4.01); // kanan atas
    glEnd();

    //Samping
    //Dinding Kiri
    glBegin(GL_QUADS);
    glColor3f(0.25,0.125,0.0);
    glVertex3f(-8,2,-4); // kanan bawah
    glVertex3f(-8,2,2); // kiri bawah
    glVertex3f(-8,2.8,2); // kiri atas
    glVertex3f(-8,2.8,-4); // kanan atas
    glEnd();
    //Lukis
    //Leskuning
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-8.01,2,-4); // kanan bawah
    glVertex3f(-8.01,2,2); // kiri bawah
    glVertex3f(-8.01,2.2,2); // kiri atas
    glVertex3f(-8.01,2.2,-4); // kanan atas
    glEnd();
    //Dinding Kanan
    glBegin(GL_QUADS);
    glColor3f(0.25,0.125,0.0);
    glVertex3f(-2,2,-4); // kanan bawah
    glVertex3f(-2,2,2); // kiri bawah
    glVertex3f(-2,2.8,2); // kiri atas
    glVertex3f(-2,2.8,-4); // kanan atas
    glEnd();
    //Lukis
    //Leskuning
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.1);
    glVertex3f(-1.99,2,-4); // kanan bawah
    glVertex3f(-1.99,2,2); // kiri bawah
    glVertex3f(-1.99,2.2,2); // kiri atas
    glVertex3f(-1.99,2.2,-4); // kanan atas
    glEnd();

    //Atap Kanan1
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.2);
    glVertex3f(-1.3,2.5,-4.8); // kanan bawah
    glVertex3f(-1.3,2.5,2.8); // kiri bawah
    glVertex3f(-5,4.8,2.8); // kiri atas
    glVertex3f(-5,4.8,-4.8); // kanan atas
    glEnd();
    //Atap Kiri1
    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.2);
    glVertex3f(-8.7,2.5,-4.8); // kanan bawah
    glVertex3f(-8.7,2.5,2.8); // kiri bawah
    glVertex3f(-5,4.8,2.8); // kiri atas
    glVertex3f(-5,4.8,-4.8); // kanan atas
    glEnd();

	glutSwapBuffers();
}

void Keyboard (GLubyte key, GLint x, GLint y) {
if (key == 'a' || key == 'A') z+=2;
if (key == 'd' || key == 'D') z-=2;
if (key == 'x' || key == 'X') {
x1=1;
y1=0;
z1=0;
sudut +=10;
}
if (key == 'y' || key == 'Y') {
x1=0;
y1=1;
z1=0;
sudut +=-10;
}
if (key == 'z'|| key == 'Z') {
x1=0;
y1=0;
z1=1;
sudut +=-10;
}
if ( key == 'f'|| key == 'F') {
glutFullScreen ();
}
{
int foo;
foo = x + y;
if ('q' == key || 'Q' == key || 27 == key)
exit (0);
}
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE); // Enable double buffered mode
    glutInitWindowSize(1024, 700);   // width & height window
    glutInitWindowPosition(150, 0); // Buat ke tengah posisi window
    glutCreateWindow("Hafiz 3D Shape UAS Komputer Grafik");
    glutDisplayFunc(gambar);
    glutReshapeFunc(changeSize);
    glutIdleFunc(gambar);
    glutKeyboardFunc (Keyboard);
    glutMainLoop();
    return 0;
}
