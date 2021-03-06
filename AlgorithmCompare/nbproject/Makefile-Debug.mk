#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Algorithm.o \
	${OBJECTDIR}/PairAlgorithm.o \
	${OBJECTDIR}/PairAlgorithm2.o \
	${OBJECTDIR}/QuickAlgorithm.o \
	${OBJECTDIR}/RecursiveAlgorithm.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-std=c++11 -O2
CXXFLAGS=-std=c++11 -O2

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algorithmcompare

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algorithmcompare: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algorithmcompare ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Algorithm.o: Algorithm.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O3 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Algorithm.o Algorithm.cpp

${OBJECTDIR}/PairAlgorithm.o: PairAlgorithm.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O3 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PairAlgorithm.o PairAlgorithm.cpp

${OBJECTDIR}/PairAlgorithm2.o: PairAlgorithm2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O3 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PairAlgorithm2.o PairAlgorithm2.cpp

${OBJECTDIR}/QuickAlgorithm.o: QuickAlgorithm.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O3 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/QuickAlgorithm.o QuickAlgorithm.cpp

${OBJECTDIR}/RecursiveAlgorithm.o: RecursiveAlgorithm.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O3 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/RecursiveAlgorithm.o RecursiveAlgorithm.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O3 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algorithmcompare

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
