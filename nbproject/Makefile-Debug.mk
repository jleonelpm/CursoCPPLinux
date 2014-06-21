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
	${OBJECTDIR}/Módulo2-OOP/Lección11-ClasesyObjetos/Usuario.o \
	${OBJECTDIR}/Módulo2-OOP/Lección11-ClasesyObjetos/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cursocpplinux

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cursocpplinux: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cursocpplinux ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Módulo2-OOP/Lección11-ClasesyObjetos/Usuario.o: Módulo2-OOP/Lección11-ClasesyObjetos/Usuario.cpp 
	${MKDIR} -p ${OBJECTDIR}/Módulo2-OOP/Lección11-ClasesyObjetos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Módulo2-OOP/Lección11-ClasesyObjetos/Usuario.o Módulo2-OOP/Lección11-ClasesyObjetos/Usuario.cpp

${OBJECTDIR}/Módulo2-OOP/Lección11-ClasesyObjetos/main.o: Módulo2-OOP/Lección11-ClasesyObjetos/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/Módulo2-OOP/Lección11-ClasesyObjetos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Módulo2-OOP/Lección11-ClasesyObjetos/main.o Módulo2-OOP/Lección11-ClasesyObjetos/main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cursocpplinux

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
