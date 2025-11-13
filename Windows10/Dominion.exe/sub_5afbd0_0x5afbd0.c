// 函数: sub_5afbd0
// 地址: 0x5afbd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = 0xb80ad8
int32_t* eax = sub_591f80(0xb80ad8)
int32_t* var_10 = eax

if (eax != 0)
    int32_t edx_1 = sub_57da30(0xb80ad8, arg2)
    ecx = 7
    int32_t var_c_1 = edx_1
    void* edi_1 = &data_b8206c
    int32_t var_8_1 = 7
    
    while (true)
        if (ecx s>= 0x48)
            sub_591930()
            ecx = var_8_1
            edx_1 = var_c_1
        
        eax = *edi_1
        
        if (eax != arg2 && *(edi_1 + 4) != arg2 && eax != edx_1)
            ecx += 1
            edi_1 += 0x10
            var_8_1 = ecx
            
            if (edi_1 s>= 0xb8247c)
                break
            
            continue
        
        if (eax != var_10)
            break
        
        int32_t var_28_1 = 0
        int32_t var_2c_1 = ecx
        eax, ecx = sub_5af930(eax, data_171dc10, ecx.b)
        break

if (arg2 s<= 0x600)
    if (arg2 == 0x600)
        int32_t var_28_9 = 0
        int32_t var_2c_9 = ecx
        return sub_5af930(eax, data_171dc34, ecx.b)
    
    if (arg2 - 0x100 u<= 6)
        switch (arg2)
            case 0x100
                int32_t var_28_8 = 0
                int32_t var_2c_8 = ecx
                return sub_5af930(arg2 - 0x100, data_171e6f8, ecx.b)
            case 0x101
                int32_t var_28_7 = 0
                int32_t var_2c_7 = ecx
                return sub_5af930(arg2 - 0x100, data_171dc44, ecx.b)
            case 0x102
                int32_t var_28_6 = 0
                int32_t var_2c_6 = ecx
                return sub_5af930(arg2 - 0x100, data_171dc40, ecx.b)
            case 0x103
                int32_t var_28_5 = 0
                int32_t var_2c_5 = ecx
                return sub_5af930(arg2 - 0x100, data_171dc48, ecx.b)
            case 0x104
                int32_t var_28_2 = 0
                int32_t var_2c_2 = ecx
                return sub_5af930(arg2 - 0x100, data_171dc2c, ecx.b)
            case 0x105
                int32_t var_28_3 = 0
                int32_t var_2c_3 = ecx
                return sub_5af930(arg2 - 0x100, data_171dc38, ecx.b)
            case 0x106
                int32_t var_28_4 = 0
                int32_t var_2c_4 = ecx
                return sub_5af930(arg2 - 0x100, data_171dc30, ecx.b)
