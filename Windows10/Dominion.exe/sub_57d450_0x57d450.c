// 函数: sub_57d450
// 地址: 0x57d450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t edx = 0
void* esi = *(arg2 * 0x64 + arg3 + 0x1a48)
int32_t i = *(esi + 0xa8)

if (i != 0)
    void* eax_1 = esi
    
    do
        if (i == 6 && *(eax_1 + 0xac) == 1 && *(eax_1 + 0xb4) == arg4)
            return sub_575de0(eax_1, edx, arg2, arg5)
        
        edx += 1
        eax_1 = edx * 0xb4 + esi
        i = *(eax_1 + 0xa8)
    while (i != 0)

return 0xffffffff
