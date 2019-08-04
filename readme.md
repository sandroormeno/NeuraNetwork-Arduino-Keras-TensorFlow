
# Neural Network  Arduino-Keras-TensorFlow

Siempre me encuentro en la búsqueda de métodos didácticos  que pueda ayudar a entender los procesos que involucran rendes neuronales. La metodología propuesta por [David Castillo Alvarado](https://github.com/DavidCastilloAlvarado/Arduino_-_keras_MLP) me permite desenredar los conceptos fundamentales que intervienen en esta tecnología.

__Andrew Ng__ comenta, después de  la explicación de _Gradient descent_, que para algunos, incluyéndome, podría ser muy difícil entender estos conceptos;  pero los actuales frameworks de machine learning  ya tienen solucionados estos algoritmos, y que, en todo caso, menos entendimiento  no impide poder usarlos. Esto es muy bueno, para un acercamiento epidérmico a esta tecnología y facilita la resolución de problemas. Un modelo en _Keras_ oculta la mayoría de estos algoritmos engorrosos favoreciendo la oportunidad de poder implementar y resolver problemas con redes neuronales.

Pero, desde luego, si es importante conocerlos y entenderlo bien si queremos implementarlos en otros sistemas, como pueden ser los micro-controladores. En esta oportunidad nos concentraremos en la explicación del proceso de hacer una predicción,  lo que en términos técnicos de denomina: _Foward Pass_: que es, simplemente,  pasar por la función de activación nuestras sumas ponderadas para cada capa de nuestra red neuronal.

>``y = f(Wx+B)``

Nuestras sumas ponderadas es el resultado de multiplicar a nuestros valores de entrada a los Pesos y sumarle el valor de Bias. __Y__ es la predicción  y __X__  representa los valores de entrada.

En un proceso de Forward  Pass estos valores de __W__(pesos) y __B__(Bias)  serán encontrados en los pasos siguiente : _Backward Pass_ y _Gradient descent_. 

En esta explicación desarrollaremos todo el proceso en un modelo en Keras, para poder encontrar los __Pesos__(W) y __Bias o sesgos__(B). En este caso _Keras_ nos ocultará favorablemente los algoritmos;  pero nos proporcionará la información necesaria para poder reconstruir el _Foward Pass_, en otro entornos de programación: en este caso un micro-controlador, En el cual tenemos que habilitar el algoritmo manualmente.

_Tensorflow_ estará  trabajando debajo de Keras , que muy convenientemente usaremos  y es muy recomendable para iniciarse en el aprendizaje de redes neuronales. Además, existe Una versión optimizada de tensorflow (_TF lite_) para micro-controladores de 32-bits, que ya tienen versiones comerciales (_SparkFun Edge_). Pero en nuestro caso, no usaremos esta librería e implementaremos nuestros algoritmos con los recursos que nos permiten trabajar en micro-controladores de 8bit y Arduino. De esta manera podremos tener una experiencia en la implementación  de redes neuronales  y acercamiento al corazón de machine learning.

Entonces haremos unas predicciones en una implementación de _Forward Pass_ en Arduino con los pesos de un modelo red neuronal  entrenada  en _Keras_. Para ello usaremos el ampliamente conocido set de datos de _IRIS_. Esto nos permitirá desarrollar un modelo simple y tener una cantidad limitada de Pesos(W) y sesgos (Bias) considerando lo limitado de memoria dinámica en los micro-controladores que podemos usar.

Finalmente haremos una comparación de los resultados tanto los encontrados en Arduino como los de Keras.
En esta experiencia abórdatenos los siguientes procesos:

1.	Encontrar e imprimir los Pesos y Sesgos en _Keras_ y guardarlos en formato reconocible por _Arduino_.
2.	Implementar capas de _Perceptrones_ en Arduino (_Foward  Pass_) .
3.	Implementar _funciones de activación_ en Arduino.
4.	Usar la librería _MatrixMath_ para Arduino.

Para el desarrollo del código en Arduino he usado una versión con un __ATMega 644p__ (con 4k de SRAM). Las variables globales y locales usan casi 2k de memoria dinámica, por lo que _NO_ es recomendable usar un Arduino Uno, Nano o Minipro. Pero si es posible desarrollar esta experiencia en un __Arduino Leonardo, Micro, Mega o DUE.__

![Atmega644p](https://raw.githubusercontent.com/sandroormeno/sim800_google_navegador/master/Li-ion.jpg)




```python

```
