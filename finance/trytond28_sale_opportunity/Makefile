# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD$

PORTNAME=	trytond28_sale_opportunity
PORTVERSION=	2.8.2
PORTREVISION=	2
CATEGORIES=	finance python
MASTER_SITES=	CHEESESHOP \
		http://downloads-cdn.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_sale_opportunity-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Sale Opportunity Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_sale>=2.8.1:finance/trytond28_sale

CONFLICTS=	trytond_sale_opportunity-2.[46].*

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
