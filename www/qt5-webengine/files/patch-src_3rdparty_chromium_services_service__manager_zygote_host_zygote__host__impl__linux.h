--- src/3rdparty/chromium/services/service_manager/zygote/host/zygote_host_impl_linux.h.orig	2019-05-23 12:39:34 UTC
+++ src/3rdparty/chromium/services/service_manager/zygote/host/zygote_host_impl_linux.h
@@ -44,8 +44,10 @@ class COMPONENT_EXPORT(SERVICE_MANAGER_ZYGOTE) ZygoteH
                      base::ScopedFD* control_fd,
                      base::FileHandleMappingVector additional_remapped_fds);
 
+#if !defined(OS_BSD)
   void AdjustRendererOOMScore(base::ProcessHandle process_handle,
                               int score) override;
+#endif
   bool HasZygote() { return !zygote_pids_.empty(); }
 
  private:
