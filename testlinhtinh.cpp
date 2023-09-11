#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<string>
#define PI 3.14582
#define step 1
#define step_v 0.01

void switchpage(int page)
{
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        
}

void ve(int &x1,int &y1,int &x2,int &y2,int maxX,int maxY)
{
		
    	
    		/* ve mat phang nghieng */
		line(450,275,450,625);// ve chieu cao cua mat phang nghieng
		line(100,625,450,275);//ve canh huyen cua mat phang nghieng
    	/*----------------------*/
    	/* ve o to va gia do cua no */
    	line(x1,y1,x2+13,y2+13);//canh ngan o ben phai
    	line(x1-101,y1+99,x2-88,y2+112);//canh ngan o ben trai
    	line(x1-101,y1+99,x2-50,y2-50);//canh dai o tren
    	line(x2+13,y2+13,x2-88,y2+112);// canh dai o duoi
    	line(maxX/2,maxY/2,maxX/2,maxY/2+200);// canh ben trai chua o to
    	line(maxX/2, maxY / 2, maxX, maxY / 2);//duong chua o to
    	line(0, maxY / 2+100+100, maxX, maxY / 2+100+100);// duong chua mat phang nghieng
    	/**********************/
    	/*ve rong roc*/
	    line(662,0,662,15); // ve gia do rong roc
	    line(x1+31,y1+31,632,31);// ve duong thang noi tu vat den rong roc
	    circle(662,50,35);// ve hinh tron tam (662,50) ban kinh 35
    	/*------------*/
    	
    	
}

void xe(int &pos_Car)
{    //ve theo chieu ngc chieu kim dong ho
	
	line(pos_Car+375,405,pos_Car+375,350);//canh so 1
	line(pos_Car+375,350,pos_Car+475,350);// canh so2
	line(pos_Car+475,350,pos_Car+505,380);//canh so 3
	line (pos_Car+505,380,pos_Car+505,405);// canh so4
	line (pos_Car+505,405,pos_Car+495,405);// canh so 5
	line  (pos_Car+455,405,pos_Car+430,405);// canh so 6
	line (pos_Car+375,405,pos_Car+390,405);// canh so 7
	circle(pos_Car+335+25+25+25,405,20);// ve hinh tron tam (662,50) ban kinh 20
	circle(pos_Car+400+25+25+25,405,20);// ve hinh tron tam (662,50) ban kinh 20
	



}

void vanhxe1(int &x1,int &y1,int &x2,int &y2,int &x3,int &y3,int &x,int centerY)
{
	
		line(x+410,centerY,x1,y1);//ve 3 canh cua vanh xe 
        line(x+410,centerY,x2,y2);//ve 3 canh cua vanh xe
        line(x+410,centerY,x3,y3);//ve 3 canh cua vanh xe
        
      
}

void vanhxe2(int &x1,int &y1,int &x2,int &y2,int &x3,int &y3,int &x,int centerY)
{
	
	line(x+475,centerY,x1,y1) ;
	line(x+475,centerY,x2,y2) ;
	line(x+475,centerY,x3,y3) ;
	
}

void vanhrongroc(int &x1,int &y1,int &x2,int &y2,int &x3,int &y3,int &x4,int &y4)
{
	
	line(662,50,x1,y1);
	line(662,50,x2,y2);
	line(662,50,x3,y3);
	line(662,50,x4,y4);
	
}


