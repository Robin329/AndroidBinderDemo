LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(call all-subdir-java-files)
LOCAL_MODULE := ClientDemo
LOCAL_MODULE_TAGS := optional
include $(BUILD_JAVA_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := ClientDemo
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_PATH := $(TARGET_OUT)/bin
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_SRC_FILES := ClientDemo
include $(BUILD_PREBUILT)

