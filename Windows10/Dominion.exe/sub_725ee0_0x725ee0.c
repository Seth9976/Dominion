// 函数: sub_725ee0
// 地址: 0x725ee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edi = arg1[4]

while (true)
    if (arg1[2] s< 0x10)
        sub_725de0(arg1)
    
    int32_t edx_1 = arg1[3]
    uint32_t eax_3 = zx.d(*(&arg1[8] + ((edx_1 & 0x1ff) << 1)))
    uint32_t eax_4
    
    if (eax_3 == 0)
        eax_4 = sub_725e20(arg1, &arg1[8])
    else
        uint32_t ecx_2 = eax_3 u>> 9
        arg1[2] -= ecx_2
        eax_4 = eax_3 & 0x1ff
        arg1[3] = edx_1 u>> ecx_2.b
    
    if (eax_4 s>= 0x100)
        if (eax_4 == 0x100)
            arg1[4] = edi
            return 1
        
        int32_t ecx_5 = (&data_800a0c)[eax_4]
        uint32_t count = (&data_800a8c)[eax_4]
        
        if (ecx_5 != 0)
            if (arg1[2] s< ecx_5)
                sub_725de0(arg1)
            
            int32_t edx_4 = arg1[3]
            arg1[2] -= ecx_5
            arg1[3] = edx_4 u>> ecx_5.b
            count += ((1 << ecx_5.b) - 1) & edx_4
        
        void* ecx_7 = &arg1[0x201]
        
        if (arg1[2] s< 0x10)
            sub_725de0(arg1)
            ecx_7 = &arg1[0x201]
        
        int32_t edx_5 = arg1[3]
        uint32_t eax_16 = zx.d(*(ecx_7 + ((edx_5 & 0x1ff) << 1)))
        uint32_t eax_17
        
        if (eax_16 == 0)
            eax_17 = sub_725e20(arg1, ecx_7)
        else
            uint32_t ecx_10 = eax_16 u>> 9
            arg1[2] -= ecx_10
            eax_17 = eax_16 & 0x1ff
            arg1[3] = edx_5 u>> ecx_10.b
        
        if (eax_17 s< 0)
            break
        
        int32_t ecx_12 = *((eax_17 << 2) + &data_800f10)
        int32_t edx_8 = *((eax_17 << 2) + &data_800f90)
        int32_t var_8_2 = edx_8
        
        if (ecx_12 != 0)
            if (arg1[2] s< ecx_12)
                sub_725de0(arg1)
            
            int32_t edx_9 = arg1[3]
            arg1[2] -= ecx_12
            arg1[3] = edx_9 u>> ecx_12.b
            edx_8 = var_8_2 + (((1 << ecx_12.b) - 1) & edx_9)
            var_8_2 = edx_8
        
        void* eax_24 = edi - arg1[5]
        
        if (eax_24 s< edx_8)
            break
        
        int32_t ecx_14 = arg1[6]
        
        if (&edi[count] u> ecx_14)
            bool cond:4_1 = arg1[7] == 0
            arg1[4] = edi
            
            if (cond:4_1)
                break
            
            uint32_t _Size = ecx_14 - arg1[5]
            uint32_t _Size_2 = _Size
            void* eax_26 = eax_24 + count
            
            if (eax_26 s> _Size)
                do
                    _Size *= 2
                while (eax_26 s> _Size)
                
                _Size_2 = _Size
            
            void* eax_27 = realloc(arg1[5], _Size)
            
            if (eax_27 == 0)
                break
            
            edx_8 = var_8_2
            arg1[4] = eax_27 + eax_24
            edi = arg1[4]
            arg1[5] = eax_27
            arg1[6] = _Size_2 + eax_27
        
        char* ecx_17 = edi - edx_8
        void* eax_25
        
        if (edx_8 == 1)
            eax_25.b = *ecx_17
            
            if (count != 0)
                memset(edi, eax_25.b.d, count)
                edi = &edi[count]
        else if (count != 0)
            uint32_t i
            
            do
                eax_25.b = *ecx_17
                ecx_17 = &ecx_17[1]
                *edi = eax_25.b
                edi = &edi[1]
                i = count
                count -= 1
            while (i != 1)
    else
        if (eax_4 s< 0)
            break
        
        int32_t ebx_2 = arg1[6]
        
        if (edi u>= ebx_2)
            bool cond:2_1 = arg1[7] == 0
            arg1[4] = edi
            
            if (cond:2_1)
                break
            
            void* edi_1 = edi - arg1[5]
            uint32_t _Size_1
            
            for (_Size_1 = ebx_2 - arg1[5]; edi_1 + 1 s> _Size_1; _Size_1 *= 2)
            
            void* eax_6 = realloc(arg1[5], _Size_1)
            
            if (eax_6 == 0)
                break
            
            arg1[5] = eax_6
            arg1[4] = eax_6 + edi_1
            edi = arg1[4]
            arg1[6] = eax_6 + _Size_1
        
        *edi = eax_4.b
        edi = &edi[1]

return 0
