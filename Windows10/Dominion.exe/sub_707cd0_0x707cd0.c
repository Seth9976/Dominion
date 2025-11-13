// 函数: sub_707cd0
// 地址: 0x707cd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edi = nullptr
void* esi = nullptr
void* eax = *arg3

if (eax != arg2)
    edi = eax
    
    do
        esi = eax
        
        if (*eax == 0xa)
            break
        
        esi = eax + 1
        *arg3 = esi
        eax = esi
    while (esi != arg2)
    
    bool cond:1_1
    
    if (isspace(zx.d(*edi)) == 0)
    label_707d2a:
        cond:1_1 = edi == esi
    else
        while (true)
            cond:1_1 = edi == esi
            
            if (edi u>= esi)
                break
            
            uint32_t _C = zx.d(edi[1])
            edi = &edi[1]
            
            if (isspace(_C) == 0)
                goto label_707d2a
    
    if (not(cond:1_1))
        char* esi_1 = esi - 1
        
        if (*esi_1 == 0xd)
            while (esi_1 u>= edi)
                esi_1 -= 1
                
                if (*esi_1 != 0xd)
                    break
        
        esi = &esi_1[1]
    
    eax = *arg3
    
    if (eax != arg2)
        *arg3 = eax + 1

while (edi != esi)
    eax.b = *edi
    edi = &edi[1]
    
    if (eax.b == 0x3a)
        void* ebx_1 = arg4
        int32_t i = 0
        int32_t i_1 = 0
        
        do
            *ebx_1 = edi
            char* ecx = edi
            
            if (edi == esi)
                break
            
            while (true)
                eax.b = *ecx
                ecx = &ecx[1]
                
                if (eax.b == 0x2c)
                    break
                
                if (ecx == esi)
                    goto label_707da6
            
            edi = ecx
            *(ebx_1 + 4) = &edi[0xfffffffe]
            sub_707be0(ebx_1)
            ebx_1 += 8
            i = i_1 + 1
            i_1 = i
        while (i s< 3)
        
    label_707da6:
        int32_t* ecx_3 = arg4 + (i << 3)
        *ecx_3 = edi
        ecx_3[1] = esi
        sub_707be0(ecx_3)
        return i_1 + 1

return 0
