// 函数: sub_72c280
// 地址: 0x72c280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
void* esi = arg3
void* var_8_1 = nullptr

if (arg4 s<= 0)
    return 

void* ebx_1 = arg2 + 1

do
    char* eax = *(esi + 0xa8)
    
    if (eax u< *(esi + 0xac))
        arg3.b = *eax
        *(esi + 0xa8) = &eax[1]
    else if (*(esi + 0x20) == 0)
        arg3.b = 0
    else
        void* eax_3
        eax_3, arg3 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        *(esi + 0xa8) = esi + 0x28
        
        if (eax_3 != 0)
            *(esi + 0xac) = eax_3 + 0x28 + esi
            char* eax_9 = *(esi + 0xa8)
            arg3.b = *eax_9
            *(esi + 0xa8) = &eax_9[1]
        else
            *(esi + 0x20) = eax_3
            *(esi + 0xac) = esi + 0x29
            *(esi + 0x28) = 0
            char* eax_5 = *(esi + 0xa8)
            arg3.b = *eax_5
            *(esi + 0xa8) = &eax_5[1]
    
    *(ebx_1 + 1) = arg3.b
    char* eax_11 = *(esi + 0xa8)
    
    if (eax_11 u< *(esi + 0xac))
        arg3.b = *eax_11
        *(esi + 0xa8) = &eax_11[1]
    else if (*(esi + 0x20) == 0)
        arg3.b = 0
    else
        void* eax_14
        eax_14, arg3 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        *(esi + 0xa8) = esi + 0x28
        
        if (eax_14 != 0)
            *(esi + 0xac) = eax_14 + 0x28 + esi
            char* eax_20 = *(esi + 0xa8)
            arg3.b = *eax_20
            *(esi + 0xa8) = &eax_20[1]
        else
            *(esi + 0x20) = eax_14
            *(esi + 0xac) = esi + 0x29
            *(esi + 0x28) = 0
            char* eax_16 = *(esi + 0xa8)
            arg3.b = *eax_16
            *(esi + 0xa8) = &eax_16[1]
    
    *ebx_1 = arg3.b
    arg1 = *(esi + 0xa8)
    
    if (arg1 u< *(esi + 0xac))
        arg3.b = *arg1
        *(esi + 0xa8) = &arg1[1]
    else if (*(esi + 0x20) == 0)
        arg3.b = 0
    else
        void* eax_23
        eax_23, arg3 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
        *(esi + 0xa8) = esi + 0x28
        
        if (eax_23 != 0)
            *(esi + 0xac) = eax_23 + 0x28 + esi
            char* eax_28 = *(esi + 0xa8)
            arg3.b = *eax_28
            *(esi + 0xa8) = &eax_28[1]
        else
            *(esi + 0x20) = eax_23
            *(esi + 0xac) = esi + 0x29
            *(esi + 0x28) = 0
            char* eax_25 = *(esi + 0xa8)
            arg3.b = *eax_25
            *(esi + 0xa8) = &eax_25[1]
    
    *(ebx_1 - 1) = arg3.b
    arg1.b = arg5 == var_8_1
    arg3 = var_8_1 + 1
    arg1.b -= 1
    var_8_1 = arg3
    *(ebx_1 + 2) = arg1.b
    ebx_1 += 4
while (arg3 s< arg4)
