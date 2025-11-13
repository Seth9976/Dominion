// 函数: sub_560ea0
// 地址: 0x560ea0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t edi = 0
void* eax_1 = *(eax + 4)
void* ecx_1 = eax_1
void* eax_3 = *(eax + 0xc) * 0x5a30 + ecx_1

if (*(eax_3 + 0x1752c) s> 0)
    void* ebx_1 = eax_3 + 0x18e78
    
    while (true)
        int32_t eax_4 = *ebx_1
        uint32_t esi_1 = zx.d(eax_4.w)
        
        if (esi_1 u>= 0x320)
            sub_591930()
            ecx_1 = eax_1
        
        int32_t* eax_7 = esi_1 * 0x64 + 0x1a4c + ecx_1
        int32_t* var_14_1 = eax_7
        
        if (sub_5754f0(eax_7, *eax_7, ecx_1, 2, 0) != 0)
            if (esi_1 u>= 0x320)
                sub_591930()
            
            int32_t* eax_9 = var_14_1
            int32_t eax_10
            
            if (*eax_9 == 0x105)
                eax_10.b = eax_4 == arg1
                return eax_10
            
            if (esi_1 u>= 0x320)
                sub_591930()
                eax_9 = var_14_1
            
            if (*eax_9 == 0x106)
                eax_10.b = eax_4 == arg1
                return eax_10
        
        edi += 1
        ebx_1 += 4
        
        if (edi s>= *(eax_3 + 0x1752c))
            break
        
        ecx_1 = eax_1

eax_3.b = 0
return eax_3
