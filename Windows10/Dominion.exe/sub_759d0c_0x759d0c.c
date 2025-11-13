// 函数: sub_759d0c
// 地址: 0x759d0c
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

data_cc8d30 = 0
data_8c4010 |= 1

if (IsProcessorFeaturePresent(PF_XMMI64_INSTRUCTIONS_AVAILABLE) != 0)
    int32_t ebx
    int32_t var_30_1 = ebx
    int32_t eax_1
    int32_t ecx_1
    int32_t edx_1
    int32_t ebx_1
    eax_1, ebx_1, ecx_1, edx_1 = __cpuid(0, 0)
    int32_t var_3c_2 = ebx
    int32_t eax_7
    int32_t ecx_2
    int32_t edx_2
    int32_t ebx_3
    eax_7, ebx_3, ecx_2, edx_2 = __cpuid(1, 0)
    int32_t var_28_2 = ebx_3
    int32_t var_20_2 = edx_2
    
    if (((edx_1 ^ 0x49656e69) | (ecx_1 ^ 0x6c65746e) | (ebx_1 ^ 0x756e6547)) == 0)
        int32_t eax_12 = eax_7 & 0xfff3ff0
        
        if (eax_12 == 0x106c0 || eax_12 == 0x20660 || eax_12 == 0x20670 || eax_12 == 0x30650
                || eax_12 == 0x30660 || eax_12 == 0x30670)
            data_cc8d34 |= 1
    
    int32_t ebx_4 = 0
    int32_t var_18_2 = 0
    int32_t edi_3 = 0
    int32_t var_1c_2 = 0
    
    if (eax_1 s>= 7)
        int32_t eax_13
        int32_t ecx_3
        int32_t edx_4
        int32_t ebx_5
        eax_13, ebx_5, ecx_3, edx_4 = __cpuid(7, 0)
        int32_t var_24_3 = ecx_3
        ebx_4 = ebx_5
        int32_t var_c_1 = ebx_4
        var_18_2 = edx_4
        
        if ((ebx_4 & 0x200) != 0)
            data_cc8d34 |= 2
        
        int32_t var_2c
        
        if (eax_13 s>= 1)
            int32_t var_3c_3 = ebx_4
            int32_t eax_15
            int32_t ecx_4
            int32_t edx_5
            int32_t ebx_6
            eax_15, ebx_6, ecx_4, edx_5 = __cpuid(7, 1)
            var_2c = eax_15
            int32_t var_28_4 = ebx_6
            int32_t var_24_4 = ecx_4
            ebx_4 = var_c_1
            var_1c_2 = edx_5
        
        if (eax_1 s>= 0x24)
            int32_t var_3c_4 = ebx_4
            int32_t eax_17
            int32_t ecx_5
            int32_t edx_6
            int32_t ebx_7
            eax_17, ebx_7, ecx_5, edx_6 = __cpuid(0x24, 0)
            ebx_4 = var_c_1
            var_2c = eax_17
            int32_t var_24_5 = ecx_5
            int32_t var_20_5 = edx_6
            edi_3 = ebx_7
    
    int32_t eax_19 = data_8c4010 | 2
    int32_t esi_6 = data_8c400c
    int32_t ecx_7 = data_8c4008.d & 0xfffffffe
    data_cc8d30 = 1
    data_8c4010 = eax_19
    data_8c4008.d = ecx_7
    data_8c400c = esi_6
    
    if ((ecx_2 & 0x100000) != 0)
        data_cc8d30 = 2
        data_8c4010 = eax_19 | 4
        data_8c4008.d = ecx_7 & 0xffffffef
        data_8c400c = esi_6
        
        if ((ecx_2 & 0x8000000) != 0 && (ecx_2 & 0x10000000) != 0)
            int32_t eax_21
            int32_t edx_7
            edx_7, eax_21 = _xgetbv(0, arg1)
            int32_t var_10_2 = edx_7
            
            if ((eax_21 & 6) == 6)
                int32_t eax_25 = data_8c4010 | 8
                data_cc8d30 = 3
                data_8c4010 = eax_25
                int32_t eax_28
                int32_t ecx_9
                
                if ((ebx_4.b & 0x20) == 0)
                    ecx_9 = data_8c400c
                    eax_28 = data_8c4008.d
                else
                    ecx_9 = data_8c400c
                    data_8c4010 = eax_25 | 0x20
                    eax_28 = data_8c4008.d & 0xfffffffd
                    data_cc8d30 = 5
                    data_8c4008.d = eax_28
                    data_8c400c = ecx_9
                    
                    if ((ebx_4 & 0xd0030000) == 0xd0030000)
                        if ((eax_21 & 0xe0) != 0xe0)
                            ecx_9 = data_8c400c
                            eax_28 = data_8c4008.d
                        else
                            int32_t eax_31 = data_8c4008.d
                            data_8c4010 |= 0x40
                            eax_28 = eax_31 & 0xffffffdb
                            ecx_9 = data_8c400c
                            data_cc8d30 = 6
                            data_8c4008.d = eax_28
                            data_8c400c = ecx_9
                
                if ((var_18_2 & 0x800000) != 0)
                    data_8c400c = ecx_9
                    data_8c4008.d = eax_28 & 0xfeffffff
                
                if ((var_1c_2 & 0x80000) != 0 && (eax_21 & 0xe0) == 0xe0)
                    int32_t eax_36 = edi_3 & 0x400ff
                    data_cc8d2c = eax_36
                    int32_t ecx_10 = 0xffffffff & data_8c400c
                    int32_t edi_8 = not.d((edi_3 u>> 0x10 & 7) | 0x1000028) & data_8c4008.d
                    data_8c4008.d = edi_8
                    data_8c400c = ecx_10
                    
                    if (eax_36 u> 1)
                        data_8c400c = ecx_10
                        data_8c4008.d = edi_8 & 0xffffffbf

return 0
