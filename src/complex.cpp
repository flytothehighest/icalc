
/**
*  May 2,2024  by ReducedRadius
  used in '/developing/i.html'
*/
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <complex.h>
#include <emscripten/emscripten.h>
#include <cstdbool>
#include <iostream>

using namespace std;
int main(){
return 0;
}

#ifdef __cplusplus
extern "C" {
#endif

double EMSCRIPTEN_KEEPALIVE tan_i_real(double a,double b){
std::complex<double> first (a,b);
return std::real(std::tan(first));
}

double EMSCRIPTEN_KEEPALIVE tan_i_imag(double a,double b){
std::complex<double> first (a,b);
return std::imag(std::tan(first));
}

double EMSCRIPTEN_KEEPALIVE sin_i_real(double a,double b){
std::complex<double> first (a,b);
return std::real(std::sin(first));
}

double EMSCRIPTEN_KEEPALIVE sin_i_imag(double a,double b){
std::complex<double> first (a,b);
return std::imag(std::sin(first));
}

double EMSCRIPTEN_KEEPALIVE cos_i_real(double a,double b){
std::complex<double> first (a,b);
return std::real(std::cos(first));
}

double EMSCRIPTEN_KEEPALIVE cos_i_imag(double a,double b){
std::complex<double> first (a,b);
return std::imag(std::cos(first));
}

double EMSCRIPTEN_KEEPALIVE ln_i_real(double a,double b){
std::complex<double> first (a,b);
return std::real(std::log(first));
}

double EMSCRIPTEN_KEEPALIVE ln_i_imag(double a,double b){
std::complex<double> first (a,b);
return std::imag(std::log(first));
}

double EMSCRIPTEN_KEEPALIVE asin_i_real(double a,double b){
std::complex<double> first (a,b);
return std::real(std::asin(first));
}

double EMSCRIPTEN_KEEPALIVE asin_i_imag(double a,double b){
std::complex<double> first (a,b);
return std::imag(std::asin(first));
}
double EMSCRIPTEN_KEEPALIVE acos_i_real(double a,double b){
std::complex<double> first (a,b);
return std::real(std::acos(first));
}

double EMSCRIPTEN_KEEPALIVE acos_i_imag(double a,double b){
std::complex<double> first (a,b);
return std::imag(std::acos(first));
}

double EMSCRIPTEN_KEEPALIVE atan_i_real(double a,double b){
std::complex<double> first (a,b);
return std::real(std::atan(first));
}

double EMSCRIPTEN_KEEPALIVE atan_i_imag(double a,double b){
std::complex<double> first (a,b);
return std::imag(std::atan(first));
}

double EMSCRIPTEN_KEEPALIVE arg(double a,double b){
std::complex<double> first (a,b);
return std::arg(first);
}

double EMSCRIPTEN_KEEPALIVE imgreal_pow_real(double a,double b,double c){
std::complex<double> first (a,b);
return std::real(std::pow(first,c));
}

double EMSCRIPTEN_KEEPALIVE imgreal_pow_imag(double a,double b,double c){
std::complex<double> first (a,b);
return std::imag(std::pow(first,c));
}

double EMSCRIPTEN_KEEPALIVE imgimg_pow_real(double a,double b,double c,double d){
std::complex<double> first (a,b);
std::complex<double> second (c,d);
return std::real(std::pow(first,second));
}

double EMSCRIPTEN_KEEPALIVE imgimg_pow_imag(double a,double b,double c,double d){
std::complex<double> first (a,b);
std::complex<double> second (c,d);
return std::imag(std::pow(first,second));
}

double EMSCRIPTEN_KEEPALIVE realimg_pow_real(double a,double b,double c){
std::complex<double> first (a,b);
return std::real(std::pow(c,first));
}

double EMSCRIPTEN_KEEPALIVE realimg_pow_imag(double a,double b,double c){
std::complex<double> first (a,b);
return std::imag(std::pow(c,first));
}


double EMSCRIPTEN_KEEPALIVE i_sqrt_real(double a,double b){
std::complex<double> first (a,b);
return std::real(std::sqrt(first));
}

double EMSCRIPTEN_KEEPALIVE i_sqrt_imag(double a,double b){
std::complex<double> first (a,b);
return std::imag(std::sqrt(first));
}

double EMSCRIPTEN_KEEPALIVE modulus(double a,double b){
std::complex<double> first (a,b);
return std::abs(first);
}

double EMSCRIPTEN_KEEPALIVE arg_imag(double a,double b){
std::complex<double> first (a,b);
return std::arg(first);
}

double EMSCRIPTEN_KEEPALIVE baseLog_realB_imgU_real(double a,double b,double c){
std::complex<double> first (a,b);
return std::real(std::log(first) / log(c));
}

double EMSCRIPTEN_KEEPALIVE baseLog_realB_imgU_imag(double a,double b,double c){
std::complex<double> first (a,b);
return std::imag(std::log(first) / log(c));
}


double EMSCRIPTEN_KEEPALIVE baseLog_imgB_imgU_real(double a,double b,double c,double d){
std::complex<double> first (a,b);
std::complex<double> second (c,d);
return std::real(std::log(first) /std::log(second));
}

double EMSCRIPTEN_KEEPALIVE baseLog_imgB_imgU_imag(double a,double b,double c,double d){
std::complex<double> first (a,b);
std::complex<double> second (c,d);
return std::imag(std::log(first) /std::log(second));
}

double EMSCRIPTEN_KEEPALIVE divide_img_part(double a,double b,double c,double d){
std::complex<double> first(a,b);
std::complex<double> second(c,d);
return std::imag(first /second );
}
double EMSCRIPTEN_KEEPALIVE divide_real_part(double a,double b,double c,double d){
std::complex<double> first(a,b);
std::complex<double> second(c,d);
return std::real(first /second );
}

double EMSCRIPTEN_KEEPALIVE multp_img_part(double a,double b,double c,double d){
std::complex<double> first(a,b);
std::complex<double> second(c,d);
return std::imag(first * second );
}
double EMSCRIPTEN_KEEPALIVE multp_real_part(double a,double b,double c,double d){
std::complex<double> first(a,b);
std::complex<double> second(c,d);
return std::real(first * second );
}

double EMSCRIPTEN_KEEPALIVE proj_origin_target_real(double a,double b,double c,double d){
std::complex<double> first(a,b);
std::complex<double> second(c,d);
return std::real(((first*second)/std::abs(second))*(second/std::abs(second)));
}
double EMSCRIPTEN_KEEPALIVE proj_origin_target_imag(double a,double b,double c,double d){
std::complex<double> first(a,b);
std::complex<double> second(c,d);
return std::imag(((first*second)/std::abs(second))*(second/std::abs(second)));
}





#ifdef __cplusplus
}
#endif