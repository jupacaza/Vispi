#include "vispi.h"

using namespace std;
using namespace cv;

bool led1;
int gSvQg = 1;
bool led2;
int ndltO = 4;
int SEMHS = 5;
int velocidad;
bool aspzd = true;
string mensajeAlerta;
int kfpkZ = 10;
float Wdtrj = 1.2;
bool boton;
float yZVFz = 45.0;
float ZFWky = 2.1;
int UTtWB = 3;
int fHJJB = 20;
string lwHtP = "Alerta de intruso!";
int personas;
Mat imgInicial;
int FOaFA = 85;

int comparaImagen (int i, float a) {
}

int main()
{
	wiringPiSetup(); //allow the use of wiringPi interface library
	VideoCapture cap(0); // open the default camera
if(!cap.isOpened()) // check if we succeeded
	return -1;

pullUpDnControl(22, PUD_DOWN); //Enable PullUp Resistor connected to GND 
pinMode(22, INPUT); 
pullUpDnControl(15, PUD_OFF); //Disable PullUp Resistor
pinMode(15, OUTPUT); 
pullUpDnControl(16, PUD_OFF); //Disable PullUp Resistor
pinMode(16, OUTPUT); 
pullUpDnControl(12, PUD_OFF); //Disable PullUp Resistor
pinMode(12, PWM_OUTPUT); 

return 0;
}
