/******************************************
* Teht„v„: Harjoitus 15B
* Tekij„: Joni Kukko
* PVM: 08.10.2013
* Kuvaus:
*	T„SS„ TEHTŽVŽSSŽ ON KŽYTETTŽVŽ C-kielen primitiivisi„ merkkitaulukoita!
*
*	Tee ohjelma, joka kysyy k„ytt„j„lt„ 17 merkki„ pitk„n merkkijonon (ei v„lily„ntej„). 
*	a) Ohjelma tulostaa merkkijonon k„„nteisess„ j„rjestyksess„ n„yt„lle 
*	(tulostus tyyppi„ "cout << mjono1[4];" jne) 
*	b) Ohjelma k„„nt„„ annetun merkkijonon toiseen merkkijonoon ja 
*	tulostaa sen n„yt„lle (tulostus tyyppi„ "cout << mjono2;") 
*	c) merkkijono voi olla kuinka pitk„ tahansa (max 100 kirjainta). 
*	Sy„tetyn merkkijonon pituutta ei saa laskea mill„„n kirjastofunktiolla (esim. lenght tms.) 
*	Ohjelma tutkii onko annettu merkkijono palindromi ja ilmoittaa sen k„ytt„j„lle. 
*	V„lily„nnit jonossa ovat sallittuja.
* 
*	K„ytt„j„ sy„tt„„ jonon: ABC_Kissa_kavelee ohjelma tulostaa: eelevak_assiK_CBA
******************************************/

#include <iostream> 

int main() {

	char merkkijono[18] = "";

	std::cout << "Anna 17 merkki„ pitk„ merkkijono." << std::endl;
	std::cin >> merkkijono;

	for(int i = 16; i >= 0; i--){
		std::cout << merkkijono[i];
	}
	std::cout << std::endl;


}
  
  