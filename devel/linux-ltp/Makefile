# $FreeBSD$

# Note that this port uses RPMs from openSUSE - CentOS doesn't seem
# to carry LTP packages.  For future updates, here's the openSUSE
# package site: https://build.opensuse.org/package/show/benchmark/ltp

PORTNAME=	ltp
PORTVERSION=	20190930
DISTVERSIONSUFFIX=	-1.5
CATEGORIES=	devel
MASTER_SITES=	https://download.opensuse.org/repositories/benchmark/%SUBDIR%/:DEFAULT,amd64,SOURCE
MASTER_SITE_SUBDIR=	SLE_15/x86_64/:DEFAULT,amd64 \
			SLE_15/src/:SOURCE

MAINTAINER=	trasz@FreeBSD.org
COMMENT=	Linux Test Project (openSUSE Leap 42.3)

LICENSE=	GPLv2+

ONLY_FOR_ARCHS=	amd64

USES=		linux:c7
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
