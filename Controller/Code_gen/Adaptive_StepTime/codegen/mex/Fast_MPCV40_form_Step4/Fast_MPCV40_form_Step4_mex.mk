START_DIR = D:\Cassie_Avoidance\Obstacle_Avoidance_OpenLoopNoCassie\Code_gen\Adaptive_StepTime

MATLAB_ROOT = D:\Matlab
MAKEFILE = Fast_MPCV40_form_Step4_mex.mk

include Fast_MPCV40_form_Step4_mex.mki


SRC_FILES =  \
	Fast_MPCV40_form_Step4_data.cpp \
	Fast_MPCV40_form_Step4_initialize.cpp \
	Fast_MPCV40_form_Step4_terminate.cpp \
	Fast_MPCV40_form_Step4.cpp \
	IqFast_LeftStart4V40.cpp \
	IqFast_RightStart4V40.cpp \
	_coder_Fast_MPCV40_form_Step4_info.cpp \
	_coder_Fast_MPCV40_form_Step4_api.cpp \
	_coder_Fast_MPCV40_form_Step4_mex.cpp \
	Fast_MPCV40_form_Step4_emxutil.cpp \
	cpp_mexapi_version.cpp

MEX_FILE_NAME_WO_EXT = Fast_MPCV40_form_Step4_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = 


#
#====================================================================
# gmake makefile fragment for building MEX functions using MSVC
# Copyright 2007-2016 The MathWorks, Inc.
#====================================================================
#
SHELL = cmd
OBJEXT = obj
CC = $(COMPILER)
LD = $(LINKER)
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLIST  = $(OBJLISTC:.cpp=.$(OBJEXT))

TARGETMT = $(TARGET).manifest
MEX = $(TARGETMT)
STRICTFP = /fp:strict

target: $(MEX)

MATLAB_INCLUDES = /I "$(MATLAB_ROOT)\simulink\include"
MATLAB_INCLUDES+= /I "$(MATLAB_ROOT)\toolbox\shared\simtargets"
SYS_INCLUDE = $(MATLAB_INCLUDES)

# Additional includes

SYS_INCLUDE += /I "$(START_DIR)\codegen\mex\Fast_MPCV40_form_Step4"
SYS_INCLUDE += /I "$(START_DIR)"
SYS_INCLUDE += /I ".\interface"
SYS_INCLUDE += /I "$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += /I "."

DIRECTIVES = $(MEX_FILE_NAME_WO_EXT)_mex.arf
COMP_FLAGS = $(COMPFLAGS) $(OMPFLAGS)
LINK_FLAGS = $(filter-out /export:mexFunction, $(LINKFLAGS))
LINK_FLAGS += /NODEFAULTLIB:LIBCMT
ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS) $(STRICTFP)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += $(OMPLINKFLAGS)
LINK_FLAGS += /OUT:$(TARGET)
LINK_FLAGS += 

CFLAGS = $(COMP_FLAGS)   $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS = $(COMP_FLAGS)   $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CC) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\Fast_MPCV40_form_Step4/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\Fast_MPCV40_form_Step4/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CC) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(LINK_FLAGS) $(OBJLIST) $(USER_LIBS) $(SYS_LIBS) @$(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

$(TARGETMT): $(TARGET)
	mt -outputresource:"$(TARGET);2" -manifest "$(TARGET).manifest"

#====================================================================

