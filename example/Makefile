
searchdirs := $(realpath ../simple_rpc/include):$(realpath /usr/include/boost/include)

vpath %.cpp $(searchdirs)
vpath %.hpp $(searchdirs)

export CFLAGS += -g -O0
export CPATH += $(searchdirs)
LOCAL_LDFLAGS = -I../simple_rpc/include -L/usr/lib/x86_64-linux-gnu  -Wl,-Bstatic -lboost_system -lboost_serialization -Wl,-Bdynamic -lpthread -lc -lstdc++

.PHONY: all clean

all: RPC STANDALONE

RPC:
	python ../simple_rpc/main.py api.h
	gcc -o client api-rpc-client.cpp client_main.c $(LOCAL_LDFLAGS)
	gcc -o server api-rpc-server.cpp api.c server_main.c $(LOCAL_LDFLAGS)

STANDALONE:
	gcc -o standalon main.c api.c -DDISABLE_SIMPLE_RPC


clean:
	rm -f *.d *.o client server standalon
