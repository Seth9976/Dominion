// 函数: sub_6e69b0
// 地址: 0x6e69b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
float xmm1_3 = _mm_cvtepi32_ps(zx.o(arg2 - 1)) * arg4 + _mm_cvtepi32_ps(zx.o(arg3))
float xmm0_3 = sub_4d5cb0(xmm1_3)
float xmm2 = (zx.o(0)).d
float xmm1_5

if (0 f<= xmm0_3)
    xmm1_5 = xmm0_3 + 0.5f
else
    xmm1_5 = xmm0_3 - 0.5f

int32_t edx = int.d(xmm1_5)
int32_t edi_1 = arg3 + arg2 - 1

if (edx s< edi_1)
    xmm2 = xmm1_3 - xmm0_3

*arg5 = edx
int32_t ecx = edx

if (edx s< edi_1)
    ecx = edx + 1

arg5[1] = ecx
arg5[2] = xmm2
int32_t var_18
char* ecx_1

if (ecx != 0xffffffff)
    if (edx != 0xffffffff)
        return edx + 1
    
    char const* const var_14_1 = "FlanimCalcFrameTime"
    var_18 = 0x2b6
    ecx_1 = "pFrameTime->mFrameIndexBefore != -1"
else
    char const* const var_14 = "FlanimCalcFrameTime"
    var_18 = 0x2b5
    ecx_1 = "pFrameTime->mFrameIndexAfter != -1"

sub_63b870(edx + 1, &data_801800, ecx_1, "C:\x\ax2017\Engine\Flanim.cpp", var_18, 
    "FlanimCalcFrameTime")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
