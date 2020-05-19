#include <bits/stdc++.h>
using namespace std;

int main () {
	int contm=0,p1,p2,v1=100,v2=100,at=0,d1=0,d2=0,c11=0,c12=0,c21=0,c22=0,pa1=1,pa2=1,i1=0,i2=0,p;
	cout << "Bem vindo ao Planalto Fighters 2018! Voce deseja jogar?\n";
	char a1,a2,a3;
	cin >> a1;
	if (a1=='s') {
		//escolha do jogador 1
		while(a1=='s') {
			while(a1=='s') {
				system("cls");
				cout << "Jogador numero 1: escolha seu personagem! (digite o seu numero de eleicao):\n17-Bolsonaro\n13-Haddad\n12-Ciro\n18-Marina\n\n";
				cin >> p1;
				system("cls");
				cout << "Voce escolhe ";
				if(p1==17) {
					cout << "Bolsonaro?(s ou n)\n";
				} else if(p1==13) {
					cout << "Haddad?(s ou n)\n";
				} else if(p1==12) {
					cout << "Ciro?(s ou n)\n";
				} else if(p1==18) {
					cout << "Marina?(s ou n)\n";
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
				cout << "Jogador numero 2: escolha seu personagem! (digite o seu numero de eleicao):\n17-Bolsonaro\n13-Haddad\n12-Ciro\n18-Marina\n\n";
				cin >> p2;
				system("cls");
				cout << "Voce escolhe ";
				if(p2==17) {
					cout << "Bolsonaro?(s ou n)\n";
				} else if(p2==13) {
					cout << "Haddad?(s ou n)\n";
				} else if(p2==12) {
					cout << "Ciro?(s ou n)\n";
				} else if(p2==18) {
					cout << "Marina?(s ou n)\n";
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
				cout << "nao podem ser os mesmos personagens!\n\n";
				system("pause");
				continue;
			}
			break;
		}
		//batalha
		srand(time(NULL));
		p=rand()%2+1;
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
					cout << "Turno do jogador 1:\nPopularidade: " << v1 << "/100\n";
					//bolsonaro
					if(p1==17) {
						cout << "O que bolsonaro vai fazer?\n1-ataque básico\n2-invocação de bolsominion (cooldown: " << c11 << ")\n3-kit gay (cooldown: " << c12 << ")\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
						cout << "O que haddad vai fazer?\n1-ataque básico\n2-come pao com mortadela (cooldown: " << c11 << ")\n3-socialista de iphone (cooldown: " << c12 << ")\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
						cout << "O que marina vai fazer?\n1-ataque básico\n2-'isso ai eh machismo!' (cooldown: " << c11 << ")\n3-invocação da floresta amazônica (cooldown: " << c12 << ")\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
								system("pause");
								system("cls");
								continue;
							}
						}
					}
					//ciro
					if(p1==12) {
						cout << "O que ciro vai fazer?\n1-ataque básico\n2-socar jornalista (cooldown: " << c11 << ")\n3-reclamar do SPC (cooldown: " << c12 << ")\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
					cout << "nada acontece!\n";
					system("pause");
				} else if(p2==12 && d1>=20 && v2<=20) {
					cout << "devido a sua passiva de ciro, o jogador 2 não toma dano!\n";
					system("pause");
				} else if (i2!=0) {
					cout << "O jogador 2 estava com a imunidade ativada!\n";
					system("pause");
				} else {
					cout << "jogador 2 leva " << d1 << " de dano!\n";
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
					cout << "Turno do jogador 2:\nPopularidade: " << v2 << "/100\n";
					//bolsonaro
					if(p2==17) {
						cout << "O que bolsonaro vai fazer?\n1-ataque básico\n2-invocação de bolsominion (cooldown: " << c21 << ")\n3-kit gay (cooldown: " << c22 << ")\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
						cout << "O que haddad vai fazer?\n1-ataque básico\n2-come pao com mortadela (cooldown: " << c21 << ")\n3-socialista de iphone (cooldown: " << c22 << ")\n";
						cin >> at;
						if (at==1) {
							d2=10;
						} else if (at==2) {
							if (c21==0) {
								c21=3;
								v2=v2+10;
								d2=0;
							} else {
								system("cls");
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
						cout << "O que marina vai fazer?\n1-ataque básico\n2-'isso ai eh machismo!' (cooldown: " << c21 << ")\n3-invocação da floresta amazônica (cooldown: " << c22 << ")\n";
						cin >> at;
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
								system("pause");
								system("cls");
								continue;
							}
						}
					}
					//ciro
					if(p2==12) {
						cout << "O que ciro vai fazer?\n1-ataque básico\n2-socar jornalista (cooldown: " << c21 << ")\n3-reclamar do SPC (cooldown: " << c22 << ")\n";
						cin >> at;
						if (at==1) {
							d2=10;
						} else if (at==2) {
							if (c21==0) {
								c21=5;
								d2=20;
								v2=v2-20;
							} else {
								system("cls");
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
								cout << "Escolha outro ataque! Esse não pode ser usado por seu cooldown!\n";
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
					cout << "nada acontece!\n";
					system("pause");
				} else if(p1==12 && d2>=20 && v1<=20) {
					cout << "devido a sua passiva de ciro, o jogador 1 não toma dano!\n";
					system("pause");
				} else if (i1!=0) {
					cout << "O jogador 1 estava com a imunidade ativada!\n";
					system("pause");
				} else {
					cout << "jogador 1 leva " << d2 << " de dano!\n";
					v1=v1-d2;
					system("pause");
				}
				if (v1<=0) {
					break;
				}
			}
		}
		system("cls");
		cout << "Parabens jogador";
		if (v1>v2) {
			cout << " 1, voce venceu a eleicao!";
		} else if (v1<v2) {
			cout << " 2, voce venceu a eleicao!";
		} else {
			cout << "es 1 e 2, houve um empate!";
		}
	}
	return 0;
}
