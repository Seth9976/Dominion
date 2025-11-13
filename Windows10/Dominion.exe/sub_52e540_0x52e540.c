// 函数: sub_52e540
// 地址: 0x52e540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

uint32_t esi_2 = zx.d((*(eax + 0x40)).w)
int32_t edi = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t edi_1 = *(esi_2 * 0x64 + edi + 0x1a4c)
void* eax_3 = sub_573400()
void* esi_3 = *(eax_3 + 4)
int32_t eax_4 = sub_57da30(esi_3, edi_1)
int32_t ecx_1 = 7
void* esi_4 = esi_3 + 0x1594
void* edi_2

while (true)
    int32_t i = *esi_4
    
    if (i != edi_1 && *(esi_4 + 4) != edi_1 && i != eax_4)
        ecx_1 += 1
        esi_4 += 0x10
        
        if (ecx_1 s< 0x48)
            continue
    else if (i != 0)
        edi_2 = 7
        int32_t* eax_6 = *(eax_3 + 4) + 0x1594
        
        while (*eax_6 != i)
            if (eax_6[1] == i)
                break
            
            edi_2 += 1
            eax_6 = &eax_6[4]
            
            if (edi_2 s>= 0x48)
                goto label_52e5d7
        
        break
    
label_52e5d7:
    edi_2 = nullptr
    break

void* eax_7 = sub_573400()
void* esi_5 = *(eax_7 + 4)
int32_t* eax_8 = sub_57da30(esi_5, 0xc32)
int32_t edx_1 = 7
void* esi_6 = esi_5 + 0x1594

while (true)
    int32_t ecx_4 = *esi_6
    
    if (ecx_4 != 0xc32)
        if (*(esi_6 + 4) != 0xc32 && ecx_4 != eax_8)
            edx_1 += 1
            esi_6 += 0x10
            
            if (edx_1 s>= 0x48)
                break
            
            continue
        
        if (ecx_4 == 0)
            break
    
    void* i_1 = 7
    eax_8 = *(eax_7 + 4) + 0x1594
    
    do
        if (*eax_8 == ecx_4)
            return sub_56cae0(eax_8, i_1, edi_2, 0x601, 1)
        
        if (eax_8[1] == ecx_4)
            return sub_56cae0(eax_8, i_1, edi_2, 0x601, 1)
        
        i_1 += 1
        eax_8 = &eax_8[4]
    while (i_1 s< 0x48)
    
    break

return sub_56cae0(eax_8, nullptr, edi_2, 0x601, 1)
