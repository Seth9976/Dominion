// 函数: sub_56e060
// 地址: 0x56e060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* eax_2
void* esi

if (arg1 != 0xd4a)
    int32_t eax_3 = *(eax + 0xc)
    esi = nullptr
    eax_2 = *(sub_573400() + 4)
    int32_t ecx_1 = *(eax_2 + 0x1520)
    
    if (ecx_1 s<= 0)
    label_56e0e1:
        esi = nullptr
    else
        eax_2 += 0x1a70
        
        while (*(eax_2 - 0x24) != arg1 || *eax_2 != eax_3)
            esi += 1
            eax_2 += 0x64
            
            if (esi s>= ecx_1)
                goto label_56e0e1_1
else
    esi = nullptr
    eax_2 = *(sub_573400() + 4)
    int32_t ecx = *(eax_2 + 0x1520)
    
    if (ecx s<= 0)
    label_56e0e1_1:
        esi = nullptr
    else
        eax_2 += 0x1a4c
        
        while (*eax_2 != 0xd4a)
            esi += 1
            eax_2 += 0x64
            
            if (esi s>= ecx)
                goto label_56e0e1_1

uint32_t var_20_1
void* eax_8
uint32_t edi_2

if (esi != 0)
    int32_t var_18_1 = 0
    int32_t var_1c_1 = 0
    var_20_1 = *(eax + 0xc)
    eax_8 = sub_573400()
    edi_2 = zx.d(esi.w)
else
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = muls.dp.d(0x51eb851f, 
        sub_5727e0(eax_2, arg1, *(eax + 4), 6, 0xffffffff, esi) - *(eax + 4) - 0x1a48)
    int32_t edx_4 = edx_3 s>> 5
    int32_t var_18 = 0
    esi = (edx_4 u>> 0x1f) + edx_4
    int32_t var_1c = 0
    var_20_1 = *(eax + 0xc)
    edi_2 = zx.d(esi.w)
    eax_8 = sub_573400()

int32_t eax_10 = *(eax_8 + 4)

if (edi_2 u>= 0x320)
    sub_591930()

return sub_565ff0(eax_10, *(edi_2 * 0x64 + eax_10 + 0x1a50), esi, var_20_1, 0x3f1, nullptr, 
    nullptr, 0xb, nullptr, nullptr)
