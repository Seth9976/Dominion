// 函数: sub_59d570
// 地址: 0x59d570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg2
int32_t esi = 0
void* result_1 = result
int32_t var_c = arg3

if (arg5 s> 0)
    do
        uint32_t edi_1 = zx.d(*(arg4 + (esi << 2)))
        
        if (edi_1 u>= 0x320)
            sub_591930()
            result = result_1
            arg3 = var_c
        
        sub_59d430(result, *(edi_1 * 0x64 + arg3 + 0x1a4c))
        result = result_1
        esi += 1
        arg3 = var_c
    while (esi s< arg5)

return result
