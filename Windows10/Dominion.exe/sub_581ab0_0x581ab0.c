// 函数: sub_581ab0
// 地址: 0x581ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg2
uint32_t i = 0

if (*(arg3 + 0xd38) s<= 0)
    return 

int32_t ecx = arg4
uint32_t ebx_1 = zx.d(arg2.w)

do
    if (ebx_1 u>= 0x320)
        sub_591930()
        ecx = arg4
        arg2 = var_8
    
    int32_t* eax_2
    
    if (i != ecx || *(arg3 + ((ebx_1 * 0x19 + ecx) << 2) + 0x1a84) == 0)
        eax_2 = nullptr
    else
        eax_2 = 2
    
    sub_581a00(eax_2, arg2, arg3, i, eax_2)
    ecx = arg4
    i += 1
    arg2 = var_8
while (i s< *(arg3 + 0xd38))
