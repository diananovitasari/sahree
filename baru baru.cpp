/*/*Tugas4 Prak.Prodas*/
/*Membuat program Looping Aritmatika.*/
/*Filza Hisana*/
/*NIM: 20051397018*/

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <math.h>



using namespace std;
int main() 
{
	char nama[30],pilihan, yt;
	string line =   "_______________________________________________________________";
	
    cout << line << endl << endl;
    cout <<         "                   Menampilkan hasil operasi                   " << endl;
    cout <<         "                   -  A R I T M A T I K A  -                  " << endl;
    cout << line << endl << endl;
    cout << endl;
    cout << "  Masukan Nama Kamu : ";
    cin  >> nama ;
    cout << "\n\n  Hai " << nama << ", selamat datang diprogram operasi aritmatika";
    awal:
    cout << endl<< endl;
    cout << "  Pilihlah salah satu program berikut : " << endl ;
    cout << "    1. Menampilkan Jumlah suku ke-6 \n    2. Menghitung Jumlah deret \n    3. Menampilkan Tabel Perkalian \n    4. Menampilkan Segitiga angka \n\n";
    cout << endl;
    cout << "  Masukkam pilihan kamu : ";
    cin  >> pilihan;  
    cout << endl << line <<endl <<endl;
    
    switch (pilihan)
    {
    	case '1':
    	{
    		int i,bil,jumlahsuku,totalsuku;
			cout << "\n  6 suku pertama  \n\n";
			
			for (i = 1; i <= 6; i ++)
			{
				bil = pow(i, 3);
				if (i < 6 )
				{
					cout << "  ";
					cout << i  << "^3 = "<< bil << " || ";
				}
				if (i ==6 )
				{
					cout << "  ";
					cout << i <<"^3 = " << bil << endl;
				}	
				jumlahsuku += bil;
				totalsuku = jumlahsuku -3 ;	
			}
			
			cout << endl << "  Jumlah 6 suku pertama adalah : "<< totalsuku << endl<< endl;
			break;
		}
    	
    	case '2':
    	{
    		int i,jumlahderet,totalderet;
			cout << "\n  Menghitung jumlah deret \n\n";
			
			for ( i = 3; i <= 15; i += 4 )
			{
				if (i<15)
				{
					cout << "  ";
					cout << i << ", ";
				}
				
				if ( i == 15)
				{
					cout << "  ";
					cout << i << endl<< endl;
				}	
				jumlahderet+=i;
				totalderet = jumlahderet;	
			}
			cout << "  Jumlah Deret: " << totalderet << endl;
			break;
		}
			
		case '3':
		{
			int i,j;
			cout<<"\n  Tabel Perkalian \n\n";
			
			for (  i=1; i <=10; i++ )
			{
				cout << setw (5) << i;
				for ( j=1; j<=10; j++ )
				cout << setw (5) << i * j;
				cout << endl;
			}
			break;
		}
		
		case '4':
		{
			int n,i,j;
			n = 5 ;  
			cout << "\n  Segitiga 5 angka \n\n";   
			for ( i=1; i<= n; i++ )  
			{
				for ( j=1; j<=i; j++ )  
				{
					cout << "  ";
					cout << j ;  
				}  
				cout << " \n";  
			}  
	
			for ( i=n-1; i>=1; i-- )  
			{ 
				for  ( j=1; j<=i; j++ )  
				{
					cout << "  ";
					cout << j; 
				}  
				cout << " \n";  
			}  
			break;
		}

	}
	
	cout << line << endl << endl;
	cout << "  Ingin melanjutkan program? " << endl << "  [ Y / T ] : " ;
	cin  >> yt;
	if (yt == 'Y' || yt == 'y') goto awal;if (yt =='T'|| yt == 't') goto akhir;
	akhir:
	cout << "		Terimakasih Sudah Berkunjung \n";
	cout << line;
	return 0;
	
}
