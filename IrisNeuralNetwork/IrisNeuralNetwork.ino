#include <MatrixMath.h>
#include <Math.h>
#include "WeightBias.h"
#include "validation.h"

// matrices temporales

mtx_type mult0[1][16]; 
mtx_type suma0[1][16]; 
mtx_type salida0[1][16]; 

mtx_type mult1[1][3]; 
mtx_type suma1[1][3]; 
mtx_type salida1[1][3]; 

// valores para testing

mtx_type test[1][4] = { 0., 0., 0., 0. }; 

int mult_val = 10; // para hacer visibles las predicciones.

int vali_pos = 10;
void setup(){  
  Serial.begin(115200);
  print_head();
  for(int i=0; i<30;i++){
    print_val(i);
    NeuralNetwork();
  }
  print_footer();
}  

void loop(){    
}

float sigmoid(float x){
  return 1.0/(exp(-x)+1.0);
}

float relu(float x){
  if( x >= 0){
    return x;
  }else{
    return 0; 
  }
}

void print_val(int vali_pos){
  Serial.print("|   ");
  for(int i=0; i < 4; i++){
    test[0][i] = validation[vali_pos][i];
    Serial.print(validation[vali_pos][i]);
    if (i < 3){
      Serial.print("   "); // para imp las espacios " , "
    }
    else{
      Serial.print("  |  ");
    } 
  }
  for(int i=0; i < 3; i++){
    Serial.print(labels[vali_pos][i]);
    if (i < 2){
      Serial.print("   "); // para imp las espacios " , "
    }
  }
  Serial.print("  |  ");
}

float NeuralNetwork(){

  // cálculo de la capa de entrada , capa 0:

  // WL0[4][16]
  // test[1][4]
  // mult0[1][16];
  Matrix.Multiply((mtx_type*)test, (mtx_type*)WL0, 1, 4, 16, (mtx_type*)mult0);

  // suma0[1][16];
  // BL0[1][16];
  Matrix.Add((mtx_type*)mult0, (mtx_type*)BL0, 1 , 16, (mtx_type*) suma0);

  // función de activación:
  // salida0[1][16];
  for(int i=0; i<16;i++){
    salida0[0][i] = relu(suma0[0][i]);
  }

  // cálculo de la capa de entrada , capa 1:

  // salida0[1][16];
  // WL1[16][3]
  // mult1[1][3];
  Matrix.Multiply((mtx_type*)salida0, (mtx_type*)WL1, 1, 16, 3, (mtx_type*)mult1);

  // suma1[1][3];
  // BL1[1][3];
  Matrix.Add((mtx_type*)mult1, (mtx_type*)BL1, 1 , 3, (mtx_type*) suma1);

  // función de activación:
  for(int i=0; i<3;i++){
    salida1[0][i] = sigmoid(suma1[0][i]);
  }

  for(int i=0; i<3;i++){
    if( i == 0){
      //Serial.print("Iris-setosa     : ");
      Serial.print(mult_val*salida1[0][i]);
      Serial.print("   ");
    }
    else if (i == 1){
      //Serial.print("Iris-versicolor : ");
      Serial.print(mult_val*salida1[0][i]);
      Serial.print("   ");
    }
    else if (i == 2){
      //Serial.print("Iris-virginica  : ");
      Serial.print(mult_val*salida1[0][i]);
      Serial.println(" |");
    }  
  }
}

void print_test(){
  for(int i=0; i<4;i++){
    Serial.print(test[0][i]);
    if (i < 3){
      Serial.print("   "); // para imp las espacios "  "
    }else{
      Serial.print("  |  ");
    }
  }
  Serial.println("");  
}
void print_head(){
  Serial.println("|------------------------------------------------------------------|");
  Serial.println("|            Welcome to Iris Neural Network, by Sandro             |");
  Serial.println("|            Labels prediction accuaracy Arduino(100%)             |");
  Serial.println("|------------------------------------------------------------------|");
  Serial.println("|          features            | real labels |    predic labels    |");
  Serial.println("|------------------------------|-------------|---------------------|");
}
void print_footer(){
  Serial.println("|------------------------------------------------------------------|");
}


