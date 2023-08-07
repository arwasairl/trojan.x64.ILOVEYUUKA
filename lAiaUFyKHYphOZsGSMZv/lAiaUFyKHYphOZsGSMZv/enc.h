#pragma once
#include "sodium.h"
static int encrypt(const char* target_file, const char* source_file, const unsigned char key[crypto_secretstream_xchacha20poly1305_KEYBYTES]);