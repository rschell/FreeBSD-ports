# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	minify
PORTVERSION=	2.6.1
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc www

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Go minifiers for web formats

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=		go:modules

GO_TARGET=	./cmd/${GH_PROJECT}

PLIST_FILES=	bin/minify

GH_ACCOUNT=	tdewolff
GH_TUPLE=	dustin:go-humanize:v1.0.0:dustin_go_humanize/vendor/github.com/dustin/go-humanize \
		fsnotify:fsnotify:v1.4.7:fsnotify_fsnotify/vendor/github.com/fsnotify/fsnotify \
		golang:sys:52ab431:golang_sys/vendor/golang.org/x/sys \
		matryer:try:9ac251b:matryer_try/vendor/github.com/matryer/try \
		spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
		tdewolff:parse:v2.3.14:tdewolff_parse/vendor/github.com/tdewolff/parse/v2 \
		tdewolff:test:v1.0.5:tdewolff_test/vendor/github.com/tdewolff/test
USE_GITHUB=	yes

.include <bsd.port.mk>
