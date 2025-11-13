// 函数: sub_722720
// 地址: 0x722720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
char eax = arg1[0x11f1].b
int32_t* var_8_1 = arg1

if (eax != 0xff)
    arg1[0x11f1].b = 0xff
    return eax

void* esi = *arg1
char* eax_1 = *(esi + 0xa8)
char edx

if (eax_1 u< *(esi + 0xac))
    edx = *eax_1
    eax_1 = &eax_1[1]
label_722798:
    *(esi + 0xa8) = eax_1
    
    if (edx == 0xff)
        do
            void* esi_1 = *arg1
            char* ecx = *(esi_1 + 0xa8)
            void* ecx_1
            
            if (ecx u>= *(esi_1 + 0xac))
                if (*(esi_1 + 0x20) == 0)
                    eax_1.b = 0
                    return eax_1
                
                void* eax_8 = (*(esi_1 + 0x10))(*(esi_1 + 0x1c), esi_1 + 0x28, *(esi_1 + 0x24))
                
                if (eax_8 != 0)
                    *(esi_1 + 0xac) = eax_8 + 0x28 + esi_1
                else
                    *(esi_1 + 0x20) = eax_8
                    *(esi_1 + 0xac) = esi_1 + 0x29
                    *(esi_1 + 0x28) = 0
                
                eax_1.b = *(esi_1 + 0x28)
                ecx_1 = esi_1 + 0x29
            else
                eax_1.b = *ecx
                ecx_1 = &ecx[1]
            
            *(esi_1 + 0xa8) = ecx_1
            arg1 = var_8_1
        while (eax_1.b == 0xff)
        
        return eax_1
else if (*(esi + 0x20) != 0)
    void* eax_3 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
    
    if (eax_3 != 0)
        *(esi + 0xac) = eax_3 + 0x28 + esi
    else
        *(esi + 0x20) = eax_3
        *(esi + 0xac) = esi + 0x29
        *(esi + 0x28) = 0
    
    edx = *(esi + 0x28)
    eax_1 = esi + 0x29
    arg1 = var_8_1
    goto label_722798
eax_1.b = 0xff
return eax_1
