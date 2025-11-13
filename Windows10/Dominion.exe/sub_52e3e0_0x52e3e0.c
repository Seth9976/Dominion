// 函数: sub_52e3e0
// 地址: 0x52e3e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebx = zx.d(arg1)
int32_t edi = *(sub_573400() + 4)

if (ebx u>= 0x320)
    sub_591930()

int32_t eax_1 = ebx * 0x64
int32_t edi_1 = *(eax_1 + edi + 0x1a4c)
void* eax_2 = sub_573400()
void* esi = *(eax_2 + 4)
int32_t eax_3 = sub_57da30(esi, edi_1)
int32_t edx_1 = 7
void* ecx_1 = esi + 0x1594
int32_t esi_1

while (true)
    int32_t i = *ecx_1
    
    if (i != edi_1 && *(ecx_1 + 4) != edi_1 && i != eax_3)
        edx_1 += 1
        ecx_1 += 0x10
        
        if (edx_1 s< 0x48)
            continue
    else if (i != 0)
        esi_1 = 7
        int32_t* eax_6 = *(eax_2 + 4) + 0x1594
        
        while (*eax_6 != i)
            if (eax_6[1] == i)
                break
            
            esi_1 += 1
            eax_6 = &eax_6[4]
            
            if (esi_1 s>= 0x48)
                goto label_52e476
        
        break
    
label_52e476:
    esi_1 = 0
    break

void* eax_7 = sub_573400()
void* edi_2 = *(eax_7 + 4)

if (ebx u>= 0x320)
    eax_7 = sub_591930()

if (sub_5754f0(eax_7, *(eax_1 + edi_2 + 0x1a4c), edi_2, 2, 0) == 0)
    return 0

void* eax_9
int32_t edx_4
eax_9, edx_4 = sub_573400()
int32_t result
result.b = sub_583f70(eax_9, edx_4, *(eax_9 + 4), 0x601, esi_1) != 0
return result
