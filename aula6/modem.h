#pragma once

class Modem {
public:
	void inicializa();
	void transmite(char *);
	void start_recepcao();

	char existe_mensagem();
	char* recebe_mensagem();
};