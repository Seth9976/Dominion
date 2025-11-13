// 函数: sub_759100
// 地址: 0x759100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *(arg1 + 0x14)

if (eax == 0)
    int32_t eax_5 = *(arg2 + 0x18)
    *(arg2 + 0x14) = 0
    
    if (eax_5 != 0)
        free(eax_5)
        *(arg2 + 0x18) = 0
else
    int32_t ecx = data_147ded8
    *(arg2 + 0x14) = eax
    int32_t _Size = *(arg1 + 0x14) << 2
    int32_t eax_2
    
    if (ecx == 0)
        eax_2 = malloc(_Size)
    else
        eax_2 =
            ecx(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\VertexAttachment.c", 0x77)
    
    *(arg2 + 0x18) = eax_2
    memcpy(eax_2, *(arg1 + 0x18), *(arg1 + 0x14) << 2)

int32_t eax_6 = *(arg1 + 0x1c)

if (eax_6 == 0)
    int32_t eax_12 = *(arg2 + 0x20)
    *(arg2 + 0x1c) = 0
    
    if (eax_12 != 0)
        free(eax_12)
        *(arg2 + 0x20) = 0
    
    int32_t eax_13 = *(arg1 + 0x24)
    *(arg2 + 0x24) = eax_13
    return eax_13

int32_t ecx_2 = data_147ded8
*(arg2 + 0x1c) = eax_6
int32_t _Size_1 = *(arg1 + 0x1c) << 2
int32_t eax_8

if (ecx_2 == 0)
    eax_8 = malloc(_Size_1)
else
    eax_8 =
        ecx_2(_Size_1, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\VertexAttachment.c", 0x83)

*(arg2 + 0x20) = eax_8
memcpy(eax_8, *(arg1 + 0x20), *(arg1 + 0x1c) << 2)
int32_t eax_11 = *(arg1 + 0x24)
*(arg2 + 0x24) = eax_11
return eax_11
