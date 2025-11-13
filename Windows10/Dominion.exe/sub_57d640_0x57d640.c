// 函数: sub_57d640
// 地址: 0x57d640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t var_8_1 = arg2
int32_t edi = 0
*(arg4 + 0x400) = 0
void* ebx = *(arg2 * 0x64 + arg3 + 0x1a48)
int32_t* ecx = ebx + 0xa8

if (*(ebx + 0xa8) != 0)
    arg2.b = arg7
    void* eax_2 = ebx
    
    do
        if ((arg2.b == 0 || (*(eax_2 + 0x154) & 4) != 0) && *ecx == 6 && *(eax_2 + 0xac) == 0
                && *(eax_2 + 0xb4) == arg5)
            int32_t eax_3
            eax_3, arg2 = sub_575de0(eax_2, edi, var_8_1, arg6)
            arg2.b = arg7
            *(arg4 + (*(arg4 + 0x400) << 2)) = eax_3
            *(arg4 + 0x400) += 1
        
        edi += 1
        eax_2 = edi * 0xb4 + ebx
        ecx = eax_2 + 0xa8
    while (*(eax_2 + 0xa8) != 0)

return arg4
