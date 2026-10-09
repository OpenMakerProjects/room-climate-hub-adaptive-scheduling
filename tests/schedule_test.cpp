#include "../firmware/schedule.h"
#include <cassert>
#include <iostream>
int main(){
 float s=0;for(int i=0;i<60;i++)s=learn(s,true);assert(s>0.6&&s<0.7);
 assert(recommend(true,false,s,20,22,40));assert(!recommend(true,false,s,150,22,40));
 assert(!recommend(false,true,s,20,22,40));assert(!recommend(true,true,s,20,32,40));
 assert(!recommend(true,true,s,20,22,90));assert(!recommend(true,true,s,NAN,22,40));
 for(int i=0;i<600;i++)s=learn(s,false);assert(s<0.001);
 std::cout<<"learning, absence decay, lux/climate/invalid gating passed\n";
}
