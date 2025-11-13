// 函数: sub_5b0320
// 地址: 0x5b0320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1
int32_t ecx_1
eax_1, ecx_1 = sub_571b30(arg2, sub_5cf7e0())
uint32_t result = *(eax_1 + 0x98) & 0x20000000

if (result == 0)
label_5b0419:
    
    switch (arg4)
        case 0, 2
            int32_t var_14_4 = 0
            int32_t var_18_4 = ecx_1
            return sub_5af930(result, data_171e754, ecx_1.b)
        case 1
            int32_t var_14_5 = 0
            int32_t var_18_5 = ecx_1
            return sub_5af930(result, data_171e750, ecx_1.b)
        case 3
            int32_t var_14_6 = 0
            int32_t var_18_6 = ecx_1
            return sub_5af930(result, data_171e758, ecx_1.b)
else
    if (arg4 != 2)
        if (arg4 != 0)
            goto label_5b039f
        
        int32_t var_14_2 = arg4
        int32_t var_18_2 = ecx_1
        return sub_5af930(result, data_171e71c, ecx_1.b)
    
    result = data_b604e0
    ecx_1 = 0
    
    if (result == 0xffffffff)
        result = 0
    
    if (arg3 == result)
    label_5b039f:
        result = arg2 - 0xc32
        
        if (result u<= 0x14)
            uint32_t eax_6 = zx.d(lookup_table_5b0494[result])
            int32_t* edx_3
            
            switch (eax_6)
                case 0
                    edx_3 = data_171dc50
                case 1
                    edx_3 = data_171dc54
                case 2
                    edx_3 = data_171e718
                case 3
                    edx_3 = data_171dc58
                case 4
                    edx_3 = data_171dc5c
                case 5
                    edx_3 = data_171dc60
                case 6
                    edx_3 = data_171dc64
                case 7
                    edx_3 = data_171dc68
                case 8
                    edx_3 = data_171dc6c
                case 9
                    edx_3 = data_171dc70
                case 0xa
                    edx_3 = data_171dc74
            
            int32_t var_14_3 = 0
            int32_t var_18_3 = ecx_1
            result, ecx_1 = sub_5af930(eax_6, edx_3, ecx_1.b)
        
        goto label_5b0419
    
    if (arg2 == 0x100)
        int32_t var_14_1 = 0
        int32_t var_18_1 = 0
        return sub_5af930(result, data_171e74c, 0)

return result
