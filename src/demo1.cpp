#ifdef _WIN32
#include <windows.h>
#endif
#include <GL/gl.h>
#include <GL/glu.h>
// #include <GL/glut.h>
#include <stdlib.h>
#include <iostream>
#include <GL/glut.h> // GLUT头文件  包里没有glut 是拓展的
// 图形绘制函数
void myDrawing(void) {
	//清除颜色缓冲区
   printf("$\n");
	glClearColor(0.0, 0.0, 1.0f, 0.0);    //设置背景清除蓝色
	glClear(GL_COLOR_BUFFER_BIT);         //执行清除
 
	//以线框形式绘制一个茶壶
	glRotatef(45, 1.0f, 1.0f, 1.0f);      //旋转 -- <缩放窗口>
	glutWireTeapot(0.5f);                 //壶
	//glutWireSphere(0.5f, 24, 24);         //线框球面
	//glutWireTorus(0.25f, 0.6, 30, 25);    //线框球面
	glFlush(); //强制绘图
}
// 主函数
int main(void) {
	//对GLUT进行初始化
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	//产生一个名为"Hello"的绘制窗口, //使用缺省值
	glutCreateWindow("Hello");
	//注册绘制函数
	glutDisplayFunc(myDrawing);
	//清除颜色缓冲区 ----- 放在这里不起作用
	//glClearColor(0.0, 0.0, 1.0f, 0.0); //设置背景清除蓝色
	//glClear(GL_COLOR_BUFFER_BIT);
	//主消息循环
	glutMainLoop(); //进入消息循环
	return 0;
}