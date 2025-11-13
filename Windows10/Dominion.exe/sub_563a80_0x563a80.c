// 函数: sub_563a80
// 地址: 0x563a80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1[0x320] == 0)
    return 0

uint32_t esi_2 = zx.d((*arg1).w)
int32_t edi_1 = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t esi_3 = 1
int32_t eax_3 = *(esi_2 * 0x64 + edi_1 + 0x1a4c)

if (arg1[0x320] s<= 1)
    return *arg1

while (true)
    uint32_t edi_3 = zx.d((arg1[esi_3]).w)
    int32_t eax_5 = *(sub_573400() + 4)
    
    if (edi_3 u>= 0x320)
        sub_591930()
    
    if (*(edi_3 * 0x64 + eax_5 + 0x1a4c) != eax_3)
        return 0
    
    esi_3 += 1
    
    if (esi_3 s>= arg1[0x320])
        return *arg1
