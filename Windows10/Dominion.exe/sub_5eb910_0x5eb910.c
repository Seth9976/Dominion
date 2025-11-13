// 函数: sub_5eb910
// 地址: 0x5eb910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg6
*arg8 = 0
int32_t* ecx = arg3 + 0x1ab0
*arg4 = 0
int32_t eax_2 = 1
*ebx = 0
int32_t var_10 = 1
int32_t* var_c = ecx

while (*ecx != 0)
    uint32_t esi_1 = zx.d(eax_2.w)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_3 = esi_1 * 0x64
    int32_t* ebx_2 = arg3 + 0x1a4c + eax_3
    uint32_t eax_4 = sub_5754f0(eax_3, *ebx_2, arg3, 0x200000, 0)
    int32_t eax_6
    int32_t ecx_2
    int32_t i
    int32_t* esi_2
    
    if (eax_4.b == 0)
        if (esi_1 u>= 0x320)
            eax_4 = sub_591930()
        
        uint32_t eax_9 = sub_5754f0(eax_4, *ebx_2, arg3, 0x4000000, 0)
        
        if (eax_9.b != 0)
            if (esi_1 u>= 0x320)
                sub_591930()
            
            esi_2 = arg4
            int32_t eax_10 = 0
            i = *ebx_2
            ecx_2 = *esi_2
            
            if (ecx_2 s> 0)
                do
                    if (*(arg2 + (eax_10 << 2)) == i)
                        goto label_5eb9c8_2
                    
                    eax_10 += 1
                while (eax_10 s< ecx_2)
            
            eax_6 = arg2
            goto label_5eb9c0
        
        if (esi_1 u>= 0x320)
            eax_9 = sub_591930()
        
        if (sub_5754f0(eax_9, *ebx_2, arg3, 0x40000000, 0) == 0)
        label_5eb9c8:
            ebx = arg6
        else
            if (esi_1 u>= 0x320)
                sub_591930()
            
            int32_t edx_4 = *ebx_2
            int32_t eax_12 = 0
            ebx = arg6
            int32_t ecx_8 = *ebx
            
            if (ecx_8 s> 0)
                do
                    if (*(arg5 + (eax_12 << 2)) == edx_4)
                        goto label_5eb9d3
                    
                    eax_12 += 1
                while (eax_12 s< ecx_8)
            
            *(arg5 + (ecx_8 << 2)) = edx_4
            *ebx = ecx_8 + 1
    else
        if (esi_1 u>= 0x320)
            sub_591930()
        
        esi_2 = arg8
        int32_t eax_5 = 0
        i = *ebx_2
        ecx_2 = *esi_2
        
        if (ecx_2 s<= 0)
        label_5eb9bd:
            eax_6 = arg7
        label_5eb9c0:
            *(eax_6 + (ecx_2 << 2)) = i
            *esi_2 = ecx_2 + 1
        label_5eb9c8_1:
            ebx = arg6
        else
            while (*(arg7 + (eax_5 << 2)) != i)
                eax_5 += 1
                
                if (eax_5 s>= ecx_2)
                    goto label_5eb9bd
            
        label_5eb9c8_2:
            ebx = arg6
label_5eb9d3:
    eax_2 = var_10 + 1
    ecx = &var_c[0x19]
    var_10 = eax_2
    var_c = ecx
    
    if (eax_2 s>= 0x320)
        break

int32_t i_1 = 0x27
void* ecx_5 = arg3 + 0x1794

do
    int32_t edx_1 = *ecx_5
    
    if (edx_1 == 0)
        return i_1
    
    if (edx_1 == 0xd3d)
        int32_t ecx_9 = *ebx
        int32_t eax_14 = 0
        
        if (ecx_9 s<= 0)
        label_5ebb04:
            *(arg5 + (ecx_9 << 2)) = 0xd4b
            *ebx = ecx_9 + 1
        else
            while (*(arg5 + (eax_14 << 2)) != 0xd4b)
                eax_14 += 1
                
                if (eax_14 s>= ecx_9)
                    goto label_5ebb04
        
        int32_t ecx_10 = *ebx
        int32_t eax_16 = 0
        
        if (ecx_10 s<= 0)
        label_5ebb26:
            *(arg5 + (ecx_10 << 2)) = 0xd4c
            *ebx = ecx_10 + 1
        else
            while (*(arg5 + (eax_16 << 2)) != 0xd4c)
                eax_16 += 1
                
                if (eax_16 s>= ecx_10)
                    goto label_5ebb26
        
        int32_t ecx_11 = *ebx
        int32_t eax_18 = 0
        
        if (ecx_11 s<= 0)
        label_5ebb48:
            *(arg5 + (ecx_11 << 2)) = 0xd4d
            *ebx = ecx_11 + 1
        else
            while (*(arg5 + (eax_18 << 2)) != 0xd4d)
                eax_18 += 1
                
                if (eax_18 s>= ecx_11)
                    goto label_5ebb48
        
        int32_t ecx_12 = *ebx
        i_1 = 0
        
        if (ecx_12 s> 0)
            do
                if (*(arg5 + (i_1 << 2)) == 0xd4e)
                    return i_1
                
                i_1 += 1
            while (i_1 s< ecx_12)
        
        i_1 = ecx_12 + 1
        *(arg5 + (ecx_12 << 2)) = 0xd4e
        *ebx = i_1
        return i_1
    
    i_1 += 1
    ecx_5 += 0x10
while (i_1 s<= 0x47)

return i_1
