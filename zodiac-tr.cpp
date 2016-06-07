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
			"  Burcunuza ait özellikleri gösterir.\n\n"
			"         Ne zaman doğdun ? \n\n\t\tAy: ";
	cin >> month;
	
	cout << "\n\n\t\t" << "Gün: ";
		
	
	cin >> date;
	
	system("cls");
		if (month == 3 && date >= 21 || month == 4 && date <= 20 ){
			
			cout << "\t\tKoç Burcusunuz";
			cout << endl;
			cout << "\n\n\t\t\tÖzellikler :";
			cout << endl;
			cout << "Burcunuzun cinsiyeti : Erkek";
			cout << endl;
			cout << "Burcunuzun gezegeni : Mars ";
			cout << endl;
			cout << "Grup : fire";
			cout << endl;
			cout << "Burcunuzun yetenekleri : Canlilik ve hareket";
			cout << endl;
			cout << "Amacınız : Başarı ve zafer ";
			cout << endl;
			cout << "Yenmeniz gereken huyunuz : Sabırsızlık ";
			cout << endl;
			}
	else if ( month == 4 && date >= 21 || month == 5 && date <= 21 ){
	
			cout << "\t\tBoğa burcusunuz";
			cout << endl;
			cout << "\n\n\t\t\tÖzellikler :";
			cout << endl;
			cout << "Burcunuzun cinsiyeti : Dişi";
			cout << endl;
			cout << "Burcunuzun gezegeni : Venüs ";
			cout << endl;
			cout << "Grup : Toprak,negatif";
			cout << endl;
			cout << "Burcunuzun yetenekleri : Sıcakkanlı olmak ve istediğini bilmek";
			cout << endl;
			cout << "Amacınız : Mal, mülk, lüks ve büyük servet sahibi olmak";
			cout << endl;
			cout << "Yenmeniz gereken huyunuz : Alınganlık, küsmek, lüks özlemi ve bencillik";
			cout << endl;
			}
	else if ( month == 5 && date >= 22 || month == 6 && date <= 22 ){
		
		cout << "\t\tİkizler burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : Merkür";
		cout << endl;
		cout << "Grup : Hava, pozitif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Üstün zeka";
		cout << endl;
		cout << "Amacınız : Başarı ve zafer";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Çok konuşmak";
		cout << endl;
		}
	else if  ( month == 6 && date >= 23 || month == 7 && date <= 22 ){
		cout << "\t\tYengeç burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Dişi";
		cout << endl;
		cout << "Burcunuzun gezegeni : Ay";
		cout << endl;
		cout << "Grup : Su,negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Sabırlı olmak";
		cout << endl;
		cout << "Amacınız : Daima yükselmek";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Dikkatsizlik";
		cout << endl;
		}
	else if ( month == 7 && date >= 23 || month == 8 && date <= 22 ){
		cout << "\t\tAslan burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : Güneş";
		cout << endl;
		cout << "Grup : Ateş, pozitif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Plan kurma";
		cout << endl;
		cout << "Amacınız : Çok şeye kavuşmak";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Kendini beğenmek";
		cout << endl;
		}
	else if ( month == 8 && date >= 23 || month == 9 && date <= 22 ){
		cout << "\t\tBaşak burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Dişi";
		cout << endl;
		cout << "Burcunuzun gezegeni : Mars ";
		cout << endl;
		cout << "Grup : Toprak, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Disiplinli ve metodlu bir hayat";
		cout << endl;
		cout << "Amacınız : Başarı yolunda daima yükselmek";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Çekingenlik ve cesaretsizlik";
		cout << endl;
		}
	else if ( month == 9 && date >= 23 || month == 10 && date <= 22 ){
		cout << "\t\tTerazi burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : Venüs";
		cout << endl;
		cout << "Grup : Hava, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Dengeli ve ölçülü olmak";
		cout << endl;
		cout << "Amacınız : Zengin olmak, düzenli bir hayat";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Gösterişten hoşlanmak";
		cout << endl;
		}
	else if ( month == 10 && date >= 23 || month == 11 && date <= 21 ){
		cout << "\t\tAkrep burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Dişi";
		cout << endl;
		cout << "Burcunuzun gezegeni : Mars ve Pluton";
		cout << endl;
		cout << "Grup : Su, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Sezgi";
		cout << endl;
		cout << "Amacınız : Hayat boyu zenginlik";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Acımamak, ihmal etmek";
		cout << endl;
		}
	else if ( month == 11 && date >= 22 || month == 12 && date <= 21 ){
		cout << "\t\tYay burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : Jüpiter";
		cout << endl;
		cout << "Grup : Ateş, pozitif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Kendine güven";
		cout << endl;
		cout << "Amacınız : Çok gezip görmek, çok seye kavuşmak";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Başkalarını küçümsemek";
		cout << endl;
		}
	else if ( month == 12 && date >= 22 || month == 1 && date <= 21 ){
		cout << "\t\tOğlak burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Dişi";
		cout << endl;
		cout << "Burcunuzun gezegeni : Satürn";
		cout << endl;
		cout << "Grup : Toprak, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Karar ve direniş";
		cout << endl;
		cout << "Amacınız : Yükseğe ulaşıp başta kalmak";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Fazla meraklılık";
		cout << endl;
		}
	else if ( month == 1 && date >= 22 || month == 2 && date <= 19 ){
		cout << "\t\tKova burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Erkek";
		cout << endl;
		cout << "Burcunuzun gezegeni : Uranüs";
		cout << endl;
		cout << "Grup : Hava, pozitif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Sağduyu";
		cout << endl;
		cout << "Amacınız : Yükselmek, başkalarına yardım etmek";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : İhmalcilik ve paraya değer vermemek";
		cout << endl;
		}
	else if ( month == 2 && date >= 20 || month == 3 && date <= 20 ){
		cout << "\t\tBalık burcusunuz";
		cout << endl;
		cout << "\n\n\t\t\tÖzellikler :";
		cout << endl;
		cout << "Burcunuzun cinsiyeti : Dişi";
		cout << endl;
		cout << "Burcunuzun gezegeni : Neptün";
		cout << endl;
		cout << "Grup : Su, negatif";
		cout << endl;
		cout << "Burcunuzun yetenekleri : Başkalarına karşı ilgi, şefkat";
		cout << endl;
		cout << "Amacınız : Servete ve mutluluğa ulaşmak";
		cout << endl;
		cout << "Yenmeniz gereken huyunuz : Kendi değerinizi küçümsemek";
		cout << endl;
		}
		else{
			
			cout << "İncorrect input please try again ...";		
			system("PAUSE");
			system("cls");
			goto start;
			}					
			cout << "Tekrar denemek için 1 "
				"yada çıkmak için 2 tuşlayınız\n";
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
