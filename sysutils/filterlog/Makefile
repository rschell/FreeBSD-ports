PORTNAME=	filterlog
PORTVERSION=	0.1
<<<<<<< HEAD
PORTREVISION=	6
=======
>>>>>>> b4c24bbd324d... Importing sysutils/filterlog from pfPorts
CATEGORIES=	sysutils
MASTER_SITES=	# empty
DISTFILES=	# none
EXTRACT_ONLY=	# empty

<<<<<<< HEAD
MAINTAINER=	coreteam@pfsense.org
=======
MAINTAINER=	eri@pfsense.org
>>>>>>> b4c24bbd324d... Importing sysutils/filterlog from pfPorts
COMMENT=	filterlog

WHERE=		sbin
PLIST_FILES=    ${WHERE}/${PORTNAME}

do-extract:
	mkdir -p ${WRKSRC}
	cp -r ${FILESDIR}/* ${WRKSRC}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/${WHERE}/

.include <bsd.port.mk>
