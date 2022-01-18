#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void randData(double *,int,int);
void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 6, M = 8;
	double data[N][M] = {};
	double sum1[N] = {};
	double sum2[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
    showData(dPtr,N,M);
}

void randData(double *x,int N,int M){
    for(int i = 0; i < N*M; i++){
        x[i] = (double) rand() / (double) RAND_MAX;
        cout << x[i] << " ";
    }
}

void showData(double *x,int N,int M){
    cout << fixed << setprecision(2);
    for(int i = 0; i < N*M; i++){
        cout << x[i];
        if(M-i % M == 1) cout << endl;
        else cout << " ";
    }
}
