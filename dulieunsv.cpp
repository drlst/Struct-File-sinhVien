#include <iostream>
#include <fstream>

using namespace std;

struct sinhVien{

	char tenSv[20];

	char diaChi[20];

	string email;

	double diemTB;
	
};

void nhap1sv(sinhVien &sv1){
	
	fflush(stdin);
	
	cout<<"\nnhap ten sinh vien: ";

	gets(sv1.tenSv);

	fflush(stdin);

	cout<<"nhap dia chi: "; gets(sv1.diaChi);
	
	fflush(stdin);
	
	cout<<"nhap Email : ";cin>>sv1.email;
	
	fflush(stdin);
	
	cout<<"nhap diem trung binh : ";cin>>sv1.diemTB;
	
	fflush(stdin);
}

void nhapDS(sinhVien a[], int n){

	for(int i=0; i<n; i++){

		nhap1sv(a[i]);

	}
}

void insvra(sinhVien a[], int n){
	for(int i=0; i<20;i++){
	
		cout<<" * ";	}

	for(int i=0; i<n ; i++){
		
			cout<<"\nTen sinh vien: "<<a[i].tenSv<<endl;
			
			cout<<"Dia chi: "<<a[i].diaChi<<endl;
				
			cout<<"Email: "<<a[i].email<<endl;
			
			cout<<"Diem trung binh: "<<a[i].diemTB<<endl;
				
		}
} 
int main(){

	sinhVien a [1000];

	int n;
 	
	cout<<"nhap so luong sinh vien: ";cin>>n;
	
	nhapDS(a, n);
	
	cout<<"\n\t\tDS sinh vien: "<<endl;
	// ham in ra sinh vien
	insvra(a,n);
	//ghi sinh vien diem > 8 vao file
	
	ofstream ghiFile;
	
	ghiFile.open("KETQUA4.txt ", ios_base::out);
	
	for(int i=0; i<n ; i++){
		
		if(a[i].diemTB>8){
		
			ghiFile<<"\nTen sinh vien: "<<a[i].tenSv<<endl;
			
			ghiFile<<"Dia chi: "<<a[i].diaChi<<endl;
				
			ghiFile<<"Email: "<<a[i].email<<endl;
			
			ghiFile<<"Diem trung binh: "<<a[i].diemTB<<endl;
	
		}
	}
	
	ghiFile.close();
	
	//  ghi thong tin sinh vien vao file
	
	ofstream GhiFile;
	
	GhiFile.open("INPUT4.txt ", ios_base::out);
	
	for(int i=0; i<n ; i++){
		
			GhiFile<<"\nTên sinh viên: "<<a[i].tenSv<<endl;
			
			GhiFile<<"Dia chi: "<<a[i].diaChi<<endl;
				
			GhiFile<<"Email: "<<a[i].email<<endl;
			
			GhiFile<<"Diem trung binh: "<<a[i].diemTB<<endl;
				
		}
	GhiFile.close();
//for(int i = 0;i < n;i++){
//        cout<<"%20s%5s%5d%10f%10f%10f%10f\n", a[i].tenSv,a[i].diaChi, a[i].email, a[i].diemTB );
//    }

	return 0;
}