int main()
{ 

    // tao cua so do hoa
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight=GetSystemMetrics(SM_CYSCREEN);
    int x1=150;
	int y1=450;
	int x2=200;
	int y2=500;
	int k=500;
	char buffer[50];
	float tmp=0;
	int radius=20;// ban kinh vanh xe
	int r=35;// ban kinh rong roc
	double angle = 0;            
    int page=0;
    int n=0;
	int pos_Car=500;
    initwindow(screenwidth,screenHeight,"",-3);
	int x=500,y=400;	
	int centerX=910,centerY=405;
    int maxX = 1500; // chieu rong man hinh
    int maxY = 850; // chieu cao man hinh
    char s[50]="Loading...";

    int x11,y11,x21,y21,x31,y31;
    int x12,y12,x22,y22,y32,x32;
    int xr1,yr1,xr2,yr2,xr3,yr3,xr4,yr4;
    int Car_Color = 15 ;
    //tao giao dien khi bat dau
    	
    	if(n==0)
        {
            setcolor(WHITE);
            rectangle(550+25,320,700+25,340);
            for(int i=0; i<148; i++)
            {
                setcolor(11);
                line(551+i+25,321,551+i+25,339);
                setcolor(11);
                settextstyle(0,0,2);
                outtextxy(580,350,s);
                delay(10);
            }
            
            setcolor(11);
            settextstyle(0,0,3);
            outtextxy(359,396,const_cast<char*>("Press Any Key To Continue... "));
            getch();
            n++;
        }

   
	while(1)
    {	
  		switchpage(page);//ham xoa trang cu di
    
    //----------------- trang tri----------------------//
	
	//-------------Thong tin thanh vien nhom----------//
		setcolor(11);
		line(40,35,350,35);
		line(40,35,40,185);
		line(40,185,350,185);
		line(350,185,350,35);
		settextstyle(4,0,1);
		outtextxy(46,40,const_cast<char*>(" C++ Project - Group 3"));
		settextstyle(3,0,1);
		setcolor(12);
		outtextxy(55,70,const_cast<char*>("Trinh Quang Lam"));
		outtextxy(55,96,const_cast<char*>("Nguyen Duc Dat"));
		outtextxy(55,122,const_cast<char*>("Luu Minh Hien"));
		setcolor(YELLOW);
		outtextxy(55,148,const_cast<char*>("Topic: Physics experiment"));
	//------------------------------------------------//
	
			//------------------ Nut di chuyen ----------------//
			
			 	//-------------- Left -------------------//
			 	
			 		setcolor(10);
			 		line(600,675,700,675);
			 		line(600,675,600,725);
			 		line(600,725,700,725);
			 		line(700,725,700,675);
			 		line(625,700,675,700);
			 		line(625,700,635,710);
			 		line(625,700,635,690);
			 		
				//---------------------------------------//	 	
			 
			 	//-------------- Right ------------------//
			 	
			 		setcolor(10);
			 		line(800,675,900,675);
			 		line(800,675,800,725);
			 		line(800,725,900,725);
			 		line(900,725,900,675);
			 		line(825,700,875,700);
			 		line(875,700,865,690);
			 		line(875,700,865,710);
			 		
				//---------------------------------------//
				
				settextstyle(4,0,1);
				setcolor(YELLOW);
			 	outtextxy(610,750,const_cast<char*>("Click to move the Car!"));
			 	outtextxy(630,770,const_cast<char*>("     Enter to exit."));
			 	
			
			//-------------------------------------------------//
	
	
	//----------Thong so van toc cua vat va xe--------//
			
			setcolor(11);
			rectangle(609,126,709,221);
			settextstyle(1,0,1);
			setcolor(10);
			outtextxy(618,130,const_cast<char*>("Speed"));
			setcolor(WHITE);
			outtextxy(638,190,const_cast<char*>("m/s"));
	
	//-------------------------------------------------------//
	
	//-------------------Chu thich-------------------------//
	
	settextstyle(3,0,1);
	setcolor(WHITE);
   	line(1100,450,1100,600);
   	setcolor(15);
   	outtextxy(800,451,const_cast<char*>("F1:Change to Bright White color"));
   	setcolor(14);
   	outtextxy(800,481,const_cast<char*>("F2:Change to Light Yellow color"));
   	setcolor(13);
   	outtextxy(800,511,const_cast<char*>("F3:Change to Light Purple color"));
   	setcolor(12);
   	outtextxy(800,541,const_cast<char*>("F4:Change to Light Red color"));
   	setcolor(11);
   	outtextxy(800,571,const_cast<char*>("F5:Change to Light Aqua color"));
   	
   	
   	setcolor(10);
   	outtextxy(1150,451,const_cast<char*>("F6:Change to Light Green color"));
   	setcolor(9);
   	outtextxy(1150,481,const_cast<char*>("F7:Change to Light Blue color"));
   	setcolor(8);
   	outtextxy(1150,511,const_cast<char*>("F8:Change to Grey color"));
   	setcolor(6);
   	outtextxy(1150,541,const_cast<char*>("F9:Change to Yellow color"));
   	setcolor(3);
   	outtextxy(1150,571,const_cast<char*>("F10:Change to Aqua color"));
	//------------------------------------------------------//
	
	//-------------------------------------------------//
	


		/* thay doi vi tri cua vanh xe 1 */
    	 x11=x+410+radius*cos(angle);
		 y11=centerY+radius*sin(angle);
		 x21=x+410+radius*cos(angle+2*PI/3);
		 y21=centerY+radius*sin(angle+2*PI/3);
		 x31=x+410+radius*cos(angle+4*PI/3);
		 y31=centerY+radius*sin(angle+4*PI/3);
		 /*******/
		
		
		 /* thay doi vi tri cua vanh xe 2*/
		 
		 x12=x+475+radius*cos(angle);         //vi x,y la tam, x12 y12 chi can cho khoang cach bang r thi thuoc duong tron
		 y12=centerY+radius*sin(angle);
		 x22=x+475+radius*cos(angle+2*PI/3);
		 y22=centerY+radius*sin(angle+2*PI/3);
		 x32=x+475+radius*cos(angle+4*PI/3);
		 y32=centerY+radius*sin(angle+4*PI/3);
		 
		 

		  /*****************/
		  
		  
		  
		  /* thay doi vi tri cua vanh rong roc  */
		  
		 xr1=662+r*cos(angle);
		 yr1=50+r*sin(angle);
		 xr2=662+r*cos(angle+PI/2);
		 yr2=50+r*sin(angle+PI/2);
		 xr3=662+r*cos(angle+PI);
		 yr3=50+r*sin(angle+PI);
		 xr4=662+r*cos(angle+3*PI/2); 
		 yr4=50+r*sin(angle+3*PI/2); 
		  
		  if(GetAsyncKeyState(VK_F1))
        {
        	Car_Color=15;
        	
		}
		if(GetAsyncKeyState(VK_F2))
		{
			Car_Color=14;
		}
		if(GetAsyncKeyState(VK_F3))
		{
			Car_Color=13;
		}
		if(GetAsyncKeyState(VK_F4))
		{
			Car_Color=12;
		}
        if(GetAsyncKeyState(VK_F5))
        {
        	Car_Color=11;
		}
		if(GetAsyncKeyState(VK_F6))
		{
			Car_Color=10;
		}
		if(GetAsyncKeyState(VK_F7))
		{
			Car_Color=9;
		}
		if(GetAsyncKeyState(VK_F8))
		{
			Car_Color=8;
		}
		if(GetAsyncKeyState(VK_F9))
		{
			Car_Color=6;
		}
		if(GetAsyncKeyState(VK_F10))
		{
			Car_Color=3;
		}
		  
		  /********************/
		 /* vi tri xe o cho moi */
		 
    	setcolor(Car_Color);
    	xe(pos_Car);
    	vanhxe1(x11,y11,x21,y21,x31,y31,x,centerY);
    	vanhxe2(x12,y12,x22,y22,x32,y32,x,centerY);
    	setcolor(Car_Color);
    	vanhrongroc(xr1,yr1,xr2,yr2,xr3,yr3,xr4,yr4);
    	circle(662,50,35);  // ve lai hinh tron rong roc
    	ve(x1,y1,x2,y2,maxX,maxY);
    	line(pos_Car+410,325,662+29,30); // ve day tren oto
    	line(pos_Car+410,350,pos_Car+410,325);//ve cot doc tren o to
    	circle(pos_Car+410,325,6);//hinh tron o tren day noi voi o to
    	delay(10);
    	
    	/*------------------------*/
    	

     	page=1-page;
     	
     	int check=0;// kiem tra neu nguoi dung khong bam phim di chuyen v->0
     	if(GetAsyncKeyState(VK_LEFT))
     	   if(GetAsyncKeyState(VK_RIGHT)) 
     	   {
     	   	//neu bam ca 2 nut -> chuyen mau do & v=0
     	   	tmp=0;
     	   	setcolor(7);
			outtextxy(650,160,const_cast<char*>("0"));
			setcolor(12);
        	line(600,675,700,675);
			line(600,675,600,725);
			line(600,725,700,725);
			line(700,725,700,675);
			line(625,700,675,700);
			line(625,700,635,710);
			line(625,700,635,690);
			
			line(800,675,900,675);
			line(800,675,800,725);
			line(800,725,900,725);
			line(900,725,900,675);
			line(825,700,875,700);
			line(875,700,865,690);
			line(875,700,865,710);
			n++;
			continue;
			}
     	 
     	if(GetAsyncKeyState(VK_LEFT))
        {
			check=1;
        	setcolor(12);
        	line(600,675,700,675);
			line(600,675,600,725);
			line(600,725,700,725);
			line(700,725,700,675);
			line(625,700,675,700);
			line(625,700,635,710);
			line(625,700,635,690);
			n++;
			
			/* toc do di chuyen cua xe va toc do quay cau vanh xe*/
			if(x2-88>100)
			{
				x1-=step;
	     		y1+=step;
	     		x2-=step;
	     		y2+=step;
	     		pos_Car-=step;
	     		angle-=0.05;
     			x-=step;
     			tmp+=step_v; 
				sprintf(buffer,"%.2f",tmp); 
				setcolor(7);
				outtextxy(641,160,buffer); 
			}
			
			//canh bao
			if(x2-88==100)
			{
				setcolor(7);
				outtextxy(641,160,buffer);
				tmp=0;
				setcolor(12);
				outtextxy(616,250,const_cast<char*>(" Warning!"));
				outtextxy(563,280,const_cast<char*>("Please turn on the right!"));
				
			}
        }
        
        else
        {
        	setcolor(7);
			outtextxy(650,160,const_cast<char*>("0"));
        	setcolor(10);
			line(600,675,700,675);
			line(600,675,600,725);
			line(600,725,700,725);
			line(700,725,700,675);
			line(625,700,675,700);
			line(625,700,635,710);
			line(625,700,635,690);
		}

        if(GetAsyncKeyState(VK_RIGHT))
        {
        	check=1;
        	n++;
			setcolor(12);
            line(800,675,900,675);
			line(800,675,800,725);
			line(800,725,900,725);
			line(900,725,900,675);
			line(825,700,875,700);
			line(875,700,865,690);
			line(875,700,865,710);
			
			/* toc do di chuyen cua xe va toc do quay cua vanh xe*/
			if(x2+13<450){//dieu kien dung
				x1+=step;
		     	y1-=step;
		    	x2+=step;
		    	y2-=step;
		    	pos_Car+=step;
		        angle+=0.05;
	     	    x+=step;	 
				tmp+=step_v; 
				sprintf(buffer,"%.2f", tmp); 
				setcolor(7);
				outtextxy(641,160,buffer); 
			}
			
			//canh bao neu xe vuot qua mat phang nghieng
			if(x2+13==450)
			{
				setcolor(7);
				outtextxy(641,160,buffer);
				tmp=0;
				setcolor(12);
				outtextxy(616,250,const_cast<char*>(" Warning!"));
				outtextxy(563,280,const_cast<char*>("Please turn on the left!"));
				
			}
        }
        
        else
        {
        	//setcolor(7);
			//outtextxy(650,160,const_cast<char*>("0"));
        	setcolor(10);
			line(800,675,900,675);
			line(800,675,800,725);
			line(800,725,900,725);
			line(900,725,900,675);
			line(825,700,875,700);
			line(875,700,865,690);
			line(875,700,865,710);
			
		}
		if(GetAsyncKeyState(13) )
		 break;
		delay(1);
		if(check==0) tmp=0;
		// bien check de kiem tra neu khong bam phim di chuyen thi van toc se cap nhat ve 0
		
	}
     	
    getch();
    closegraph();
    return 0;
}
