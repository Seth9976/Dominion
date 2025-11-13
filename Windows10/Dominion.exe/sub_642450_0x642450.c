// 函数: sub_642450
// 地址: 0x642450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_1c
void arg_4
sub_6407b0(arg3 + 0x80, &var_1c, arg2, &arg_4)
int32_t var_18
int32_t edi_1 = var_18 + *(arg4 + 0x2c) - *(arg4 + 0x24)
int32_t esi_1 = var_1c + *(arg4 + 0x28) - *(arg4 + 0x20)
*(arg5 + 0x20)
int32_t eax_4
int32_t edx
eax_4, edx = sub_5a0e20()
bool cond:0 = data_1a98f68 != 0
float var_38 = _mm_cvtepi32_ps(zx.o(var_1c)) / _mm_cvtepi32_ps(zx.o(eax_4))
float var_34 = _mm_cvtepi32_ps(zx.o(var_18)) / _mm_cvtepi32_ps(zx.o(edx))
float xmm0_5 = _mm_cvtepi32_ps(zx.o(eax_4))
float var_30 = _mm_cvtepi32_ps(zx.o(esi_1)) / xmm0_5
float xmm0_7 = _mm_cvtepi32_ps(zx.o(edx))
float var_2c = _mm_cvtepi32_ps(zx.o(edi_1)) / xmm0_7
*(arg4 + 0x10) = var_38.o

if (not(cond:0))
    data_1a98f68 = malloc(0x28800)
    data_1a98f6c = malloc(0x28800)

int32_t var_10
float esi_3 = var_10 - var_18
int32_t var_14
int32_t edi_3 = var_14 - var_1c
int32_t var_28 = 0xa
int32_t var_34_1 = edi_3
float var_30_1 = esi_3
float ebx_1

if (sub_6a9450(0xa) * edi_3 s>= 4)
    ebx_1 = sub_6a9450(0xa) * edi_3
else
    ebx_1 = 5.60519386e-45f

var_38 = data_1a98f68
int32_t eax_12 = esi_3 i* ebx_1
float var_2c_1 = ebx_1

if (eax_12 s> 0xa200)
    sub_63b870(eax_12, &data_801800, "imageA8.pitch * imageA8.height <= BUFFER_SIZE", 
        "C:\x\ax2017\Engine\TTFont.cpp", 0x382, "MakeImage")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float xmm1_12 = *(arg4 + 0xc)
uint32_t eax_14 = sub_6d1fd0(arg6, arg7)
uint32_t var_64_1 = eax_14
int32_t var_68_1 = 0
sub_6d7490(eax_14, data_1a98f68, arg6, edi_3, esi_3, ebx_1, xmm1_12, xmm1_12, 0)
int32_t var_40 = 1
int32_t var_4c = edi_3
float var_48 = esi_3
int32_t eax_17

if (sub_6a9450(1) * edi_3 s>= 4)
    eax_17 = sub_6a9450(1) * edi_3
else
    eax_17 = 4

int32_t var_44 = eax_17
int32_t var_50 = data_1a98f6c
sub_6a9de0(&var_38, &var_50)
sub_6ae120(arg5, &var_1c, *(arg5 + 0x20), &var_50)
CookieCheckFunction(arg4)
return arg4
