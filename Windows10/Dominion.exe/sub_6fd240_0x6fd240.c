// 函数: sub_6fd240
// 地址: 0x6fd240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_147dec8
void* edx

if (*arg1 == 4 && *(eax + 0x20) != 0)
    HWND eax_1
    eax_1, edx = GetCapture()
    
    if (eax_1 == data_147b084)
        ReleaseCapture()
    
    eax = data_147dec8
    
    if (*(eax + 0x20) == 3)
        sub_4d4b30(eax + 0x34)
        eax = data_147dec8
    
    *(eax + 0x20) = 0

if (*arg1 == 1 && arg1[1] == 0x2e && *(eax + 0x14) != 0)
    do
        int32_t* ecx_2 = *(eax + 0xc)
        edx = ecx_2[1]
        *(eax + 0xc) = edx
        
        if (edx == 0)
            *(eax + 0x10) = 0
        else
            *(edx + 8) = 0
        
        *(eax + 0x14) -= 1
        
        if (ecx_2 != 0)
            sub_64c080(ecx_2, 0xc)
            eax = data_147dec8
    while (*(eax + 0x14) != 0)

if (*arg1 == 0 && arg1[1] == 0x67)
    edx.b = *(eax + 0x84) == 0
    *(eax + 0x84) = edx.b

return sub_73e000(arg1)
