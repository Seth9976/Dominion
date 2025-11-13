// 函数: sub_4aceb0
// 地址: 0x4aceb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg1 + 0xbd4) == 0xffffffff)
    int32_t eax
    eax.b = 0
    return eax

*arg2 = 0
int32_t ecx = *(arg1 + 0xbd4)
int32_t ecx_1 = ecx - 1
void* edx

if (ecx - 1 s< 0)
label_4acf01:
    edx = arg1 + 0xbbc
else
    edx = arg1 + 0xbbc
    void* eax_4 = (ecx_1 << 4) + 0x25c + arg1
    
    while (true)
        if (ecx_1 s>= *(arg1 + 0xbbc))
            goto label_4acf01
        
        if (*eax_4 != 0)
            if (ecx_1 != 0xffffffff)
                *arg2 = 2
            
            break
        
        eax_4 -= 0x10
        int32_t temp2_1 = ecx_1
        ecx_1 -= 1
        
        if (temp2_1 - 1 s< 0)
            goto label_4acf01

int32_t eax_5 = *(arg1 + 0xbd4)
int32_t i = eax_5 + 1

if (eax_5 + 1 s>= 0)
    void* ecx_5 = (i << 4) + 0x25c + arg1
    
    while (i s< *edx)
        if (*ecx_5 != 0)
            if (i != 0xffffffff)
                *arg2 |= 4
            
            break
        
        ecx_5 += 0x10
        int32_t i_1 = i
        i += 1
        
        if (i_1 + 1 s< 0)
            i.b = 1
            return i

i.b = 1
return i
