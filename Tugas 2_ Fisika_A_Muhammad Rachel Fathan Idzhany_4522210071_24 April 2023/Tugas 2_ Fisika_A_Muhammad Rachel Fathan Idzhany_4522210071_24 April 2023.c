#include <stdio.h>
#include <math.h>

#define g71 9.8
#define phi71 3.14

int main(){
    float tm71, sudut71, radian71, VoX71, VoY71, r71, V71, TMX71, HMX71;
  
  printf (">>>>>>>>>>>>>>> FISIKA 2D 3D <<<<<<<<<<<<<<<\n\n");
  printf ("Masukkan besar sudut Elevasi (Ɵ) : ");
  scanf ("%f", &sudut71);
  printf ("Masukkan Kecepatan awal (m/s)    : ");
  scanf ("%f", &V71);
  printf ("\n");

  tm71 = 0;

  radian71 = sudut71 * phi71 / 180;

  VoX71 = V71 * cos(radian71);
  VoY71 = V71 * sin(radian71);

  TMX71 = VoY71 / g71;
  HMX71 = pow(VoY71,2) / (2 * g71);

  r71 = VoX71 * TMX71;

  printf("================> HASIL <===================\n");
  printf("Kecepatan awal Horizontal : %f m/s\n", VoX71);
  printf("Kecepatan awal Vertikal   : %f m/s\n", VoY71);
  printf("Waktu ke puncak MAX       : %f s\n", TMX71);
  printf("Ketinggian MAX            : %f m\n", HMX71); 
  printf("Jarak Tempuh              : %f m\n", r71);
  printf("\n");

  printf("Kecepatan horizontal (Vx) dari awal bergerak hingga jatuh (pada t awal, tm , t akhir)\n");
  printf("Kecepatan Horizontal pada t : %f , s : %f\n", tm71, VoX71);
  if (tm71 < TMX71)
  {
    printf("Kecepatan Horizontal pada t : %f , s : %f\n", TMX71, VoX71);
  }
  else{
    printf("Kecepatan Horizontal pada t : %f , s : %f\n", tm71, VoX71);
  }
  printf("Kecepatan Horizontal pada t : %f , s : %f\n", tm71 + TMX71, VoX71);
  printf("\n");

  printf("Kecepatan vertikal (Vy) dari awal bergerak hingga jatuh (pada t awal, tm , t akhir)\n");
  printf("Kecepatan Vertikal pada t : %f , s : %f\n", tm71, VoY71 - g71 * tm71);
  if (tm71 < TMX71)
  {
    printf("Kecepatan Vertikal pada t : %f , s : %f\n", TMX71, 0.0);
  }
  else{
    printf("Kecepatan Vertikal pada t : %f , s : %f\n", tm71, -g71 * (tm71 - TMX71));
  }
  printf("Kecepatan Vertikal pada t : %f , s : %f\n", tm71 + TMX71, -g71 * (tm71 + TMX71));

}