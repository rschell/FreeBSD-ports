--- components/sync_device_info/local_device_info_util_linux.cc.orig	2019-12-16 21:50:47 UTC
+++ components/sync_device_info/local_device_info_util_linux.cc
@@ -36,6 +36,23 @@ std::string GetChromeOSDeviceNameFromType() {
 std::string GetPersonalizableDeviceNameInternal() {
 #if defined(OS_CHROMEOS)
   return GetChromeOSDeviceNameFromType();
+#elif defined(OS_BSD)
+  long len = sysconf(_SC_HOST_NAME_MAX);
+
+  if (len == -1)
+    return "FreeBSD";
+
+  char *hostname = new (std::nothrow) char[len]();
+
+  if ((hostname == nullptr) || (gethostname(hostname, len) == -1)) {
+    delete[](hostname);
+    return "FreeBSD";
+  }
+
+  std::string res{hostname};
+  delete[](hostname);
+
+  return res;
 #else
   char hostname[HOST_NAME_MAX];
   if (gethostname(hostname, HOST_NAME_MAX) == 0)  // Success.
