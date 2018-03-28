#pragma once

#include "modem.h"

class SI4463 : public Modem {
public:
	char * recebe_mensagem();
};