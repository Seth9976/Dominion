// 函数: sub_578f00
// 地址: 0x578f00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t* edi = arg2
int32_t var_8_1 = arg3
int32_t i = *edi

if (i != 0)
    int32_t* ebx_1 = arg4
    
    do
        *ebx_1 = i
        *arg5 += 1
        uint32_t esi_2 = zx.d((*edi).w)
        
        if (esi_2 u>= 0x320)
            sub_591930()
            arg3 = var_8_1
        
        *edi = 0
        ebx_1 = &ebx_1[1]
        edi = esi_2 * 0x64 + 0x1aa8 + arg3
        i = *edi
    while (i != 0)

return i
