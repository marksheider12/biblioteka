#include <iostream>
using namespace std;
#include <string>
 
class shmiblioteka {
public:
	string saxeli ;
	string avtori;
	string agwera;
	double dabricxvi;
	string gatana;
	string gamtani;
	double jarima;
	string bibliotekari;

	void kaximiyvarxar() {
		cout << " saxeli: " << saxeli << " | avtori: " << avtori << endl << " agwera: "
			<< agwera << endl << " wigni - " << gatana << " | gamtani piri : " << gamtani << endl << " dabrunebis ricxvi: "
			<< dabricxvi << ".24 | jarima: " << jarima << endl << " gamcemi: " << bibliotekari;

	}



};

int main() {
	shmiblioteka wigni;
	wigni.saxeli = "metamorfoza";
	wigni.avtori = "franc kafka";
	wigni.agwera = " es nawarmoebi mogvitxrobs personajis, gregori zamzas cxovrebis shesaxeb romelic ert dges gaigvizebs da gaurkveveli mizezis gamo, gigantur mwerad gardaiqmneba ";
	wigni.gatana = "gatanilia";
	wigni.gamtani = " luka mekheshidze";
	wigni.dabricxvi = 11.04;
	wigni.jarima = 0;
	wigni.bibliotekari = "nino chxeidze";
	wigni.kaximiyvarxar();

	cout << endl<<endl<<endl;

	shmiblioteka wigni1;
	wigni.saxeli = "1Q84";
	wigni.avtori = "haruki murakami";
	wigni.agwera = "siujeti mogvitxrobs istorias aomames shesaxeb,romelic samyaroshi movlenata uchveulo ganvitarebis shemchnevas iwyebs";
	wigni.gatana = "gatanilia";
	wigni.gamtani = " kaxi kaxidze";
	wigni.dabricxvi = 17.04;
	wigni.jarima = 0;
	wigni.bibliotekari = "nino chxeidze";
	wigni.kaximiyvarxar();

	cout << endl << endl << endl;

	shmiblioteka wigni2;
	wigni.saxeli = "ucxo";
	wigni.avtori = "alber kamiu";
	wigni.agwera = "alber kamius sadebiuto romani,egzistencialuri ideebis klasikuri ilustracia";
	wigni.gatana = "gatanilia";
	wigni.gamtani = "sandro karanadze";
	wigni.dabricxvi = 20.03;
	wigni.jarima = 10;
	wigni.bibliotekari = "dato jincharadze";
	wigni.kaximiyvarxar();


	cout << endl << endl << endl;


	shmiblioteka wigni3;
	wigni.saxeli = "vigacam gugulis budes gadaufrina";
	wigni.avtori = "ken kizi";
	wigni.agwera = "romanis moqmedeba vitardeba fsiqiatriul saavadmyofoshi.mtxrobelia ert-erti pacienti,indieli bromdeni";
	wigni.gatana = "gatanilia";
	wigni.gamtani = "gio koplatadze";
	wigni.dabricxvi = 23.03;
	wigni.jarima = 5;
	wigni.bibliotekari = "dato jincharadze";
	wigni.kaximiyvarxar();

	return 0;
}