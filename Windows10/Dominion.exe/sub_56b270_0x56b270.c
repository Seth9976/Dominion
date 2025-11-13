// 函数: sub_56b270
// 地址: 0x56b270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t* esi = *(eax + 4)
uint32_t edi = *(eax + 0xc)

if (esi[0x669] s>= 0x100)
    eax = sub_591930()

int32_t eax_1 = sub_571ee0(eax, edi, esi, 0xb01)

if (eax_1 == 0xffffffff)
    eax_1 = sub_571da0(eax_1, edi, esi, 0xb01, 0x476, nullptr, 1)

int32_t var_10 = eax_1
int32_t result = eax_1 << 5
void* ebx = result + esi
result.b = *(result + esi + 0x152d8) == 0
*(ebx + 0x152d8) = result.b
int32_t ecx_2 = esi[0x541]

if (ecx_2 != 3 && ecx_2 != 5 && ecx_2 != 4 && ecx_2 != 6)
    uint32_t eax_2 = zx.d(result.b)
    ecx_2.b = ecx_2 == 2
    result = sub_61b1b0(eax_2, 0x15, ecx_2.b, edi, var_10, eax_2, nullptr, nullptr, nullptr, 0, 0, 
        0, 0, 0)

if ((arg2 & 2) == 0)
    result = esi[0x541]
    
    if (result != 3 && result != 5 && result != 4 && result != 6 && esi[0x540].b == 0)
        uint32_t eax_3 = edi
        
        if (edi == esi[0x673])
            eax_3 = esi[0x674]
        
        return sub_59f9b0(eax_3, edi, esi, eax_3, 0xe, 0, &var_10, 1, *(ebx + 0x152c8), 
            zx.d(*(ebx + 0x152d8)), 0, 0)

return result
