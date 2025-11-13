// 函数: sub_4ba140
// 地址: 0x4ba140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_5 = *(arg1 + 4)

if (eax_5 == 1)
    *arg2 = 0
    return 0xa

if (eax_5 == 3)
    *arg2 = 1
    return 0xa

if (eax_5 == 4)
    *arg2 = 2
    return 0xa

int32_t esi = *(arg1 + 0xc)
int32_t edi = *(arg1 + 8)
int32_t eax_3 = edi

if (edi s<= esi)
    eax_3 = esi

if (eax_3 != 1 && eax_3 != 0)
    if (eax_3 == edi)
        *arg2 = 0
        return eax_3
    
    if (eax_3 == esi)
        *arg2 = 1
        return eax_3

int32_t eax_4 = *(arg1 + 0x10)

if (eax_4 == 1 || eax_4 == 0)
    eax_4 = 1

*arg2 = 2
return eax_4
