include ../Common.mk

ifeq ($(UNAME_S),Windows)
TARGET=wxPlugin
else
TARGET=usbdm-wx
endif

$(TARGET):
	$(MAKE) dll -f Target.mk BUILDDIR=$@ CDEFS="-DWXPLUGIN_DLL_EXPORTS"

all: $(TARGET)

clean:
	${RMDIR} $(TARGET)

.PHONY: all clean $(TARGET)

	