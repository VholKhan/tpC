# ############################################
# ##    demande generale de compilation     ##
# ############################################

all : t clean

# ================== compile =================
#
# ------ definitions -------------------------
CC = gcc
SRC = try.c tabDyn.c 
OBJS = $(SRC:.c=.o)

# ------ regle implicite ---------------------
.SUFFIXES:.o.c
.c.o:
	$(CC) -c $<

# ------ regle explicite ---------------------
t : $(OBJS)
	$(CC) -o $@ $(OBJS) 

try.o      : tabDyn.h 
tabDyn.c   : tabDyn.h 
# ================== nettoie =================
clean :
	rm *.o 

