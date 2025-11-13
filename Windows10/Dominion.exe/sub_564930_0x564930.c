// 函数: sub_564930
// 地址: 0x564930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = zx.d(arg1)
uint32_t esi = 1
int32_t edi = 0
int32_t eax_1 = eax * 0x64
int32_t result_1 = 0
int32_t result

while (true)
    void* ebx_1 = *(sub_573400() + 4)
    
    if (eax u>= 0x320)
        sub_591930()
    
    result = result_1 + 1
    
    if (sub_5754f0(eax_1, *(eax_1 + ebx_1 + 0x1a4c), ebx_1, esi, edi) == 0)
        result = result_1
    
    edi = edi << 1 | esi u>> 0xffffffe1
    esi *= 2
    result_1 = result
    
    if (edi u>= 0x8000)
        if (edi u> 0x8000)
            break
        
        if (esi u>= 0)
            break

return result
