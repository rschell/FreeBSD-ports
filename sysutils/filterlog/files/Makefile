<<<<<<< HEAD
MAINTAINER?=	coreteam@pfsense.org
=======
MAINTAINER?=	eri@pfsense.org
>>>>>>> b4c24bbd324d... Importing sysutils/filterlog from pfPorts
COMMENT?=	filterlog

PROG=           filterlog
PREFIX?=        /usr/local
BINDIR?=        ${PREFIX}/sbin
DATAMODE=       0444
INSTALL?=       /usr/bin/install

OBJS=           print-ip.o print-ip6.o print-ip6opts.o print-icmp.o print-tcp.o print-mobility.c filterlog.o

<<<<<<< HEAD
WARNS=          -Wsystem-headers -Wall -Wno-format-y2k -W \
=======
WARNS=          -Wsystem-headers -Werror -Wall -Wno-format-y2k -W \
>>>>>>> b4c24bbd324d... Importing sysutils/filterlog from pfPorts
                -Wno-unused-parameter -Wstrict-prototypes \
                -Wmissing-prototypes -Wpointer-arith -Wreturn-type \
                -Wcast-qual -Wwrite-strings -Wswitch -Wshadow \
                -Wunused-parameter -Wchar-subscripts -Winline \
                -Wnested-externs -Wredundant-decls -Wno-pointer-sign
LDD=            -lsbuf -lpcap
CFLAGS+= -O2 -pipe ${WARNS}

all: ${PROG}

${PROG}: ${OBJS}
	cc ${CFLAGS} -o ${PROG} ${OBJS} ${LDD}

install: all
	${INSTALL} ${PROG} ${BINDIR}/

clean:
	rm -f ${PROG} ${PROG}.core *.o
