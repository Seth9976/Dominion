// 函数: sub_590ce0
// 地址: 0x590ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t result = 0
void* edi_3

for (int32_t i = *sub_5722c0(arg3, arg4, arg3, arg2); i != 0; i = *(edi_3 + 0x1aa4))
    uint32_t edi_1 = zx.d(i.w)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    int32_t result_1 = result + 1
    edi_3 = edi_1 * 0x64 + arg3
    
    if (*(edi_3 + 0x1a4c) != arg5)
        result_1 = result
    
    result = result_1
    
    if (*(edi_3 + 0x1aa4) == i)
        sub_591930()

return result
