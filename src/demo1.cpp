#ifdef _WIN32
#include <windows.h>
#endif
#include <GL/gl.h>
#include <GL/glu.h>
// #include <GL/glut.h>
#include <stdlib.h>
#include <iostream>
#include <GL/glut.h> // GLUTͷ�ļ�  ����û��glut ����չ��
// ͼ�λ��ƺ���
void myDrawing(void) {
	//�����ɫ������
   printf("$\n");
	glClearColor(0.0, 0.0, 1.0f, 0.0);    //���ñ��������ɫ
	glClear(GL_COLOR_BUFFER_BIT);         //ִ�����
 
	//���߿���ʽ����һ�����
	glRotatef(45, 1.0f, 1.0f, 1.0f);      //��ת -- <���Ŵ���>
	glutWireTeapot(0.5f);                 //��
	//glutWireSphere(0.5f, 24, 24);         //�߿�����
	//glutWireTorus(0.25f, 0.6, 30, 25);    //�߿�����
	glFlush(); //ǿ�ƻ�ͼ
}
// ������
int main(void) {
	//��GLUT���г�ʼ��
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	//����һ����Ϊ"Hello"�Ļ��ƴ���, //ʹ��ȱʡֵ
	glutCreateWindow("Hello");
	//ע����ƺ���
	glutDisplayFunc(myDrawing);
	//�����ɫ������ ----- �������ﲻ������
	//glClearColor(0.0, 0.0, 1.0f, 0.0); //���ñ��������ɫ
	//glClear(GL_COLOR_BUFFER_BIT);
	//����Ϣѭ��
	glutMainLoop(); //������Ϣѭ��
	return 0;
}