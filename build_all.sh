#!/usr/bin/env bash

# Colors
GREEN="\033[1;32m"
NC="\033[0m"
YELLOW="\033[1;33m"
MAGENTA="\033[1;35m"

clear
echo -e "${GREEN}Compiling with GCC${NC}"
echo ""
for f in *.c; do echo "Compiling '${f}'"; gcc "${f}"; done
echo ""
echo -e "${GREEN}Compiling with Clang${NC}"
echo ""
for f in *.c; do echo "Compiling '${f}'"; clang "${f}"; done
echo ""
echo -e "${MAGENTA}Done!${NC}"
