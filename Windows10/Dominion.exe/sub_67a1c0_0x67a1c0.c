// 函数: sub_67a1c0
// 地址: 0x67a1c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t ecx_1 = *(arg3 + 0x1404) - 1
int32_t xmm2 = (zx.o(0)).d
int32_t xmm3 = _mm_max_ss(0, arg4[1] - arg2[1])
float xmm1 = _mm_max_ss(0, *arg4 - *arg2)

if (ecx_1 u> 8)
    sub_63b870(arg4, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x565d, 
        "UI2GetScrollExtents")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t xmm4

switch (ecx_1)
    case 0, 3, 6
        xmm4 = xmm1 ^ 0x80000000
        xmm1 = (zx.o(0)).d
    case 1, 4, 7
        float xmm4_1 = xmm1
        xmm1 = xmm1 * 0.5f
        xmm4 = (xmm4_1 ^ 0x80000000) * 0.5f
    case 2, 5, 8
        xmm4 = (zx.o(0)).d

int32_t xmm0_4

switch (ecx_1)
    case 0, 1, 2
        xmm0_4 = xmm3 ^ 0x80000000
    case 3, 4, 5
        xmm2 = xmm3 f* 0.5f
        xmm0_4 = (xmm3 ^ 0x80000000) * 0.5f
    case 6, 7, 8
        xmm0_4 = (zx.o(0)).d
        xmm2 = xmm3

*arg5 = xmm4
arg5[2] = xmm1
arg5[1] = xmm0_4
arg5[3] = xmm2
int32_t* result
result.b = 1
return result
