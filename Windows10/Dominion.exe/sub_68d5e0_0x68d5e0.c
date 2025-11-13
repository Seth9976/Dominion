// 函数: sub_68d5e0
// 地址: 0x68d5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 - 1 u<= 0x12)
    switch (arg3 + &jump_table_68d6e4[8]:3)
        case &lookup_table_68d708[1]
            int32_t eax_9 = arg2[3]
            
            if (arg4 == 1)
                if (eax_9 - 2 u> 3)
                    return &data_877eb0
                
                switch (eax_9)
                    case 2, 4
                        return &data_877eb0
                    case 3
                        return "eine"
            else
                if (eax_9 - 2 u> 3)
                    return "einen"
                
                switch (eax_9)
                    case 2
                        return "einen"
                    case 3
                        return "eine"
                    case 4
                        return &data_877eb0
            
            return &data_801800
        case &lookup_table_68d708[2]
            switch (arg2[3] - 2)
                case 1
                    return &data_877ecc
                case 2, 3
                    return &data_877ec8
            
            return &data_877e50
        case &lookup_table_68d708[3]
            return &data_877f10
        case &lookup_table_68d708[6]
            int32_t eax_18 = arg2[3]
            
            if (arg5 != 0)
                if (eax_18 == 2)
                    return &data_877e5c
                
                return "umas"
            
            if (eax_18 == 2)
                return &data_877e64
            
            return &data_877e60
        case &lookup_table_68d708[7]
            if (arg2[3] != 2)
                return &data_877e4c
            
            return &data_877e50
        case &lookup_table_68d708[0xb], &lookup_table_68d708[0xc], &lookup_table_68d708[0xf], 
                &lookup_table_68d708[0x10], &lookup_table_68d708[0x11], &lookup_table_68d708[0x12]
            return &data_801800
        case &lookup_table_68d708[0xe]
            return &data_877f0c

char* eax_23 = *arg2
char* const ecx_1 = &data_801800

if (eax_23 != 0)
    ecx_1 = eax_23

switch (sx.d(*ecx_1) - 0x41)
    case 0, 4, 8, 0xe, 0x14, 0x20, 0x24, 0x28, 0x2e, 0x34
        return &data_877ea4

return &data_871b58
