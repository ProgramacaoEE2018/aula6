#include <stdio.h>
#include "modem.h"
#include "si4463.h"
#include "si4464.h"

int main(int argc, char ** argv) {
	SI4464 modem;

	modem.inicializa();
	modem.transmite("Mensagem");
	modem.start_recepcao();

	while (1) {
		if (modem.existe_mensagem()) {
			printf(modem.recebe_mensagem());
			modem.start_recepcao();
		}
	}
	return 0;
}