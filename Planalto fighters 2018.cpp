#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

int main () {
	int contm=0,p1,p2,v1=100,v2=100,at=0,d1=0,d2=0,c11=0,c12=0,c21=0,c22=0,pa1=1,pa2=1,i1=0,i2=0,p;
	HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(a, 6);
	cout << "    _______________________" << endl;
	cout << " // ----------------------- \\\\" << endl;
	cout << "||";
	
	HANDLE b = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(b, 0);
	cout << "     ";
	
	HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(c, FOREGROUND_BLUE | BACKGROUND_GREEN);
	cout << "PLANALTO FIGHTERS";
	
	HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(d, 6);
	cout << "     ||" << endl;
	cout << " \\\\ _______________________ //" << endl;
	cout << "    -----------------------";
	cout << endl;
	
	HANDLE e = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(e, 7);
	cout << endl;
	cout << "           _  _" << endl << "          | || |" << endl << "          | || |" << endl;
	cout << "          | || |" << endl << "          | || |" << endl;
	cout << "   ----   | || | --------" << endl;
	cout << "  ------  | || |  ------" << endl;
	cout << " -------- | || |   ----" << endl;
	cout << endl;
	
	HANDLE f = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(f, FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN);
	cout << "O ano eh 2018, ano de eleicao, o Planalto esta te esperando, porem, voce" << endl << "deve derrotar seus inimigos para vencer as eleicoes e finalmente se sentar " << endl << "na cadeira presidencial!!!" << endl;
	cout << endl;
	
	HANDLE g = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(f, FOREGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN);
	cout << "Deseja iniciar o jogo? (s/n)\n";
	char a1, a2, a3;
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(g, 7);
	cin >> a1;
	system("cls");
	if (a1=='s') {
		//escolha do jogador 1
		while(a1=='s') {
			while(a1=='s') {
				system("cls");
				HANDLE i = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(i, 159);	
				cout << "Jogador numero 1:\n\n";
				cout << "Escolha seu personagem! (digite o numero de seu candidato):\n\n";
				HANDLE j = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(j, 234);
				cout << "17-Bolsonaro\n\n";
				HANDLE k = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(k, 71);
				cout << "13-Haddad\n\n";
				HANDLE l = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(l, 158);
				cout << "12-Ciro\n\n";
				HANDLE m = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(m, 95);
				cout << "18-Marina\n\n\n";
				HANDLE n = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(n, 159);
				cout << "Qual sera o candidato selecionado? ";
				HANDLE nn = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(nn, 7);
				cin >> p1;
				system("cls");
				cout << "Voce escolhe ";
				if(p1==17) {
					HANDLE o = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(o, 234);
					cout << "Bolsonaro";
					HANDLE p = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(p, 7);
					cout << " ?\n\n";
					HANDLE q = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(q, 143);
					cout << "Ataque basico:";
					HANDLE r = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(r, 7);
					cout << " Bolsonaro Mita!!! | -15 DANO | COOLDOWN: 0\n\n";
					HANDLE s = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(s, 143);
					cout << "Ataque especial 1:";
					HANDLE t = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(t, 7); 
					cout << " Invasao de bolsominions | IMUNIDADE DE 1 TURNO | COOLDOWN: 3\n\n";
					HANDLE u = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(u, 143);
					cout << "Ataque especial 2:";
					HANDLE v = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(v, 7); 
					cout << " Falar do Kit Gay | -20 DANO | COOLDOWN: 5\n\n";
					HANDLE w = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(w, 143);
					cout << "Passiva:"; 
					HANDLE x = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(x, 7);
					cout << " EU  SOU  I N B R O X A V E L | +25% MAIS DANO | QUANDO POPULARIDADE <= 25\n\n";
					HANDLE z = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(z, 159);
					cout << "Deseja escolher? (s/n)";
					HANDLE zz = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(zz, 7);
				} else if(p1==13) {
					HANDLE o = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(o, 71);
					cout << "Haddad";
					HANDLE p = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(p, 7);
					cout << " ?\n\n";
					HANDLE q = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(q, 143);
					cout << "Ataque basico:";
					HANDLE r = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(r, 7);
					cout << " Visita intima no Lula | -10 DANO | COOLDOWN: 0\n\n";
					HANDLE s = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(s, 143);
					cout << "Ataque especial 1:";
					HANDLE t = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(t, 7); 
					cout << " Comer pao com mortadela | +10 POPULARIDADE | COOLDOWN: 3\n\n";
					HANDLE u = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(u, 143);
					cout << "Ataque especial 2:";
					HANDLE v = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(v, 7); 
					cout << " Socialista de Iphone | DEVOLVE DANO CAUSADO NO TURNO ANTERIOR | COOLDOWN: 3\n\n";
					HANDLE w = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(w, 143);
					cout << "Passiva:"; 
					HANDLE x = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(x, 7);
					cout << " Reproduzir fake news | +50 POPULARIDADE | QUANDO POPULARIDADE <= 10\n\n";
					HANDLE z = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(z, 159);
					cout << "Deseja escolher? (s/n)";
					HANDLE zz = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(zz, 7);
				} else if(p1==12) {
					HANDLE o = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(o, 158);
					cout << "Ciro";
					HANDLE p = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(p, 7);
					cout << " ?\n\n";
					HANDLE q = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(q, 143);
					cout << "Ataque basico:";
					HANDLE r = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(r, 7);
					cout << " 'Olha eh muito simples', 2+2 = 5 | -10 DANO | COOLDOWN: 0\n\n";
					HANDLE s = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(s, 143);
					cout << "Ataque especial 1:";
					HANDLE t = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(t, 7); 
					cout << " Socar jornalista | -20 POPULARIDADE E -20 DANO| COOLDOWN: 5\n\n";
					HANDLE u = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(u, 143);
					cout << "Ataque especial 2:";
					HANDLE v = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(v, 7); 
					cout << " Tirar todo mundo do SPC | +10 POPULARIDADE | COOLDOWN: 4\n\n";
					HANDLE w = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(w, 143);
					cout << "Passiva:"; 
					HANDLE x = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(x, 7);
					cout << " 'Nonsense Coerente' | ATAQUES <= 15 NAO ATINGEM | QUANDO POPULARIDADE <= 20\n\n";
					HANDLE z = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(z, 159);
					cout << "Deseja escolher? (s/n)";
					HANDLE zz = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(zz, 7);
				} else if(p1==18) {
					HANDLE o = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(o, 95);
					cout << "Marina";
					HANDLE p = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(p, 7);
					cout << " ?\n\n";
					HANDLE q = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(q, 143);
					cout << "Ataque basico:";
					HANDLE r = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(r, 7);
					cout << " Citar Amazonia em qualquer discurso | -10 DANO | COOLDOWN: 0\n\n";
					HANDLE s = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(s, 143);
					cout << "Ataque especial 1:";
					HANDLE t = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(t, 7); 
					cout << " 'Isso eh machismo!' | IMUNIDADE POR 1 TURNO| COOLDOWN: 2\n\n";
					HANDLE u = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(u, 143);
					cout << "Ataque especial 2:";
					HANDLE v = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(v, 7); 
					cout << " Invocar a floresta Amazonica | IMUNIDADE POR 1 TURNO E -10 DANO| COOLDOWN: 6\n\n";
					HANDLE w = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(w, 143);
					cout << "Passiva:"; 
					HANDLE x = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(x, 7);
					cout << " Ser repetitiva em todo discurso | QUANDO USA ATAQUE BASICO 5 VEZES AUMENTA O DANO EM 5 (-15 DANO)  | QUANDO USO DE ATAQUES BASICOS = 5\n\n";
					HANDLE z = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(z, 159);
					cout << "Deseja escolher? (s/n)";
					HANDLE zz = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(zz, 7);
				} else {
					continue;
				}
				cin >> a2;
				if (a2=='s') {
					break;
				}
			}
			while(a1=='s') {
				//escolha do jogador 2
				system("cls");
				HANDLE i = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(i, 159);	
				cout << "Jogador numero 2:\n\n";
				cout << "Escolha seu personagem! (digite o numero de seu candidato):\n\n";
				HANDLE j = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(j, 234);
				cout << "17-Bolsonaro\n\n";
				HANDLE k = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(k, 71);
				cout << "13-Haddad\n\n";
				HANDLE l = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(l, 158);
				cout << "12-Ciro\n\n";
				HANDLE m = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(m, 95);
				cout << "18-Marina\n\n\n";
				HANDLE n = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(n, 159);
				cout << "Qual sera o candidato selecionado? ";
				HANDLE nn = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(nn, 7);
				cin >> p2;
				system("cls");
				cout << "Voce escolhe ";
				if(p2==17) {
					HANDLE o = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(o, 234);
					cout << "Bolsonaro";
					HANDLE p = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(p, 7);
					cout << " ?\n\n";
					HANDLE q = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(q, 143);
					cout << "Ataque basico:";
					HANDLE r = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(r, 7);
					cout << " Bolsonaro Mita!!! | -15 DANO | COOLDOWN: 0\n\n";
					HANDLE s = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(s, 143);
					cout << "Ataque especial 1:";
					HANDLE t = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(t, 7); 
					cout << " Invasao de bolsominions | IMUNIDADE DE 1 TURNO | COOLDOWN: 3\n\n";
					HANDLE u = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(u, 143);
					cout << "Ataque especial 2:";
					HANDLE v = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(v, 7); 
					cout << " Falar do Kit Gay | -20 DANO | COOLDOWN: 5\n\n";
					HANDLE w = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(w, 143);
					cout << "Passiva:"; 
					HANDLE x = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(x, 7);
					cout << " EU  SOU  I N B R O X A V E L | +25% MAIS DANO | QUANDO POPULARIDADE <= 25\n\n";
					HANDLE z = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(z, 159);
					cout << "Deseja escolher? (s/n)";
					HANDLE zz = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(zz, 7);
				} else if(p2==13) {
					HANDLE o = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(o, 71);
					cout << "Haddad";
					HANDLE p = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(p, 7);
					cout << " ?\n\n";
					HANDLE q = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(q, 143);
					cout << "Ataque basico:";
					HANDLE r = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(r, 7);
					cout << " Visita intima no Lula | -10 DANO | COOLDOWN: 0\n\n";
					HANDLE s = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(s, 143);
					cout << "Ataque especial 1:";
					HANDLE t = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(t, 7); 
					cout << " Comer pao com mortadela | +10 POPULARIDADE | COOLDOWN: 3\n\n";
					HANDLE u = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(u, 143);
					cout << "Ataque especial 2:";
					HANDLE v = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(v, 7); 
					cout << " Socialista de Iphone | DEVOLVE DANO CAUSADO NO TURNO ANTERIOR | COOLDOWN: 3\n\n";
					HANDLE w = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(w, 143);
					cout << "Passiva:"; 
					HANDLE x = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(x, 7);
					cout << " Reproduzir fake news | +50 POPULARIDADE | QUANDO POPULARIDADE <= 10\n\n";
					HANDLE z = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(z, 159);
					cout << "Deseja escolher? (s/n)";
					HANDLE zz = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(zz, 7);
				} else if(p2==12) {
					HANDLE o = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(o, 158);
					cout << "Ciro";
					HANDLE p = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(p, 7);
					cout << " ?\n\n";
					HANDLE q = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(q, 143);
					cout << "Ataque basico:";
					HANDLE r = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(r, 7);
					cout << " 'Olha eh muito simples', 2+2 = 5 | -10 DANO | COOLDOWN: 0\n\n";
					HANDLE s = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(s, 143);
					cout << "Ataque especial 1:";
					HANDLE t = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(t, 7); 
					cout << " Socar jornalista | -20 POPULARIDADE E -20 DANO| COOLDOWN: 5\n\n";
					HANDLE u = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(u, 143);
					cout << "Ataque especial 2:";
					HANDLE v = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(v, 7); 
					cout << " Tirar todo mundo do SPC | +10 POPULARIDADE | COOLDOWN: 4\n\n";
					HANDLE w = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(w, 143);
					cout << "Passiva:"; 
					HANDLE x = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(x, 7);
					cout << " 'Nonsense Coerente' | ATAQUES <= 15 NAO ATINGEM | QUANDO POPULARIDADE <= 20\n\n";
					HANDLE z = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(z, 159);
					cout << "Deseja escolher? (s/n)";
					HANDLE zz = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(zz, 7);
				} else if(p2==18) {
					HANDLE o = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(o, 95);
					cout << "Marina";
					HANDLE p = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(p, 7);
					cout << " ?\n\n";
					HANDLE q = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(q, 143);
					cout << "Ataque basico:";
					HANDLE r = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(r, 7);
					cout << " Citar Amazonia em qualquer discurso | -10 DANO | COOLDOWN: 0\n\n";
					HANDLE s = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(s, 143);
					cout << "Ataque especial 1:";
					HANDLE t = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(t, 7); 
					cout << " 'Isso eh machismo!' | IMUNIDADE POR 1 TURNO| COOLDOWN: 2\n\n";
					HANDLE u = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(u, 143);
					cout << "Ataque especial 2:";
					HANDLE v = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(v, 7); 
					cout << " Invocar a floresta Amazonica | IMUNIDADE POR 1 TURNO E -10 DANO| COOLDOWN: 6\n\n";
					HANDLE w = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(w, 143);
					cout << "Passiva:"; 
					HANDLE x = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(x, 7);
					cout << " Ser repetitiva em todo discurso | QUANDO USA ATAQUE BASICO 5 VEZES AUMENTA O DANO EM 5 (-15 DANO)  | QUANDO USO DE ATAQUES BASICOS = 5\n\n";
					HANDLE z = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(z, 159);
					cout << "Deseja escolher? (s/n)";
					HANDLE zz = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(zz, 7);
				} else {
					continue;
				}
				cin >> a3;
				if (a3=='s') {
					break;
				}
			}
			if(p1==p2) {
				system("cls");
				HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(a, 159);
				cout << "Escolha outro candidato, nao podem ser os mesmos!\n\n";
				HANDLE b = GetStdHandle( STD_OUTPUT_HANDLE );
				SetConsoleTextAttribute(b, 7);
				system("pause");
				continue;
			}
			break;
		}
		//batalha
		srand(time(NULL));
		system("cls");
		HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
		SetConsoleTextAttribute(a, 159);
		cout << "SORTEIO PARA QUEM INICIARA O TURNO!!!\n\n";
		HANDLE b = GetStdHandle( STD_OUTPUT_HANDLE );
		SetConsoleTextAttribute(b, 7);
		cout << "...\n\n";
		int p;
		p=rand()%2+1;
		HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
		SetConsoleTextAttribute(c, 159);
		cout << "PARABENS JOGADOR " << p << ", VOCE IRA INICIAR O TURNO, PREPARE-SE PARA JOGAR!\n\n";
		HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
		SetConsoleTextAttribute(d, 7);
		system("pause");
		system("cls");
		for (int turnos=1; turnos<40; turnos++) {
			system("cls");
			if(p==1) {
				p++;
				if (c11!=0) {
					c11--;
				}
				if (c12!=0) {
					c12--;
				}
				if (i1!=0) {
					i1--;
				}
				while(a1=='s') {
					HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(a, 249);
					cout << "TURNO DO JOGADOR 1:\n\n";
					HANDLE b = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(b, 207);
					cout << "Popularidade: " << v1 << "/100\n\n";
					//bolsonaro
					if(p1==17) {
						HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(a, 234);
						cout << "O que Bolsonaro vai fazer?\n\n";
						HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(c, 127);
						cout <<"1- BOLSONARO MITA!!!\n\n";
						cout << "2- INVOCACAO DE BOLSOMINION (cooldown: " << c11 << ")\n\n";
						cout << "3- FALAR DO KIT GAY (cooldown: " << c12 << ")\n\n";
						HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(d, 7);
						cin >> at;
						if (at==1) {
							d1=15;
						} else if (at==2) {
							if (c11==0) {
								c11=3;
								i1++;
								d1=0;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse não pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						} else if (at==3) {
							if (c12==0) {
								c12=5;
								d1=20;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						}
						if (v1<=25) { //passiva
							d1=d1+(d1/4);
						}
					}
					//haddad
					if(p1==13) {
						HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(a, 71);
						cout << "O que Haddad vai fazer?\n\n";
						HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(c, 127);
						cout << "1- VISITA INTIMA NO LULA\n\n";
						cout << "2- COMER PAO COM MORTADELA (cooldown: " << c11 << ")\n\n";
						cout << "3- SOCIALISTA DE IPHONE (cooldown: " << c12 << ")\n\n";
						HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(d, 7);
						cin >> at;
						if (at==1) {
							d1=10;
						} else if (at==2) {
							if (c11==0) {
								c11=3;
								v1=v1+10;
								d1=0;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						} else if (at==3) {
							if (c12==0) {
								c12=3;
								d1=d2;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						}
						if (v1<=10 && pa1==1) {
							pa1--;
							v1=v1+50;
						}
					}
					//marina
					if(p1==18) {
						HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(a, 95);
						cout << "O que Marina vai fazer?\n\n";
						HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(c, 127);
						cout << "1- CITAR AMAZONIA EM QUALQUER DISCURSO\n\n";
						cout << "2- ISSO EH MACHISMO! (cooldown: " << c11 << ")\n\n";
						cout << "3- INVOCAR FLORESTA AMAZONICA (cooldown: " << c12 << ")\n\n";
						HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(d, 7);
						cin >> at;
						if (at==1) {
							if (contm==5) {
								d1=20;
							} else {
								d1=10;
								contm++;
							}
						} else if (at==2) {
							if (c11==0) {
								c11=2;
								d1=0;
								i1++;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						} else if (at==3) {
							if (c12==0) {
								c12=6;
								i1++;
								d1=10;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						}
					}
					//ciro
					if(p1==12) {
						HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(a, 95);
						cout << "O que Ciro vai fazer?\n\n";
						HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(c, 127);
						cout << "1- OLHA, EH MUITO SIMPLES, 2+2=5\n\n";
						cout << "2- SOCAR JORNALISTA (cooldown: " << c11 << ")\n\n";
						cout << "3- TIRAR TODO MUNDO DO SPC (cooldown: " << c12 << ")\n\n";
						HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(d, 7);
						cin >> at;
						if (at==1) {
							d1=10;
						} else if (at==2) {
							if (c11==0) {
								c11=5;
								d1=20;
								v1=v1-20;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						} else if (at==3) {
							if (c12==0) {
								c12=4;
								v1=v1+10;
								d1=0;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						}
					}
					break;
				}
				//aplicação de dano
				system("cls");
				if (d1==0) {
					HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(a, 159);
					cout << "Voce usou sua passiva!\n\n";
					HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(d, 7);
					system("pause");
				} else if(p2==12 && d1>=20 && v2<=20) {
					HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(a, 159);
					cout << "A passiva de ciro impede o seu ataque!\n\n";
					HANDLE b = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(b, 7);
					system("pause");
				} else if (i2!=0) {
					HANDLE e = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(e, 159);
					cout << "O jogador 2 estava com a imunidade ativada!\n\n";
					HANDLE f = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(f, 7);
					system("pause");
				} else {
					HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(c, 159);
					cout << "Jogador 2 leva " << d1 << " de dano!\n\n";
					HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(d, 7);
					v2=v2-d1;
					system("pause");
				}
				if (v2<=0) {
					break;
				}
			} else {
				while(a1=='s') {
					p--;
					if (c21!=0) {
						c21--;
					}
					if (c22!=0) {
						c22--;
					}
					if (i2!=0) {
						i2--;
					}
					HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(a, 249);
					cout << "TURNO DO JOGADOR 2:\n\n";
					HANDLE b = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(b, 207);
					cout << "Popularidade: " << v1 << "/100\n\n";
					//bolsonaro
					if(p2==17) {
						HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(a, 234);
						cout << "O que Bolsonaro vai fazer?\n\n";
						HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(c, 127);
						cout <<"1- BOLSONARO MITA!!!\n\n";
						cout << "2- INVOCACAO DE BOLSOMINION (cooldown: " << c11 << ")\n\n";
						cout << "3- FALAR DO KIT GAY (cooldown: " << c12 << ")\n\n";
						HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(d, 7);						
						cin >> at;
						if (at==1) {
							d2=15;
						} else if (at==2) {
							if (c21==0) {
								c21=3;
								i2++;
								d2=0;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						} else if (at==3) {
							if (c22==0) {
								c22=5;
								d2=20;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						}
						if (v2<=25) { //passiva
							d2=d2+(d2/4);
						}
					}
					//haddad
					if(p2==13) {
						HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(a, 71);
						cout << "O que Haddad vai fazer?\n\n";
						HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(c, 127);
						cout << "1- VISITA INTIMA NO LULA\n\n";
						cout << "2- COMER PAO COM MORTADELA (cooldown: " << c11 << ")\n\n";
						cout << "3- SOCIALISTA DE IPHONE (cooldown: " << c12 << ")\n\n";
						HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(d, 7);						cin >> at;
						if (at==1) {
							d2=10;
						} else if (at==2) {
							if (c21==0) {
								c21=3;
								v2=v2+10;
								d2=0;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						} else if (at==3) {
							if (c22==0) {
								c22=3;
								d2=d1;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						}
						if (v2<=10 && pa2==1) {
							pa2--;
							v2=v2+50;
						}
					}
					//marina
					if(p2==18) {
						HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(a, 95);
						cout << "O que Marina vai fazer?\n\n";
						HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(c, 127);
						cout << "1- CITAR AMAZONIA EM QUALQUER DISCURSO\n\n";
						cout << "2- ISSO EH MACHISMO! (cooldown: " << c11 << ")\n\n";
						cout << "3- INVOCAR FLORESTA AMAZONICA (cooldown: " << c12 << ")\n\n";
						HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(d, 7);						cin >> at;
						if (at==1) {
							if (contm==5) {
								d2=20;
							} else {
								d2=10;
								contm++;
							}
						} else if (at==2) {
							if (c21==0) {
								c21=2;
								d2=0;
								i2++;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						} else if (at==3) {
							if (c22==0) {
								c22=6;
								i2++;
								d2=10;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						}
					}
					//ciro
					if(p2==12) {
						HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(a, 95);
						cout << "O que Ciro vai fazer?\n\n";
						HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(c, 127);
						cout << "1- OLHA, EH MUITO SIMPLES, 2+2=5\n\n";
						cout << "2- SOCAR JORNALISTA (cooldown: " << c11 << ")\n\n";
						cout << "3- TIRAR TODO MUNDO DO SPC (cooldown: " << c12 << ")\n\n";
						HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
						SetConsoleTextAttribute(d, 7);						cin >> at;
						if (at==1) {
							d2=10;
						} else if (at==2) {
							if (c21==0) {
								c21=5;
								d2=20;
								v2=v2-20;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						} else if (at==3) {
							if (c22==0) {
								c22=4;
								v2=v2+10;
								d2=0;
							} else {
								system("cls");
								HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(c, 159);
								cout << "Escolha outro ataque! Esse nao pode ser usado, espere o cooldown zerar!\n\n";
								HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
								SetConsoleTextAttribute(d, 7);
								system("pause");
								system("cls");
								continue;
							}
						}
					}
					break;
				}
				//aplicação de dano
				system("cls");
				if (d2==0) {
					HANDLE c = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(c, 159);
					cout << "Você usou sua passiva!\n\n";
					HANDLE d = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(d, 7);
					system("pause");
				} else if(p1==12 && d2>=20 && v1<=20) {
					HANDLE a = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(a, 159);
					cout << "A passiva de ciro impede o seu ataque!\n\n";
					HANDLE b = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(b, 7);
					system("pause");
				} else if (i1!=0) {
					HANDLE e = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(e, 159);
					cout << "O jogador 1 estava com a imunidade ativada!\n\n";
					HANDLE f = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(f, 7);
					system("pause");
				} else {
					HANDLE g = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(g, 159);
					cout << "Jogador 1 leva " << d2 << " de dano!\n\n";
					v1=v1-d2;
					HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
					SetConsoleTextAttribute(h, 7);
					system("pause");
				}
				if (v1<=0) {
					break;
				}
			}
		}
		system("cls");
		HANDLE y = GetStdHandle( STD_OUTPUT_HANDLE );
		SetConsoleTextAttribute(y, 7);
		cout <<  " ______     _                                                          \n";                       
		cout << "|  __  |   | |             __       \\      //   ______    ______      \n";
		cout << "| |  | |   | |           //  \\      \\    //   | _____   |  __  |     \n";
		cout << "| |__| |   | |          //    \\      \\  //    | |       | |  | |     \n";
		cout << "|  ____|   | |         //______\\      \\//     |  __     | |__| |     \n";
		cout << "| |        | |        //        \\      ||      |  __     |  __  |     \n";
		cout << "| |        | |       //          \\     ||      | |       | |  \ \     \n";
		cout << "| |        | |__    //            \\    ||      | _____   | |   \ \    \n";
        cout << "|_|        |____|  //              \\   ||      | ______  |_|    \_\   \n";
        if (v1>v2) {
			cout << "   ____      \n";
			cout << "  |___ |     \n";
			cout << "     | |     \n";
			cout << "     | |     \n";
			cout << "     | |     \n";
			cout << "   __| |__   \n";
			cout << "  |_______|  \n";
			cout << "\n";
			cout << "    \\                  //                         _      \n";
			cout << "     \\                //                         | |     \n";
			cout << "      \\      /\      //   ______      ___    _   | |     \n";
			cout << "       \\    //\\    //   |__  __|    |   \  | |  | |     \n";
			cout << "        \\  //  \\  //      |  |      | |\ \ | |  |_|     \n";
			cout << "         \\//    \\//      _|  |_     | | \ \| |   _      \n";
			cout << "          \/      \/      |______|    |_|  \___|  |_|     \n";
		} else if (v1<v2) {
			cout << "  _______   \n";
			cout << " |  ___  |  \n";
			cout << " |_|   | |  \n";
			cout << "  _____| |  \n";
			cout << " |  _____|  \n";
			cout << " | |        \n";
			cout << " | |_____   \n";
			cout << " |_______|  \n";
			cout << "\n";
			cout << "    \\                  //                         _      \n";
			cout << "     \\                //                         | |     \n";
			cout << "      \\      /\      //   ______      ___    _   | |     \n";
			cout << "       \\    //\\    //   |__  __|    |   \  | |  | |     \n";
			cout << "        \\  //  \\  //      |  |      | |\ \ | |  |_|     \n";
			cout << "         \\//    \\//      _|  |_     | | \ \| |   _      \n";
			cout << "          \/      \/      |______|    |_|  \___|  |_|     \n";
		} else {
			cout << "EMPATE!!!!";
		}
	}
	return 0;
}
