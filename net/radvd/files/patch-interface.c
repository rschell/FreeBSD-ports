--- interface.c.orig	2019-09-08 20:25:44 UTC
+++ interface.c
@@ -164,11 +164,6 @@ int check_iface(struct Interface *iface)
 		flog(LOG_INFO, "using Mobile IPv6 extensions");
 	}
 
-	/* Check forwarding on interface */
-	if (check_ip6_iface_forwarding(iface->props.name) < 1) {
-		flog(LOG_WARNING, "IPv6 forwarding on interface seems to be disabled, but continuing anyway");
-	}
-
 	struct AdvPrefix *prefix = iface->AdvPrefixList;
 	while (!MIPv6 && prefix) {
 		if (prefix->AdvRouterAddr) {
