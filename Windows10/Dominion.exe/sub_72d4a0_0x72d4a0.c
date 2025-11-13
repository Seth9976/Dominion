// 函数: sub_72d4a0
// 地址: 0x72d4a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edi = arg2
uint32_t esi = arg1

while (*edi != 0)
    char* eax_1 = *(esi + 0xa8)
    
    if (eax_1 u< *(esi + 0xac))
        arg1.b = *eax_1
        *(esi + 0xa8) = &eax_1[1]
    else if (*(esi + 0x20) == 0)
        arg1.b = 0
    else
        int32_t eax_5
        eax_5, arg1 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        
        if (eax_5 != 0)
            *(esi + 0xac) = eax_5 + 0x28 + esi
            arg1.b = *(esi + 0x28)
            *(esi + 0xa8) = esi + 0x29
        else
            *(esi + 0x20) = eax_5
            *(esi + 0xac) = esi + 0x29
            *(esi + 0x28) = 0
            arg1.b = *(esi + 0x28)
            *(esi + 0xa8) = esi + 0x29
    
    if (zx.d(arg1.b) != sx.d(*edi))
        return 0
    
    edi = &edi[1]

*(esi + 0xa8) = *(esi + 0xb0)
*(esi + 0xac) = *(esi + 0xb4)
return 1
