#pragma once
#include <cmath>
inline float learn(float old,bool occupied){return old+(float(occupied)-old)/60.0f;}
inline bool recommend(bool valid,bool occupied,float score,float lux,float temp,float humidity){
 return valid&&std::isfinite(lux)&&std::isfinite(temp)&&std::isfinite(humidity)&&
 lux>=0&&lux<=65535&&temp>=-40&&temp<=85&&humidity>=0&&humidity<=100&&
 lux<100&&(occupied||score>=0.35f)&&temp<30&&humidity<80;
}
