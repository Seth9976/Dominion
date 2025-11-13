// 函数: sub_4f3c60
// 地址: 0x4f3c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
float xmm1_1 = _mm_cvtepi32_ps(zx.o(arg5))
float xmm0_5 = sub_4ea070(ebp, (*(arg3 + 8) + xmm1_1 + 1f) f/ *(arg3 + 8)) f+ *(arg3 + 0xc)
int32_t ecx
float xmm0_8
ecx, xmm0_8 = sub_4ac580(ebp, _mm_cvtepi32_ps(zx.o(arg5)))
int32_t var_1c = ecx
float xmm1_7 = xmm0_5 * xmm0_8 / (_mm_cvtepi32_ps(zx.o(arg2)) + 1f) * arg4
float var_8_1 = xmm1_7
int32_t result = _fdclass(fconvert.s(fconvert.t(xmm1_7)))
int32_t var_20
char const* const ecx_1

if (result.w != 1)
    arg5 = fconvert.s(fconvert.t(xmm1_7))
    result.b = is_unordered.d(arg5, arg5)
    
    if (result.b != 1)
        return result
    
    char const* const var_1c_3 = "ComputeUCT"
    var_20 = 0x1491
    ecx_1 = "!isnan(uct)"
else
    char const* const var_1c_2 = "ComputeUCT"
    var_20 = 0x1490
    ecx_1 = "!isinf(uct)"

sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_20, 
    "ComputeUCT")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
