# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD$

PORTNAME=	UPnP-Inspector
PORTVERSION=	0.2.2
PORTREVISION=	1
CATEGORIES=	net python
MASTER_SITES=	http://coherence.beebits.net/download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	UPnP Device and Service analyzer

BROKEN=		unfetchable

LICENSE=	PD
LICENSE_FILE=	${WRKSRC}/LICENCE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Coherence>=0.6.4:net/py-coherence@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils concurrent autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
