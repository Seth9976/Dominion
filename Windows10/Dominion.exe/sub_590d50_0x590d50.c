// 函数: sub_590d50
// 地址: 0x590d50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t* eax_1 = sub_5722c0(arg3, arg4, arg3, arg2)
void* edi_3

for (int32_t i = *eax_1; i != 0; i = *(edi_3 + 0x1aa4))
    uint32_t edi_1 = zx.d(i.w)
    
    if (edi_1 u>= 0x320)
        eax_1 = sub_591930()
    
    edi_3 = edi_1 * 0x64 + arg3
    
    if (result s>= 0x320)
        eax_1 = sub_591930()
    
    eax_1 = sub_5757f0(eax_1, i.w, arg3, arg5, arg6)
    int32_t result_1 = result + 1
    
    if (eax_1.b == 0)
        result_1 = result
    
    result = result_1
    
    if (*(edi_3 + 0x1aa4) == i)
        eax_1 = sub_591930()

return result
