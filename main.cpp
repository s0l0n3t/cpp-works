#include <iostream>
#include <locale.h>
using namespace std;


int main(){
	int date,month;
	int press;
	
	setlocale(LC_ALL,"Turkish");
	
	start:
	system("cls");
	cout << "\t\t\n\n"
			"  Burcunuza ait �zellikleri g�sterir.\n\n"
			"         Ne zaman do�dun ? \n\n\t\tAy: ";
	cin >> month;
	
	cout << "\n\n\t\t" << "G�n: ";
		
	
	cin >> date;
	
	system("cls");
		if (month == 3 && date >= 21 || month == 4 && date <= 20 ){
			
			cout << "\t\tKo� Burcusunuz";
			cout << endl;
			cout << "\n\n\t\t\t�zellikler :";
			cout << endl;
			cout << "Burcunuzun cinsiyeti : Erkek";
			cout << endl;
			cout << "Burcunuzun gezegeni : Mars ";
			cout << endl;
			cout << "Grup : fire";
			cout << endl;
			cout << "Burcunuzun yetenekleri : Canlilik ve hareket";
			cout << endl;
			cout << "Amac�n�z : Ba�ar� ve zafer ";
			cout << endl;
			cout << "Yenmeniz gereken huyunuz : Sab�rs�zl�k ";
			cout << endl;
			}
	else if ( month == 4 && date >= 21 || month == 5 && date <= 21 ){
	
			cout << "\t\tBo�a burcusunuz";
			cout << endl;
			cout << "\n\n\t\t\t�zellikler :";
			cout << endl;
			cout << "Burcunuzun cinsiyeti : Di�i";
			cout << endl;
			cout << "Burcunuzun gezegeni : Ven�s ";
			cout << endl;
			cout << "Grup : Toprak,negatif";
			cout << endl;
			cout << "Burcunuzun yetenekleri : S�cakkanl� olmak ve istedi�ini bilmek";
			cout << endl;
			cout << "Amac�n�z : Mal, m�lk, l�ks ve b�y�k servet sahibi olmak";
			cout << endl;
			cout << "Yenmeniz gereken huyunuz : Al�nganl�k, k�smek, l�ks �zlemi ve bencillik";
			cout << endl;
			}
	else if ( month == 5 && date >= 22 || month == 6 && date <= 22 ){
		
		cout << "\t\t�kizler burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : Merk�r";
		cout << endl;
		cout << "Grup : Hava, pozitif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : �st�n zeka";
		cout << endl;
		cout << "Amac�n�z : Ba�ar� ve zafer";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : �ok konu�mak";
		cout << endl;
		}
	else if  ( month == 6 && date >= 23 || month == 7 && date <= 22 ){
		cout << "\t\tYenge� burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Di�i";
		cout << endl;
		cout << "Burcunuzun gezegeni : Ay";
		cout << endl;
		cout << "Grup : Su,negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Sab�rl� olmak";
		cout << endl;
		cout << "Amac�n�z : Daima y�kselmek";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Dikkatsizlik";
		cout << endl;
		}
	else if ( month == 7 && date >= 23 || month == 8 && date <= 22 ){
		cout << "\t\tAslan burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : G�ne�";
		cout << endl;
		cout << "Grup : Ate�, pozitif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Plan kurma";
		cout << endl;
		cout << "Amac�n�z : �ok �eye kavu�mak";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Kendini be�enmek";
		cout << endl;
		}
	else if ( month == 8 && date >= 23 || month == 9 && date <= 22 ){
		cout << "\t\tBa�ak burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Di�i";
		cout << endl;
		cout << "Burcunuzun gezegeni : Mars ";
		cout << endl;
		cout << "Grup : Toprak, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Disiplinli ve metodlu bir hayat";
		cout << endl;
		cout << "Amac�n�z : Ba�ar� yolunda daima y�kselmek";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : �ekingenlik ve cesaretsizlik";
		cout << endl;
		}
	else if ( month == 9 && date >= 23 || month == 10 && date <= 22 ){
		cout << "\t\tTerazi burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : Ven�s";
		cout << endl;
		cout << "Grup : Hava, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Dengeli ve �l��l� olmak";
		cout << endl;
		cout << "Amac�n�z : Zengin olmak, d�zenli bir hayat";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : G�steri�ten ho�lanmak";
		cout << endl;
		}
	else if ( month == 10 && date >= 23 || month == 11 && date <= 21 ){
		cout << "\t\tAkrep burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Di�i";
		cout << endl;
		cout << "Burcunuzun gezegeni : Mars ve Pluton";
		cout << endl;
		cout << "Grup : Su, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Sezgi";
		cout << endl;
		cout << "Amac�n�z : Hayat boyu zenginlik";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Ac�mamak, ihmal etmek";
		cout << endl;
		}
	else if ( month == 11 && date >= 22 || month == 12 && date <= 21 ){
		cout << "\t\tYay burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : J�piter";
		cout << endl;
		cout << "Grup : Ate�, pozitif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Kendine g�ven";
		cout << endl;
		cout << "Amac�n�z : �ok gezip g�rmek, �ok seye kavu�mak";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Ba�kalar�n� k���msemek";
		cout << endl;
		}
	else if ( month == 12 && date >= 22 || month == 1 && date <= 21 ){
		cout << "\t\tO�lak burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Di�i";
		cout << endl;
		cout << "Burcunuzun gezegeni : Sat�rn";
		cout << endl;
		cout << "Grup : Toprak, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Karar ve direni�";
		cout << endl;
		cout << "Amac�n�z : Y�kse�e ula��p ba�ta kalmak";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Fazla merakl�l�k";
		cout << endl;
		}
	else if ( month == 1 && date >= 22 || month == 2 && date <= 19 ){
		cout << "\t\tKova burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : Uran�s";
		cout << endl;
		cout << "Grup : Hava, pozitif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Sa�duyu";
		cout << endl;
		cout << "Amac�n�z : Y�kselmek, ba�kalar�na yard�m etmek";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : �hmalcilik ve paraya de�er vermemek";
		cout << endl;
		}
	else if ( month == 2 && date >= 20 || month == 3 && date <= 20 ){
		cout << "\t\tBal�k burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\t�zellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Di�i";
		cout << endl;
		cout << "Burcunuzun gezegeni : Nept�n";
		cout << endl;
		cout << "Grup : Su, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Ba�kalar�na kar�� ilgi, �efkat";
		cout << endl;
		cout << "Amac�n�z : Servete ve mutlulu�a ula�mak";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Kendi de�erinizi k���msemek";
		cout << endl;
		}
		else{
			
			cout << "�ncorrect input please try again ...";		
			system("PAUSE");
			system("cls");
			goto start;
			}					
			cout << "Tekrar denemek i�in 1 "
				"yada ��kmak i�in 2 tu�lay�n�z\n";
		cin >> press;
		if (press == 1){
		goto start;
						}
		if (press == 2){
		cout << "\n";
						}
			return 0;
		cout << endl;
		
		

}

