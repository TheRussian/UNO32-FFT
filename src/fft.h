#ifndef fft_lib
#define fft_lib
void init(double* tfstoreA,double* tfStoreB,int* brLookup);
void fft(double* data,double* result,double* tfstoreA,double* tfStoreB,int* brLookup);
#endif