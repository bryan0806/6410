LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE_TAGS := eng
LOCAL_SRC_FILES:= program.c
LOCAL_SHARED_LIBRARIES := libfinish
LOCAL_MODULE := finish
include $(BUILD_EXECUTABLE)
include $(call all-makefiles-under,$(LOCAL_PATH))
