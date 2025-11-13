// 函数: sub_56fff0
// 地址: 0x56fff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t ecx

if (*eax != 4)
    uint32_t esi_2 = zx.d(sub_56b800())
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    ecx = *(esi_2 * 0x64 + edi_1 + 0x1a4c)
else
    ecx = *(eax + 0x10)

void* eax_4 = sub_571b30(ecx, *(*(eax + 4) + 0xd48))
int32_t edx_2 = 0
void* ecx_1 = eax_4 + 0xc8
int32_t result
int32_t esi_4

while (true)
    int32_t esi_3 = *(ecx_1 - 0x20)
    int32_t var_8
    
    if (esi_3 == 0)
        esi_4 = var_8
    else if (esi_3 != 0xd || *ecx_1 == 0)
        edx_2 += 1
        ecx_1 += 0xb4
        
        if (edx_2 s< 8)
            continue
        else
            esi_4 = var_8
    else
        int32_t eax_6 = edx_2 * 0xb4
        esi_4 = *(eax_6 + eax_4 + 0xbc)
        result = *(eax_6 + eax_4 + 0xc0)
        
        if (result != 0)
            break
    int32_t ecx_2 = 0
    void* eax_5 = eax_4 + 0xc4
    
    while (true)
        int32_t edx_3 = *(eax_5 - 0x1c)
        
        if (edx_3 != 0)
            if (edx_3 == 0xd && *eax_5 != 0)
                int32_t eax_7 = ecx_2 * 0xb4
                esi_4 = *(eax_7 + eax_4 + 0xbc)
                result = *(eax_7 + eax_4 + 0xc0)
                break
            
            ecx_2 += 1
            eax_5 += 0xb4
            
            if (ecx_2 s< 8)
                continue
        
        result = 0
        break
    
    break

if (result s>= 1)
    *arg1 = *(eax + 4) + (esi_4 << 2) + 0xe64
    return result

sub_63b870(result, &data_801800, "num >= 1", "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
    0x1c6c, "GetSetupPiles")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
