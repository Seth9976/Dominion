// 函数: sub_560ce0
// 地址: 0x560ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg1)
int32_t ebx = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t edi = esi * 0x64
int32_t ebx_1

if (*(edi + ebx + 0x1a4c) != 0x105)
    ebx_1 = *(sub_573400() + 4)
    
    if (esi u>= 0x320)
        sub_591930()

void* eax_1

if (*(edi + ebx + 0x1a4c) == 0x105 || *(edi + ebx_1 + 0x1a4c) == 0x106)
    int32_t ecx_1 = 0
    eax_1 = *(sub_573400() + 4)
    int32_t edx_1 = *(eax_1 + 0x19b8)
    
    if (edx_1 s> 0)
        int32_t esi_1 = *(eax_1 + 0x19cc)
        eax_1 += 0x3b5e4
        
        do
            if (*(eax_1 - 0x64) == esi_1 && *eax_1 == 0xe)
                void* eax_3 = sub_573400()
                int32_t i = 0
                int32_t edx_2 = *(eax_3 + 4)
                arg1.d = edx_2
                void* eax_5 = *(eax_3 + 0xc) * 0x5a30 + edx_2
                
                if (*(eax_5 + 0x1752c) s> 0)
                    void* ebx_2 = eax_5 + 0x18e78
                    
                    do
                        uint32_t esi_3 = zx.d((*ebx_2).w)
                        
                        if (esi_3 u>= 0x320)
                            sub_591930()
                            edx_2 = arg1.d
                        
                        eax_1 = esi_3 * 0x64 + 0x1a4c + edx_2
                        
                        if (*eax_1 == 0x105)
                            goto label_560d67
                        
                        if (esi_3 u>= 0x320)
                            sub_591930()
                            edx_2 = arg1.d
                        
                        if (*eax_1 == 0x106)
                            goto label_560d67
                        
                        i += 1
                        ebx_2 += 4
                    while (i s< *(eax_5 + 0x1752c))
                
                eax_5.b = 1
                return eax_5
            
            ecx_1 += 1
            eax_1 += 0xa8
        while (ecx_1 s< edx_1)

label_560d67:
eax_1.b = 0
return eax_1
