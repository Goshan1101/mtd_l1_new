#include <iostream>
#include "graphlib.h"
#include "GLine.h"
#include "GArc.h"
#include "MSegment.h"
#include "MObject.h"
#include "MSector.h"
#include "MOLine.h"
#include "MOArc.h"
#include "MOSegment.h"
#include "MOSector.h"

Figure* Ar[100];
int count = 0;

void add(Figure* fig) {
	Ar[count] = fig;
	count+=1;
}

MObject* MObject::head = nullptr;

void Main(void){


	GLine *line1 = new GLine (50,50,100,100,255,0,0);// new
	add(line1);

	GArc *arc1 = new GArc(100,100);
	add(arc1);                //-- (убрал вызов функции draw)

	MSegment* seg1 = new MSegment(300, 300);
	add((Figure*)(GArc*)seg1);

	MSector* sec1 = new MSector(500, 500, 100, 20, 80);
	add((Figure*)(GLine*)sec1);


  //draw_line(0,0,500,250,255,128,128);
  //draw_arc(400,400,90,0,180,0,255,0);
  std::cout<<"1"<<std::endl;

  wait4keyORmouse(); // SPACE BAR or LEFT MOUSE KEY

  Ar[1]->move(100,100);

  MOSector* sec = new MOSector(700, 700, 100, 20, 80);// 1) Сделать, чтобы линия, которая в секторе, говорила, что она в секторе (причем это должно делаться не в секторе, как сейчас, а в линии)
  MObject::add((MObject*)(MOLine*)sec);
  //std::cout << "discribe all list: " << std::endl;
  //MObject::describeAll();
													   // 2) Сделать MOLine наследовалась от GLine, а не содержала указатель
  wait4keyORmouse();

  Ar[1]->move(-100, -100);

  wait4keyORmouse();
  delete arc1; // ДОБАВИЛ ДЕЛИТ!!!

  wait4keyORmouse();

  //draw_line(300,0,50,350,0,0,0);
  //draw_arc(100,100,90,45,90,0,0,0);
  //draw_line(400,0,50,250,0,0,0);

  //draw_line(200,0,250,250,255,255,255);
  //draw_arc(100,100,80,33,180,0,255,255);
  //draw_arc(250,300,50,0,360,0,0,0);

  //wait4keyORmouse();
}