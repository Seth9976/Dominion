// 函数: sub_56ce60
// 地址: 0x56ce60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t* esi = *(eax + 4)
uint32_t edi = *(eax + 0xc)

if (esi[0x669] s>= 0x100)
    eax = sub_591930()

int32_t result = sub_571ee0(eax, edi, esi, arg1)
int32_t result_1 = result

if (result == 0xffffffff)
    result = sub_571da0(result, edi, esi, arg1, 0x476, nullptr, nullptr)
    result_1 = result

void* ebx_3 = &esi[result * 8]

if (*(ebx_3 + 0x152dc) == 0)
    *(ebx_3 + 0x152dc) = 1
    int32_t ecx_2 = esi[0x541]
    
    if (ecx_2 != 3 && ecx_2 != 5 && ecx_2 != 4 && ecx_2 != 6)
        ecx_2.b = ecx_2 == 2
        sub_61b1b0((result + 0xa97) << 5, 0x14, ecx_2.b, *(ebx_3 + 0x152cc), result_1, 1, nullptr, 
            *(ebx_3 + 0x152c8), *(ebx_3 + 0x152d0), *(ebx_3 + 0x152d4), 0, 0, 
            esi[(result + 0xa97) * 8], esi[(result + 0xa97) * 8 + 1])
    
    int32_t eax_3 = esi[0x541]
    
    if (eax_3 != 3 && eax_3 != 5 && eax_3 != 4 && eax_3 != 6 && esi[0x540].b == 0)
        uint32_t eax_4 = edi
        
        if (edi == esi[0x673])
            eax_4 = esi[0x674]
        
        sub_59f9b0(eax_4, edi, esi, eax_4, 0xb, 0, nullptr, 0, arg1, *(ebx_3 + 0x152dc), 0, 0)
    
    result = result_1

if (*(ebx_3 + 0x152d0) == 0x3f1)
    return result

return sub_584790(result, result, esi, 0x3f1)
