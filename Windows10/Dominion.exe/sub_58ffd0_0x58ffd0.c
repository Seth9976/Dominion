// 函数: sub_58ffd0
// 地址: 0x58ffd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = sub_593fb0(arg2)
int32_t eax_1 = *(arg1 + 0xc80)

if (edx == 0)
    edx = arg2

int32_t ecx_1 = 0

if (eax_1 s> 0)
    do
        if (*(arg1 + (ecx_1 << 2)) == edx)
            *(arg1 + 0xc80) = eax_1 - 1
            *(arg1 + (ecx_1 << 2)) = *(arg1 + ((eax_1 - 1) << 2))
            break
        
        ecx_1 += 1
    while (ecx_1 s< eax_1)

int32_t esi_2 = *(arg1 + 0x1904)
int32_t eax_4 = 0

if (esi_2 s> 0)
    do
        if (*(arg1 + (eax_4 << 2) + 0xc84) == edx)
            *(arg1 + 0x1904) = esi_2 - 1
            *(arg1 + (eax_4 << 2) + 0xc84) = *(arg1 + ((esi_2 - 1) << 2) + 0xc84)
            break
        
        eax_4 += 1
    while (eax_4 s< esi_2)

int32_t esi_3 = *(arg1 + 0x2588)
int32_t result = 0

if (esi_3 s> 0)
    while (true)
        void* ecx_3 = arg1 + (result << 2)
        
        if (*(arg1 + (result << 2) + 0x1908) == edx)
            *(arg1 + 0x2588) = esi_3 - 1
            result = *(arg1 + ((esi_3 - 1) << 2) + 0x1908)
            *(ecx_3 + 0x1908) = result
            break
        
        result += 1
        
        if (result s>= esi_3)
            return result

return result
