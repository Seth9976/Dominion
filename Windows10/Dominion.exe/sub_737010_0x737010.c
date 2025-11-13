// 函数: sub_737010
// 地址: 0x737010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3[1] != 0x12)
    sub_63b870(arg1, &data_801800, "assetPtr->assetType == ASSET_TYPE_FONT", 
        "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2e6, "FontGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax = sub_5af880(arg3)
int64_t var_2c
__builtin_memset(&var_2c, 0, 0x1c)
void* edx_1 = *(eax + 0x20) + arg2 * 0x30
int32_t ecx_2 = arg5 * 9
void* var_50 = edx_1
int32_t eax_2 = *(edx_1 + 0x20)
float xmm1 = *(eax_2 + (ecx_2 << 2) + 0x10)
void* ecx_3 = eax_2 + (ecx_2 << 2)
int32_t var_4c = arg2
float xmm1_1

if (0f <= xmm1)
    xmm1_1 = xmm1 + 0.5f
else
    xmm1_1 = xmm1 - 0.5f

float xmm1_2 = *(ecx_3 + 0xc)
float xmm1_3

if (0f <= xmm1_2)
    xmm1_3 = xmm1_2 + 0.5f
else
    xmm1_3 = xmm1_2 - 0.5f

float xmm1_4 = *(ecx_3 + 8)
float xmm1_5

if (0f <= xmm1_4)
    xmm1_5 = xmm1_4 + 0.5f
else
    xmm1_5 = xmm1_4 - 0.5f

float xmm1_6 = *(ecx_3 + 4)
float xmm1_7

if (0 f<= xmm1_6)
    xmm1_7 = xmm1_6 + 0.5f
else
    xmm1_7 = xmm1_6 - 0.5f

int32_t eax_5 = int.d(xmm1_7)
float xmm1_8 = *(ecx_3 + 0x14)
float xmm1_9

if (0f <= xmm1_8)
    xmm1_9 = xmm1_8 + 0.5f
else
    xmm1_9 = xmm1_8 - 0.5f

float xmm1_10 = *(ecx_3 + 0x18)
float xmm1_11

if (0f <= xmm1_10)
    xmm1_11 = xmm1_10 + 0.5f
else
    xmm1_11 = xmm1_10 - 0.5f

int32_t var_70
sub_737b10(&var_70, arg3, arg6, arg2, &var_70, arg7)
sub_736550(&var_50)
var_70 = _mm_cvtepi32_ps(zx.o(eax_5))
int32_t var_6c = _mm_cvtepi32_ps(zx.o(int.d(xmm1_5)))
int32_t var_68 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_3)))
int32_t var_64 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_1)))
*(ecx_3 + 4) = var_70.o
*(ecx_3 + 0x14) = _mm_cvtepi32_ps(zx.o(int.d(xmm1_9)))
*(ecx_3 + 0x18) = _mm_cvtepi32_ps(zx.o(int.d(xmm1_11)))
*arg4 = eax_5.o
return arg4
