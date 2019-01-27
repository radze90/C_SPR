WARNFLAGS = -W -Wall -Wextra -Werror
OPTFLAGS =  -O3 -std=c11
CFLAGS += $(WARNFLAGS) $(OPTFLAGS)

# Linken

debug2: CFLAGS += -D DEBUG
debug2: ver2


ver2: CFLAGS += -I./awesome2 
ver2: awesome

ver3: CFLAGS += -I./awesome3
ver3: awesome

main: hello.c bye.c

error:

error_new:

macro:

multi:

.PHONY: clean
clean:
	$(RM) awesome bye error error_new hello macro main multi 
