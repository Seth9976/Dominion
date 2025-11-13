// 函数: sub_570250
// 地址: 0x570250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t ecx = *(eax + 0xc)
int32_t edx = *(eax + 4)
int32_t eax_2 = *(ecx * 0x5a30 + edx + 0x1752c)
int32_t eax_3 = eax_2 - 1

if (eax_2 - 1 s>= 0)
    int32_t* ecx_4 = edx + ((ecx * 0x168c + 0x639e + eax_3) << 2)
    int32_t temp1_1
    
    do
        if (*ecx_4 == arg1)
            int32_t result
            result.b = eax_3 == 0
            return result
        
        ecx_4 -= 4
        temp1_1 = eax_3
        eax_3 -= 1
    while (temp1_1 - 1 s>= 0)

int32_t eax_4
eax_4.b = false
return 0xffffff00
