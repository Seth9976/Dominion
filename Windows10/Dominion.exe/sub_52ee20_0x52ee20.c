// 函数: sub_52ee20
// 地址: 0x52ee20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
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
int32_t ecx_2 = 7
void* esi_4 = esi_3 + 0x1594
void* edi_2

while (true)
    int32_t i = *esi_4
    
    if (i != edi_1 && *(esi_4 + 4) != edi_1 && i != eax_4)
        ecx_2 += 1
        esi_4 += 0x10
        
        if (ecx_2 s< 0x48)
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
                goto label_52eec2
        
        break
    
label_52eec2:
    edi_2 = nullptr
    break

uint32_t esi_6 = zx.d(sub_56b800())
int32_t ebx_1 = *(sub_573400() + 4)

if (esi_6 u>= 0x320)
    sub_591930()

int32_t ebx_2 = *(esi_6 * 0x64 + ebx_1 + 0x1a4c)
void* eax_10 = sub_573400()
void* esi_7 = *(eax_10 + 4)
int32_t* eax_11 = sub_57da30(esi_7, ebx_2)
int32_t ecx_5 = 7
void* esi_8 = esi_7 + 0x1594

while (true)
    int32_t edx_2 = *esi_8
    
    if (edx_2 != ebx_2 && *(esi_8 + 4) != ebx_2 && edx_2 != eax_11)
        ecx_5 += 1
        esi_8 += 0x10
        
        if (ecx_5 s>= 0x48)
            break
        
        continue
    
    if (edx_2 == 0)
        break
    
    void* i_1 = 7
    eax_11 = *(eax_10 + 4) + 0x1594
    
    do
        if (*eax_11 == edx_2)
            return sub_56cae0(eax_11, i_1, edi_2, 0x601, 1)
        
        if (eax_11[1] == edx_2)
            return sub_56cae0(eax_11, i_1, edi_2, 0x601, 1)
        
        i_1 += 1
        eax_11 = &eax_11[4]
    while (i_1 s< 0x48)
    
    break

return sub_56cae0(eax_11, nullptr, edi_2, 0x601, 1)
