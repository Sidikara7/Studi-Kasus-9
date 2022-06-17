using namespace std;
#include "class.h"

void Array1dkeMatrik::input_data(){
    cout<<"Masukkan Banyak Data Buku : ";
    cin>>byk_data;
    getchar();
    cout << "\n";
    for (int i=0;i<byk_data*3;i++) {
      cout << "Jenis Buku : ";
      getline(cin,arr[i]);
      i++;
      cout << "Judul      : ";
      getline(cin,arr[i]);
      i++;
      cout << "Penulis    : ";
      getline(cin,arr[i]);
      cout << "\n";
    }
}