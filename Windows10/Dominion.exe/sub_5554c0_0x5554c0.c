// 函数: sub_5554c0
// 地址: 0x5554c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
uint32_t edi = zx.d(arg1.w)
void* ebx = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t eax_1 = edi * 0x64
uint32_t result

if (sub_5754f0(eax_1, *(eax_1 + ebx + 0x1a4c), ebx, 8, 0).b != 0)
    void* eax_2 = sub_573400()
    int32_t edx_1 = 0
    result = *(eax_2 + 4) + *(eax_2 + 0xc) * 0x5a30
    int32_t ecx_3 = *(result + 0x17544)
    
    if (ecx_3 s> 0)
        result += 0x19af8
        
        do
            if (*result == arg1)
                result.b = 1
                return result
            
            edx_1 += 1
            result += 4
        while (edx_1 s< ecx_3)

result.b = 0
return result
