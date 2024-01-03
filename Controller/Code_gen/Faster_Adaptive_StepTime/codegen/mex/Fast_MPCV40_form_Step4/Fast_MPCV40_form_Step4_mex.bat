@echo off
set MATLAB=D:\Matlab
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Matlab\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=Fast_MPCV40_form_Step4_mex
set MEX_NAME=Fast_MPCV40_form_Step4_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for Fast_MPCV40_form_Step4 > Fast_MPCV40_form_Step4_mex.mki
echo COMPILER=%COMPILER%>> Fast_MPCV40_form_Step4_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> Fast_MPCV40_form_Step4_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> Fast_MPCV40_form_Step4_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> Fast_MPCV40_form_Step4_mex.mki
echo LINKER=%LINKER%>> Fast_MPCV40_form_Step4_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> Fast_MPCV40_form_Step4_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> Fast_MPCV40_form_Step4_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> Fast_MPCV40_form_Step4_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> Fast_MPCV40_form_Step4_mex.mki
echo OMPFLAGS= >> Fast_MPCV40_form_Step4_mex.mki
echo OMPLINKFLAGS= >> Fast_MPCV40_form_Step4_mex.mki
echo EMC_COMPILER=msvcpp140>> Fast_MPCV40_form_Step4_mex.mki
echo EMC_CONFIG=optim>> Fast_MPCV40_form_Step4_mex.mki
"D:\Matlab\bin\win64\gmake" -B -f Fast_MPCV40_form_Step4_mex.mk
