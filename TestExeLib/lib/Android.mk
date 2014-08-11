LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE_TAGS := eng
LOCAL_SRC_FILES := bill.c fred.c
LOCAL_MODULE:= libfinish
include $(BUILD_SHARED_LIBRARY)
