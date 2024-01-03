@echo off
set MATLAB=D:\Matlab
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Matlab\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=temp_MPC3DFootV98_form_Step1_mex
set MEX_NAME=temp_MPC3DFootV98_form_Step1_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for temp_MPC3DFootV98_form_Step1 > temp_MPC3DFootV98_form_Step1_mex.mki
echo COMPILER=%COMPILER%>> temp_MPC3DFootV98_form_Step1_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> temp_MPC3DFootV98_form_Step1_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> temp_MPC3DFootV98_form_Step1_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> temp_MPC3DFootV98_form_Step1_mex.mki
echo LINKER=%LINKER%>> temp_MPC3DFootV98_form_Step1_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> temp_MPC3DFootV98_form_Step1_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> temp_MPC3DFootV98_form_Step1_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> temp_MPC3DFootV98_form_Step1_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> temp_MPC3DFootV98_form_Step1_mex.mki
echo OMPFLAGS= >> temp_MPC3DFootV98_form_Step1_mex.mki
echo OMPLINKFLAGS= >> temp_MPC3DFootV98_form_Step1_mex.mki
echo EMC_COMPILER=msvcpp140>> temp_MPC3DFootV98_form_Step1_mex.mki
echo EMC_CONFIG=optim>> temp_MPC3DFootV98_form_Step1_mex.mki
"D:\Matlab\bin\win64\gmake" -B -f temp_MPC3DFootV98_form_Step1_mex.mk
