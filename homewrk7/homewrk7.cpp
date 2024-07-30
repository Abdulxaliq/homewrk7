#include <iostream>

using namespace std;

int main()
{
	//char(i) = 0;
	//int a = 0;
	//while (true)
	//{
	//	cout << a <<"-"<< char(i) << endl;
	//	if (a == 250) break;
	//	a++;
	//	i++;
	//} while (a == 250) break;


	//int ulduz = 0;
	//int n = 0;
	//cout << "ne qeder ulduz isteyirsiniz: ";
	//cin >> ulduz;
	//while (n < ulduz)
	//{
	//	cout << "*";
	//	n++;
	//}
	//cout <<endl;
	//return 0;

	//int num1 = 2;
	//while (num1 <= 50)
	//{
	//	if (num1%2==0)
	//	cout << num1 <<endl;
	//	num1++;
	//}
	//cout << endl;
	//return 0;


	//int eded1 = 0;
	//int eded2 = 0;
	//int cut = 0;
	//int tek = 1;
	//cout << "1ci araliqi daxil edin: ";
	//cin >> eded1;
	//cout << "2ci araliqi daxil edin: ";
	//cin >> eded2;
	//while (eded1<=eded2)
	//{
	//	if (eded1 % 2 == 0)
	//		cut += eded1;
	//	else 
	//	{
	//			tek *= eded1;
	//	}
	//	eded1++;
	//}
	//cout << "cut ededin cemi: " << cut << endl;
	//cout << "tek ededin hasili: " << tek << endl;


	//int num3 = 1;
	//while (num3 <= 100)
	//{
	//	if (num3%3==0)
	//	cout << num3 <<endl;
	//	num3++;
	//}
	//cout << endl;
	//return 0;


	//double eded3 = 0;
	//int quvvet = 0;
	//double result = 1;
	//cout << "ededi daxil edin: ";
	//cin >> eded3;
	//cout << "ededin quvvetini daxil edin: ";
	//cin >> quvvet;
	//while (quvvet > 0)
	//{
	//	result *= eded3;
	//	quvvet--;
	//}
	//cout << "Cavab: " << result;
	//return 0;

	//int number = 0;
	//int digitsay = 0;
	//int digitcem = 0;
	//int temp = 0;

	//cout << "Eded daxil edin: ";
	//cin >> number;

	//if (number < 0) number = -number;

	//while (temp > 0)
	//{
	//	digitcem += temp % 10;
	//	digitsay++;
	//	temp /= 10;
	//}
	//
	//if (number == 0)
	//{
	//	digitsay = 1;
	//	digitcem = 0;
	//}
	//cout << "Reqemlerin sayi: " << digitsay << endl;
	//cout << "Reqemlerin cemi: " << digitcem << endl;

	//return 0;


	//int number2 = 0;
	//int reserved = 0;
	//int digit = 0;

	//cout << "Eded daxil edin: ";
	//cin >> number2;
	//
	//int org_num = number2;

	//while (number2 != 0)
	//{
	//	digit = number2 % 10;
	//	reserved = reserved * 10 + digit;
	//	number2 /= 10;
	//}

	//if (org_num == 0) reserved = 0;

	//cout << "Ededin tersi = " << reserved << endl;


	//int number3 = 0;
	//int originalnumber;
	//int digit2 = 0;

	//cout << "Tam eded daxil edin: ";
	//cin >> number3;

	//originalnumber = number3;

	//while (number3 != 0) digit2 = number3 % 10;
	//{
	//	if (digit2 != 0 && originalnumber % digit2 == 0)
	//	{
	//		cout << digit2 << " ";
	//	}
	//	number3 /= 10;
	//}
	//cout << endl;

	//return 0;

	//int number4 = 0;
	//int bolme = 2;
	//bool sade = true;

	//cout << "Tam eded daxil edin: ";
	//cin >> number4;

	//if (number4 <= 1) sade = false;
	//else if (number4 == 2) sade = true;
	//else {
	//	while (bolme * bolme <= number4)
	//	{
	//		if (number4 % bolme == 0) {
	//			sade = false;
	//			break;
	//		}
	//		bolme++;
	//	}
	//}
	//if (sade) cout << number4 << " sade ededdir" << endl;
	//else cout << number4 << " sade eded deyil!!!";


	//int number5 = 0;
	//int birincireqem = -1;
	//bool eynireqem = false;
	//cout << "Tam eded daxil edin: ";
	//cin >> number5;

	//int tmp_number = number5;

	//if (number5 < 0) number5 = -number5;

	//while (tmp_number > 0)
	//{
	//	int sonuncureqem = tmp_number % 10;
	//	tmp_number /= 10;

	//	if (sonuncureqem == birincireqem)
	//	{
	//		eynireqem = true;
	//		break;
	//	}
	//	birincireqem = sonuncureqem;
	//}
	//if (eynireqem)cout << "Reqemler ard-ardadir" << endl;
	//else cout << "Reqemler ard-arda deyil!" << endl;

	//return 0;




	//int number6 = 0;
	//bool art_sira = true;
	//cout << "Eded daxil edin: ";
	//cin >> number6;
	//int tmp_number2 = number6;
	//if (tmp_number2 < 0) tmp_number2 = -tmp_number2;
	//int ilkreqem = tmp_number2 % 10;
	//tmp_number2 /= 10;
	//while (tmp_number2 > 0)
	//{
	//	int sonreqem = tmp_number2 % 10;
	//	tmp_number2 /= 10;

	//	if (sonreqem >= ilkreqem)
	//	{
	//		art_sira = false;
	//		break;
	//	}
	//	ilkreqem = sonreqem;
	//}
	//if (art_sira)cout << "artan siradir" << endl;
	//else cout << "artan sira deyil." << endl;
	//return 0;


	//int low = 1; 
	//int high = 100;
	//int texmin = 0;
	//char cavab = 0;

	//cout << "Aglinizda bir eded tutun (1 ile 100 arasinda). Komputer bu ededi tapmaga calisacaq." << endl;
	//cout << "Ededi tapmaq ucun kompyutere komek edin. Her bir texminin duzgun olub olmadigini cavablayin." << endl;

	//while (low <= high) {
	//	texmin = low + (high - low) / 2; 

	//	cout << texmin << ". Bu dogru ededdirmi? (duzgun-d / kicik-k / boyuk-b) ";
	//	cin >> cavab;

	//	if (cavab == 'd') {
	//		cout << "Komputer dogru ededi tapdi: " << texmin << "!" << endl;
	//		break;
	//	}
	//	else if (cavab == 'b') { 
	//		low = texmin + 1; 
	//	}
	//	else if (cavab == 'k') { 
	//		high = texmin - 1; 
	//	}
	//	else {
	//		cout << "Yanlis cavab, zehmet olmasa 'd', 'k', ve ya 'b' daxil edin." << endl;
	//	}
	//}

	//if (low > high) {
	//	cout << "Komputer duzgun eded tapmadi duzgun eded heqiqeten secilib?" << endl;
	//}

	//return 0;
}
