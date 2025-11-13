// 函数: sub_688c00
// 地址: 0x688c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_4 = data_cf65b8
int32_t* ecx = data_147abf0

if (*(eax_4 + 0x2a) != 0)
    char edx = *(eax_4 + 0x28)
    int32_t xmm0_3
    
    if (edx != 0 && data_cc8ddf != 0)
        float xmm0_1 = ecx[9]
        
        if (data_147d254 != 0)
            xmm0_3 = __minss_xmmss_memss(xmm0_1 + 0.0399999991f, 0x3f800000)
        else
            xmm0_3 = __maxss_xmmss_memss(xmm0_1 - 0.0399999991f, 0)
    else if (*(data_cf65b4 + 0x18) != 0 || edx != 0)
        xmm0_3 = __minss_xmmss_memss(ecx[9] f+ 0.0399999991f, 0x3f800000)
    else
        xmm0_3 = __maxss_xmmss_memss(ecx[9] f- 0.0399999991f, 0)
    
    ecx[9] = xmm0_3

void* esi = nullptr

while (true)
    if (esi != 0)
        esi += 0x64
    else
        esi = *ecx
    
    int32_t eax_2 = ecx[1] * 0x64 + *ecx
    
    if (esi u>= eax_2)
        break
    
    while ((*(esi + 0x60) & 0xffff0000) == 0)
        esi += 0x64
        
        if (esi u>= eax_2)
            goto label_688ca9
    
    sub_688ac0(esi)
    ecx = data_147abf0

label_688ca9:
jump(*(*data_147abec + 0x18))
