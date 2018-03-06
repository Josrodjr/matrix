

//cambiar el grosor de el putpixel, SOLO FUNCIONA 1^2, 3^2, 5^2
void putGrosor(int x, int y, int radio, unsigned char color){

  if(x < 640 && y < 480 && x > 0 && y > 0){
		while (radio >= 1){
			switch(radio){
				case 1 :
					putPixel(x, y, color);
					break;
				case 2 :
					putPixel(x+1, y, color);
					putPixel(x+1, y+1, color);
					putPixel(x+1, y-1, color);
					putPixel(x-1, y, color);
					putPixel(x-1, y-1, color);
					putPixel(x-1, y+1, color);
					putPixel(x, y+1, color);
					putPixel(x, y-1, color);
					break;
				case 3 :
					putPixel(x+2, y, color);
					putPixel(x+2, y+2, color);
					putPixel(x+2, y-2, color);
					putPixel(x-2, y, color);
					putPixel(x-2, y-2, color);
					putPixel(x-2, y+2, color);
					putPixel(x, y+2, color);
					putPixel(x, y-2, color);

					putPixel(x+1, y-2, color);
					putPixel(x+2, y-1, color);
					putPixel(x+2, y+1, color);
					putPixel(x+1, y+2, color);
					putPixel(x-1, y+2, color);
					putPixel(x-2, y+1, color);
					putPixel(x-2, y-1, color);
					putPixel(x-1, y-2, color);
			}
			radio = radio -1;
		}
  }
}





void draw_line(int x1, int y1, int x2, int y2, int radio, unsigned char color)
{
  int i,dx,dy,sdx,sdy,dxabs,dyabs,x,y,px,py;
  //diferencial en X
  dx=x2-x1;
  //diferencial en Y
  dy=y2-y1;
  dxabs=abs(dx);
  dyabs=abs(dy);
  sdx=signo(dx);
  sdy=signo(dy);
  x=dyabs>>1;
  y=dxabs>>1;
  px=x1;
  py=y1;

  //si la linea es mas horizontal que vertical
  if (dxabs>=dyabs)
  {
    for(i=0;i<dxabs;i++)
    {
      y+=dyabs;
      if (y>=dxabs)
      {
        y-=dxabs;
        py+=sdy;
      }
      px+=sdx;
	  putGrosor(px,py,radio,color);
    }
  }
  //caso de que sea mas vertical que horizontal
  else
  {
    for(i=0;i<dyabs;i++)
    {
      x+=dxabs;
      if (x>=dyabs)
      {
        x-=dyabs;
        px+=sdx;
      }
      py+=sdy;
	  putGrosor(px,py,radio,color);
    }
  }
}

//declaracion de funcion signo utilizada en el dibujar linea

int sign(int x){
	if(x > 0){
		return 1;
	}
	if (x < 0){
		return -1;
	}
	return 0;
}
