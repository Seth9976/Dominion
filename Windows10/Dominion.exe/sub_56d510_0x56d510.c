// 函数: sub_56d510
// 地址: 0x56d510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t edi_1 = *(esi_1 * 0x64 + edi + 0x1a4c)
void* eax_3 = sub_573400()
void* esi_2 = *(eax_3 + 4)
int32_t* eax_4 = sub_57da30(esi_2, edi_1)
int32_t edx_1 = 7
void* ecx_1 = esi_2 + 0x1594

while (true)
    int32_t esi_3 = *ecx_1
    
    if (esi_3 != edi_1 && *(ecx_1 + 4) != edi_1 && esi_3 != eax_4)
        edx_1 += 1
        ecx_1 += 0x10
        
        if (edx_1 s>= 0x48)
            break
        
        continue
    
    if (esi_3 == 0)
        break
    
    void* i = 7
    eax_4 = *(eax_3 + 4) + 0x1594
    
    do
        if (*eax_4 == esi_3)
            return sub_56cae0(eax_4, 0x3f1, i, 0x601, arg2)
        
        if (eax_4[1] == esi_3)
            return sub_56cae0(eax_4, 0x3f1, i, 0x601, arg2)
        
        i += 1
        eax_4 = &eax_4[4]
    while (i s< 0x48)
    
    break

return sub_56cae0(eax_4, 0x3f1, nullptr, 0x601, arg2)
