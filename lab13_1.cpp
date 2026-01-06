#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}
 void stat(const double A[],int N,double B[]){
    double sum = 0,sum_sq = 0,sum_GM = 1,sum_H = 0,max_val = 0, min_val=13; 
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
        sum_sq += pow(A[i],2);
        sum_GM *= A[i];
        sum_H += 1/A[i];
        if (A[i] > max_val) max_val = A[i];
        if (A[i] < min_val) min_val = A[i];
    }

    B[0] = sum/N;
    B[1] = sqrt((sum_sq/N)-pow(B[0],2));
    B[2] = pow(sum_GM,(1.0/N));
    B[3] = N/sum_H;
    B[4] = max_val;
    B[5] = min_val;
 }
