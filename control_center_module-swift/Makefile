ARCHS = arm64 arm64e
TARGET := iphone:clang:13.0:11.0
INSTALL_TARGET_PROCESSES = SpringBoard

include @@THEOS@@/makefiles/common.mk

BUNDLE_NAME = @@PROJECTNAME@@
@@PROJECTNAME@@_BUNDLE_EXTENSION = bundle
@@PROJECTNAME@@_FILES = $(shell find Sources/@@PROJECTNAME@@ -name '*.swift') $(shell find Sources/@@PROJECTNAME@@C -name '*.m' -o -name '*.c' -o -name '*.mm' -o -name '*.cpp')
@@PROJECTNAME@@_CFLAGS = -fobjc-arc
@@PROJECTNAME@@_SWIFTFLAGS = -ISources/@@PROJECTNAME@@C/include
@@PROJECTNAME@@_PRIVATE_FRAMEWORKS = ControlCenterUIKit
@@PROJECTNAME@@_INSTALL_PATH = /Library/ControlCenter/Bundles/

include $(THEOS_MAKE_PATH)/bundle.mk
