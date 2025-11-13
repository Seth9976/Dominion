// 函数: sub_726520
// 地址: 0x726520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 == 0)
label_726580:
    arg1[2] = 0
    arg1[3] = 0
    
    while (true)
        if (arg1[2] s< 1)
            sub_725de0(arg1)
        
        int32_t eax_5 = arg1[3]
        arg1[2] -= 1
        bool cond:0_1 = arg1[2] s>= 2
        arg1[3] = eax_5 u>> 1
        
        if (not(cond:0_1))
            sub_725de0(arg1)
        
        int32_t eax_7 = arg1[3]
        arg1[2] -= 2
        uint32_t eax_8 = eax_7 u>> 2
        arg1[3] = eax_8
        int32_t ecx_7 = eax_7 & 3
        int32_t eax_9
        
        if (ecx_7 != 0)
            if (ecx_7 == 3)
                break
            
            int32_t eax_11
            
            if (ecx_7 != 1)
                eax_11 = sub_726140(arg1)
            else
                int32_t eax_10 = sub_725b60(eax_8, 0x800cf0, &arg1[8], 0x120)
                
                if (eax_10 == 0)
                    break
                
                eax_11 = sub_725b60(eax_10, 0x800cd0, &arg1[0x201], 0x20)
            
            if (eax_11 == 0)
                break
            
            eax_9 = sub_725ee0(arg1)
        else
            eax_9 = sub_7263e0(arg1)
        
        if (eax_9 == 0)
            break
        
        if ((eax_5 & 1) != 0)
            return 1
else
    char* ecx = *arg1
    int32_t edx = arg1[1]
    uint32_t eax_1
    int32_t edi_1
    
    if (ecx u< edx)
        eax_1 = zx.d(*ecx)
        *arg1 = &ecx[1]
        edi_1 = eax_1 & 0xf
        
        if (&ecx[1] u< edx)
            edx.b = ecx[1]
            *arg1 = &ecx[2]
        else
            edx.b = 0
    else
        eax_1 = 0
        edi_1 = 0
        edx.b = 0
    
    uint32_t ecx_3 = zx.d(edx.b)
    
    if (modu.dp.d(0:((eax_1 << 8) + ecx_3), 0x1f) == 0 && (ecx_3.b & 0x20) == 0 && edi_1 == 8)
        goto label_726580

return 0
