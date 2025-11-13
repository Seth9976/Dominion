// 函数: sub_726640
// 地址: 0x726640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg1

for (void* i = nullptr; i s< 8; i += 1)
    char* eax_1 = *(esi + 0xa8)
    
    if (eax_1 u< *(esi + 0xac))
        arg1.b = *eax_1
        *(esi + 0xa8) = &eax_1[1]
    else if (*(esi + 0x20) == 0)
        arg1.b = 0
    else
        void* eax_4
        eax_4, arg1 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        
        if (eax_4 != 0)
            *(esi + 0xac) = eax_4 + 0x28 + esi
            arg1.b = *(esi + 0x28)
            *(esi + 0xa8) = esi + 0x29
        else
            *(esi + 0x20) = eax_4
            *(esi + 0xac) = esi + 0x29
            *(esi + 0x28) = 0
            arg1.b = *(esi + 0x28)
            *(esi + 0xa8) = esi + 0x29
    
    if (arg1.b != *(i + 0x88de74))
        return 0

return 1
