DEFS += -DFLEXT_SYS=1

INCPATH += -I$(MAXSDKPATH)/max-includes -I$(MAXSDKPATH)/msp-includes

LDFLAGS += -framework MaxAPI -framework MaxAudioAPI

EXT=mxo