#define ARM_MATH_CM3
#include <arm_math.h>

float32_t sig_src_arr[5]={1,2,4,2,9};
float32_t _max;
uint32_t _index;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  arm_max_f32(&sig_src_arr[0],5,&_max,&_index);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Maximum value in array:  ");
  Serial.println(_max);

}
