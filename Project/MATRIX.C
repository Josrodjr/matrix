//Por: Jose Rodolfo Perez Garcia
//Universidad del Valle de Guatemala
//Carnet: 16056
#include <stdio.h>
#include <math.h>

#include "pixel.h"
#include "poligon.h"
#include "utility.h"
#include "matrix.h"

//modo 640x480x256
#define SVGA_MODE 0x101
#define NORMAL_MODE 0x03

void main (){
	poligono casa;
	poligono arbol;
	int letra;

	draw_house(&casa, 1);
	draw_tree(&arbol, 1);

	setVESA(SVGA_MODE);

	print_poligono(&casa, 12, 5);
	print_poligono(&arbol, 8, 10);

	//getch();

	//fill_polygon(&casa, 12, 5);

	//getch();
	//fill_polygon(&arbol, 8, 10);
	//fill_polygon(&casa, 12, 0);

	while(1){
		letra = getch();
		if(letra == 'd'){
			print_poligono(&casa, 12, 0);
			move_transformation(&casa, 5,0);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 'a'){
			print_poligono(&casa, 12, 0);
			move_transformation(&casa, -5,0);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 'w'){
			print_poligono(&casa, 12, 0);
			move_transformation(&casa, 0,-5);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 's'){
			print_poligono(&casa, 12, 0);
			move_transformation(&casa, 0,5);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 'q'){
			print_poligono(&casa, 12, 0);
			scale_transformation(&casa, 1);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 'e'){
			print_poligono(&casa, 12, 0);
			scale_transformation(&casa, -1);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 'z'){
			print_poligono(&casa, 12, 0);
			rotation_transformation(&casa, 10);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 'x'){
			print_poligono(&casa, 12, 0);
			rotation_transformation(&casa, -10);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 'r'){
			print_poligono(&casa, 12, 0);
			shear_transformation(&casa, 0.1);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 'f'){
			print_poligono(&casa, 12, 0);
			shear_transformation(&casa, -0.1);
			print_poligono(&casa, 12, 5);
		}
		if(letra == 'v'){
			fill_polygon(&casa, 12, 5);
		}


		//para el arbol

		if(letra == 'l'){
			print_poligono(&arbol, 8, 0);
			move_transformation(&arbol, 5,0);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'j'){
			print_poligono(&arbol, 8, 0);
			move_transformation(&arbol, -5,0);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'i'){
			print_poligono(&arbol, 8, 0);
			move_transformation(&arbol, 0,-5);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'k'){
			print_poligono(&arbol, 8, 0);
			move_transformation(&arbol, 0,5);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'u'){
			print_poligono(&arbol, 8, 0);
			scale_transformation(&arbol, 1);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'o'){
			print_poligono(&arbol, 8, 0);
			scale_transformation(&arbol, -1);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'n'){
			print_poligono(&arbol, 8, 0);
			rotation_transformation(&arbol, 10);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'm'){
			print_poligono(&arbol, 8, 0);
			rotation_transformation(&arbol, -10);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'y'){
			print_poligono(&arbol, 8, 0);
			shear_transformation(&arbol, 0.1);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'h'){
			print_poligono(&arbol, 8, 0);
			shear_transformation(&arbol, -0.1);
			print_poligono(&arbol, 8, 10);
		}
		if(letra == 'b'){
			fill_polygon(&arbol, 8, 10);
		}

		if(letra == 'p'){
			clear_screen();
		}

		if(letra == '.'){
			setVESA(NORMAL_MODE);
			menu();
			getch();
			setVESA(SVGA_MODE);
		}
		print_poligono(&casa, 12, 5);
		print_poligono(&arbol, 8, 10);
	}

	getch();
}
