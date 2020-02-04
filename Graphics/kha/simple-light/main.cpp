#include <windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <GL/glut.h>

#define WHITE 1, 1, 1
#define LIGHT 0.0, 0.0, 1.0
#define pi 2*acos(0)

//make a global variable -- for tracking the anglular position of camera
double cameraAngle;			//in radian
double Angle,lightAngle;
double r;

int canDrawGrid;
int drawaxes;
int up=1;


struct point
{
	double x,y,z;
};

void drawAxes()
{
	if(drawaxes==1){
		glBegin(GL_LINES);{
			glColor3f(0.8, 0, 0);
			glVertex3f( 800,0,0);
			glVertex3f(-800,0,0);
			glColor3f(0, 0.5, 0);
			glVertex3f(0,-800,0);
			glVertex3f(0, 800,0);
			glColor3f(0, 0, 0.8);
			glVertex3f(0,0, 400);
			glVertex3f(0,0,0);
		}glEnd();
	}
}

void display(){

	//clear the display
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0, 0, 0, 0);	//color black
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	/********************
	/ set-up camera here
	********************/
	//load the correct matrix -- MODEL-VIEW matrix
	glMatrixMode(GL_MODELVIEW);

	//initialize the matrix
	glLoadIdentity();

	//now give three info
	//1. where is the camera (viewer)?
	//2. where is the camera is looking?
	//3. Which direction is the camera's UP direction?

	//instead of CONSTANT information, we will define a circular path.
//	gluLookAt(200,800,200,	200,200,0,	0,0,1);

	gluLookAt(r*cos(Angle),r*sin(Angle), 200,		0,0,0,		0,0,1);
	//NOTE: the camera still CONSTANTLY looks at the center
	// cameraAngle is in RADIAN, since you are using inside COS and SIN


	//again select MODEL-VIEW
	glMatrixMode(GL_MODELVIEW);

    /************************************
	/ Add your lighting effects from here
	*************************************/

	//moving light source
/**/   GLfloat position[] = {200.0*cos(lightAngle),200.0*sin(lightAngle), 100, 1.0}; //Positioned at (4, 0, 8)
    glLightfv(GL_LIGHT1, GL_POSITION, position);


  // representative object of the light source
 /* */

    GLfloat light_emission[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat unset[]={0,0,0,1};
    glMaterialfv(GL_FRONT, GL_EMISSION, light_emission);
    glMaterialfv(GL_FRONT, GL_SPECULAR, unset);
    glPushMatrix();
   //glTranslatef (-10.0,-10.0,5);
    glTranslatef (200.0*cos(lightAngle),200.0*sin(lightAngle),100);
    glutSolidSphere(7.0, 36, 36);
    glPopMatrix();

//object being illuminated
/**/   GLfloat mat_ambient[] = { 0.0, 0.0, 0.5, 1.0 };
    GLfloat mat_diffuse[] = { 0, 0, 0.5, 1.0 };
    GLfloat mat_specular[] = { LIGHT, 1.0 }; //equal to the light source
    GLfloat low_shininess[] = { 5.0 };
    GLfloat mid_shininess[] = { 50.0 };
    GLfloat high_shininess[] = { 100.0 };

    glPushMatrix();
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    glMaterialfv(GL_FRONT, GL_EMISSION, unset);
    glPopMatrix();
	/****************************
	/ Add your objects from here
	****************************/
	//add objects
	drawAxes();
	glutSolidSphere(30.0, 36, 36);

	glColor3f(1, 1, 1);

	//ADD this line in the end --- if you use double buffer (i.e. GL_DOUBLE)
	glutSwapBuffers();
}

void animate(){
	//codes for any changes in Camera


	//MISSING SOMETHING? -- YES: add the following
	glutPostRedisplay();	//this will call the display AGAIN
}


void keyboardListener(unsigned char key, int x,int y){
	switch(key){

		case '1':	//reverse the rotation of camera
			Angle += 0.05;
			break;
		case '2':	//reverse the rotation of camera
			Angle -= 0.05;
			break;
		case '3':	//reverse the rotation of camera
			if(r-3>0) r -= 3;
			break;
		case '4':	//reverse the rotation of camera
			r += 3.0;
			break;
	    case '5':	//reverse the rotation of camera

			break;
		case '6':	//reverse the rotation of camera

			break;
		case '7':	//increase rotation of camera by 10%
            lightAngle += 0.05;
			break;

		case '8':	//decrease rotation
            lightAngle -= 0.05;
			break;

		case '9':	//toggle grids
			canDrawGrid = 1 - canDrawGrid;
			break;

		default:
			break;
	}
}

void specialKeyListener(int key, int x,int y){
	switch(key){
		case GLUT_KEY_DOWN:

			break;
		case GLUT_KEY_UP:

			break;

		case GLUT_KEY_RIGHT:

			break;
		case GLUT_KEY_LEFT:

			break;

		case GLUT_KEY_PAGE_UP:
			break;
		case GLUT_KEY_PAGE_DOWN:
			break;

		case GLUT_KEY_INSERT:
			break;

		case GLUT_KEY_HOME:
			break;
		case GLUT_KEY_END:
			break;

		default:
			break;
	}
}

void init(){
	//codes for initialization
	cameraAngle = -2.5;	//// init the cameraAngle
	lightAngle = 0.0;
	Angle = 0.8;
	canDrawGrid = 1;
	drawaxes = 1;
    r=500;


	//clear the screen
	glClearColor(0, 0, 0, 0);
	glShadeModel(GL_SMOOTH);

	//glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, local_view);


	//Add global ambient light
   GLfloat lmodel_ambient[] = { .3, .3, .3, .3 }; //color of the global ambient light
   glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);





   //effect of local light source: directed diffuse light
/**/GLfloat diffuseDir[] = {LIGHT, 1.0}; //Color (0.5, 0.2, 0.2)
    GLfloat lightDir[] = {1, 1, 1, 0.0}; //Coming from the direction (-1, 0.5, 0.5)
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseDir);
    glLightfv(GL_LIGHT0, GL_POSITION, lightDir);


	//effect of local light source: point diffuse light
	/**/
    GLfloat diffusePoint[] = {LIGHT, 1.0}; //Color (0.5, 0.5, 0.5)
    //GLfloat position[] = {-10.0, -10.0, 5.0, 1.0}; //Positioned at (-10, -10, 5)
    glLightfv(GL_LIGHT1, GL_DIFFUSE, diffusePoint); //
    //glLightfv(GL_LIGHT1, GL_POSITION, position);



    glEnable(GL_NORMALIZE); //Automatically normalize normals needed by the illumination model
    glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0); //Enable light #0
	glEnable(GL_LIGHT1); //Enable light #1

	/************************
	/ set-up projection here
	************************/
	//load the PROJECTION matrix
	glMatrixMode(GL_PROJECTION);

	//initialize the matrix
	glLoadIdentity();

	//give PERSPECTIVE parameters
	gluPerspective(70,	1,	0.1,	10000.0);
	//field of view in the Y (vertically)
	//aspect ratio that determines the field of view in the X direction (horizontally)
	//near distance
	//far distance
}

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);	//Depth, Double buffer, RGB color

	glutCreateWindow("My OpenGL Program");

	init();

	glEnable(GL_DEPTH_TEST);	//enable Depth Testing

	glutDisplayFunc(display);	//display callback function
	glutIdleFunc(animate);		//what you want to do in the idle time (when no drawing is occurring)

	//ADD keyboard listeners:
	glutKeyboardFunc(keyboardListener);
	glutSpecialFunc(specialKeyListener);

	glutMainLoop();		//The main loop of OpenGL

	return 0;
}
