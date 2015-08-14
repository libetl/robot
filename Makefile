####### Compiler, tools and options

CXX      = g++
LINK     = g++
CXXFLAGS = -Wall -O2 -g
COPY     = cp -f
COPY_FILE= $(COPY)
COPY_DIR = $(COPY) -r
DEL_FILE = rm -f
SYMLINK  = ln -sf
DEL_DIR  = rmdir
MOVE     = mv -f
MKDIR    = mkdir -p
CHK_DIR_EXISTS = test -d

####### Files

HEADERS = Attendre.h \
		Client.h \
		Commande.h \
		CommandeAppeler.h \
		CommandeAvancer.h \
		CommandeDefMacro.h \
		CommandeEvaluerObstacle.h \
		CommandeFiger.h \
		CommandePeserObjet.h \
		CommandePoser.h \
		CommandeQuitter.h \
		CommandeRepartir.h \
		CommandeSaisir.h \
		CommandeTourner.h \
		Commun.h \
		Direction.h \
		MacroCommande.h \
		Objet.h \
		Obstacle.h \
		Position.h \
		Robot.h \
		RobotALarretAVide.h \
		RobotALarretEnCharge.h \
		RobotEnMouvementAVide.h \
		RobotEnMouvementEnCharge.h \
		RobotEnRoute.h \
		RobotEtat.h \
		RobotFige.h \
		RobotObservateur.h \
		RobotObservateurConcret.h \
		RobotStruct.h \
		RobotSujet.h
SOURCES = Attendre.cpp \
		Client.cpp \
		Commande.cpp \
		CommandeAppeler.cpp \
		CommandeAvancer.cpp \
		CommandeDefMacro.cpp \
		CommandeEvaluerObstacle.cpp \
		CommandeFiger.cpp \
		CommandePeserObjet.cpp \
		CommandePoser.cpp \
		CommandeQuitter.cpp \
		CommandeRepartir.cpp \
		CommandeSaisir.cpp \
		CommandeTourner.cpp \
		MacroCommande.cpp \
		main.cpp \
		Robot.cpp \
		RobotALarretAVide.cpp \
		RobotALarretEnCharge.cpp \
		RobotEnMouvementAVide.cpp \
		RobotEnMouvementEnCharge.cpp \
		RobotEnRoute.cpp \
		RobotEtat.cpp \
		RobotFige.cpp \
		RobotObservateurConcret.cpp \
		RobotSujet.cpp
OBJECTS = Attendre.o \
		Client.o \
		Commande.o \
		CommandeAppeler.o \
		CommandeAvancer.o \
		CommandeDefMacro.o \
		CommandeEvaluerObstacle.o \
		CommandeFiger.o \
		CommandePeserObjet.o \
		CommandePoser.o \
		CommandeQuitter.o \
		CommandeRepartir.o \
		CommandeSaisir.o \
		CommandeTourner.o \
		MacroCommande.o \
		main.o \
		Robot.o \
		RobotALarretAVide.o \
		RobotALarretEnCharge.o \
		RobotEnMouvementAVide.o \
		RobotEnMouvementEnCharge.o \
		RobotEnRoute.o \
		RobotEtat.o \
		RobotFige.o \
		RobotObservateurConcret.o \
		RobotSujet.o

LIBS     = -lpthread

TARGET   = robot

first: all
####### Implicit rules

.SUFFIXES: .c .o .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) -o $@ $<

####### Build rules

all: Makefile $(TARGET)

$(TARGET): $(OBJECTS)
	$(LINK) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

clean:
	-$(DEL_FILE) $(OBJECTS) $(TARGET)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) $(TARGET)

####### Compile

Attendre.o: Attendre.cpp Attendre.h \
		Robot.h \
		RobotEtat.h \
		Commun.h \
		Position.h \
		Direction.h \
		Commande.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

Client.o: Client.cpp Client.h \
		Robot.h \
		Commun.h \
		Position.h \
		Direction.h \
		Commande.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