else if (arg2 s<= 0x924)
    if (arg2 == 0x924)
    label_5aff91:
        int32_t var_28_17 = 0
        int32_t var_2c_17 = ecx
        return sub_5af930(eax, data_171dc28, ecx.b)
    
    if (arg2 s<= 0x70e)
        if (arg2 == 0x70e)
            int32_t edx_12 = data_b604e0
            int32_t eax_12 = edx_12
            
            if (edx_12 == 0xffffffff)
                eax_12 = 0
            
            if (arg1 == eax_12)
                int32_t var_28_11 = 0
                int32_t var_2c_11 = 0
                return sub_5af930(eax_12, data_171dc14, ecx.b)
            
            if (edx_12 == 0xffffffff)
                edx_12 = 0
            
            if (arg1 != edx_12)
                return 0
            
            data_171e35c
            return sub_688a10()
        
        if (arg2 == 0x601)
            int32_t var_28_10 = 0
            int32_t var_2c_10 = ecx
            return sub_5af930(eax, data_171dc3c, ecx.b)
    else if (arg2 - 0x70f u<= 0xe)
        switch (arg2)
            case 0x70f
                int32_t edx_14 = data_b604e0
                int32_t eax_18 = edx_14
                
                if (edx_14 == 0xffffffff)
                    eax_18 = 0
                
                if (arg1 == eax_18)
                    int32_t var_28_12 = 0
                    int32_t var_2c_12 = 0
                    return sub_5af930(eax_18, data_171dc18, ecx.b)
                
                if (edx_14 == 0xffffffff)
                    edx_14 = 0
                
                if (arg1 != edx_14)
                    return 0
                
                data_171e360
                return sub_688a10()
            case 0x710
                int32_t edx_16 = data_b604e0
                int32_t eax_21 = edx_16
                
                if (edx_16 == 0xffffffff)
                    eax_21 = 0
                
                if (arg1 == eax_21)
                    int32_t var_28_13 = 0
                    int32_t var_2c_13 = 0
                    return sub_5af930(eax_21, data_171dc1c, ecx.b)
                
                if (edx_16 == 0xffffffff)
                    edx_16 = 0
                
                if (arg1 != edx_16)
                    return 0
                
                data_171e364
                return sub_688a10()
            case 0x711
                int32_t edx_18 = data_b604e0
                int32_t eax_24 = edx_18
                
                if (edx_18 == 0xffffffff)
                    eax_24 = 0
                
                if (arg1 == eax_24)
                    int32_t var_28_14 = 0
                    int32_t var_2c_14 = 0
                    return sub_5af930(eax_24, data_171dc20, ecx.b)
                
                if (edx_18 == 0xffffffff)
                    edx_18 = 0
                
                if (arg1 != edx_18)
                    return 0
                
                data_171e368
                return sub_688a10()
            case 0x712
                int32_t edx_20 = data_b604e0
                int32_t eax_27 = edx_20
                
                if (edx_20 == 0xffffffff)
                    eax_27 = 0
                
                if (arg1 == eax_27)
                    int32_t var_28_15 = 0
                    int32_t var_2c_15 = 0
                    return sub_5af930(eax_27, data_171e36c, ecx.b)
                
                if (edx_20 == 0xffffffff)
                    edx_20 = 0
                
                if (arg1 != edx_20)
                    return 0
                
                data_171e36c
                return sub_688a10()
            case 0x71d
                int32_t edx_22 = data_b604e0
                int32_t eax_30 = edx_22
                
                if (edx_22 == 0xffffffff)
                    eax_30 = 0
                
                if (arg1 == eax_30)
                    int32_t var_28_16 = 0
                    int32_t var_2c_16 = 0
                    return sub_5af930(eax_30, data_171da80, ecx.b)
                
                if (edx_22 == 0xffffffff)
                    edx_22 = 0
                
                if (arg1 != edx_22)
                    return 0
                
                data_171dac4
                return sub_688a10()
else if (arg2 s<= 0xd29)
    if (arg2 == 0xd29)
        int32_t var_28_18 = 0
        int32_t var_2c_18 = ecx
        return sub_5af930(eax, data_171dc4c, ecx.b)
    
    eax = arg2 - 0x925
    
    if (eax u<= 3)
        goto label_5aff91
else if (arg2 == 0xd2f)
    int32_t var_28_22 = 0
    int32_t var_2c_22 = ecx
    return sub_5af930(eax, data_171dc0c, ecx.b)

void* eax_36 = sub_571b30(arg2, sub_5cf7e0())
int32_t edx_27 = *(eax_36 + 0x98)
int32_t ecx_9 = edx_27 & 2

if (ecx_9 == 0)
    int32_t var_28_21 = 0
    int32_t var_2c_21 = ecx_9
    
    if ((edx_27 & 8) == 0)
        return sub_5af930(eax_36, data_171e6f4, ecx_9.b)
    
    return sub_5af930(eax_36, data_171e708, ecx_9.b)

int32_t eax_37 = *(eax_36 + 0x90)

if (eax_37 s<= 4)
    int32_t var_28_19 = 0
    int32_t var_2c_19 = ecx_9
    return sub_5af930(eax_37, data_171e6fc, ecx_9.b)

int32_t var_28_20 = 0
int32_t var_2c_20 = ecx_9

if (eax_37 s> 6)
    return sub_5af930(eax_37, data_171e704, ecx_9.b)

return sub_5af930(eax_37, data_171e700, ecx_9.b)