Commande.o: Commande.cpp Commande.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandeAppeler.o: CommandeAppeler.cpp CommandeAppeler.h \
		Commande.h \
		RobotEtat.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandeAvancer.o: CommandeAvancer.cpp CommandeAvancer.h \
		Attendre.h \
		Commande.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandeDefMacro.o: CommandeDefMacro.cpp CommandeDefMacro.h \
		Client.h \
		Commande.h \
		RobotEtat.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandeEvaluerObstacle.o: CommandeEvaluerObstacle.cpp CommandeEvaluerObstacle.h \
		Commande.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandeFiger.o: CommandeFiger.cpp CommandeFiger.h \
		Commande.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandePeserObjet.o: CommandePeserObjet.cpp CommandePeserObjet.h \
		Commande.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandePoser.o: CommandePoser.cpp CommandePoser.h \
		Commande.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandeQuitter.o: CommandeQuitter.cpp CommandeQuitter.h \
		Commande.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandeRepartir.o: CommandeRepartir.cpp CommandeRepartir.h \
		Commande.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandeSaisir.o: CommandeSaisir.cpp CommandeSaisir.h \
		Commande.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

CommandeTourner.o: CommandeTourner.cpp CommandeTourner.h \
		Attendre.h \
		Commande.h \
		RobotEtat.h \
		Robot.h \
		MacroCommande.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

MacroCommande.o: MacroCommande.cpp MacroCommande.h \
		Commande.h \
		Robot.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

main.o: main.cpp Client.h \
		Robot.h \
		Commun.h \
		Position.h \
		Direction.h \
		Commande.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

Robot.o: Robot.cpp Robot.h \
		RobotObservateurConcret.h \
		Commun.h \
		Position.h \
		Direction.h \
		Commande.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotObservateur.h \
		RobotEnRoute.h \
		RobotFige.h

RobotALarretAVide.o: RobotALarretAVide.cpp RobotALarretAVide.h \
		RobotALarretEnCharge.h \
		RobotEnMouvementAVide.h \
		CommandeAvancer.h \
		CommandeTourner.h \
		CommandeEvaluerObstacle.h \
		CommandeSaisir.h \
		RobotEnRoute.h \
		RobotEtat.h \
		Robot.h \
		Commande.h \
		RobotFige.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		MacroCommande.h \
		RobotObservateur.h

RobotALarretEnCharge.o: RobotALarretEnCharge.cpp RobotALarretAVide.h \
		RobotALarretEnCharge.h \
		RobotEnMouvementEnCharge.h \
		CommandeAvancer.h \
		CommandeTourner.h \
		CommandePeserObjet.h \
		CommandePoser.h \
		RobotEnRoute.h \
		RobotEtat.h \
		Robot.h \
		Commande.h \
		RobotFige.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		MacroCommande.h \
		RobotObservateur.h

RobotEnMouvementAVide.o: RobotEnMouvementAVide.cpp RobotEnMouvementAVide.h \
		RobotEnRoute.h \
		RobotEtat.h \
		Robot.h \
		Commande.h \
		RobotFige.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotObservateur.h

RobotEnMouvementEnCharge.o: RobotEnMouvementEnCharge.cpp RobotEnMouvementEnCharge.h \
		RobotEnRoute.h \
		RobotEtat.h \
		Robot.h \
		Commande.h \
		RobotFige.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotObservateur.h

RobotEnRoute.o: RobotEnRoute.cpp RobotEnRoute.h \
		RobotEtat.h \
		Robot.h \
		Commande.h \
		RobotFige.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotObservateur.h

RobotEtat.o: RobotEtat.cpp RobotEtat.h \
		Robot.h \
		Commande.h \
		RobotEnRoute.h \
		RobotFige.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotObservateur.h

RobotFige.o: RobotFige.cpp RobotFige.h \
		RobotEtat.h \
		Robot.h \
		Commande.h \
		RobotEnRoute.h \
		Commun.h \
		Position.h \
		Direction.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotSujet.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotObservateur.h

RobotObservateurConcret.o: RobotObservateurConcret.cpp RobotObservateurConcret.h \
		RobotStruct.h \
		Robot.h \
		RobotObservateur.h \
		Commun.h \
		Position.h \
		Direction.h \
		Commande.h \
		Objet.h \
		Obstacle.h \
		RobotSujet.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotEnRoute.h \
		RobotFige.h

RobotSujet.o: RobotSujet.cpp RobotSujet.h \
		Robot.h \
		RobotObservateur.h \
		Commun.h \
		Position.h \
		Direction.h \
		Commande.h \
		Objet.h \
		Obstacle.h \
		RobotStruct.h \
		RobotEtat.h \
		RobotALarretAVide.h \
		MacroCommande.h \
		RobotEnRoute.h \
		RobotFige.h


