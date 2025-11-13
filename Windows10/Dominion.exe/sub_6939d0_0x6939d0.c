// 函数: sub_6939d0
// 地址: 0x6939d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* esi = arg1
int32_t edi_1 = *arg2 - 1

switch (edi_1)
    case 0, 2, 4, 6, 8, 0xc, 0x11, 0x13, 0x15, 0x17
        arg1.b = 1
        goto label_693a01
    case 1, 3, 5, 7, 0xa, 0xb, 0x10, 0x12, 0x14, 0x16
        arg1.b = 0
    label_693a01:
        char var_8_1 = arg1.b
        uint32_t eax
        
        switch (edi_1)
            case 0, 1
                switch (arg2[1] - 9)
                    case 0
                        esi[7] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x2b] = arg1.b
                    case 4
                        esi[5] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x29] = arg1.b
                    case 0x12
                        esi[6] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x2a] = arg1.b
                    case 0x17
                        esi[4] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x28] = arg1.b
                    case 0x1c
                        esi[8] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x2c] = arg1.b
                    case 0x1d
                        esi[0xa] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x2e] = arg1.b
                    case 0x1e
                        esi[9] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x2d] = arg1.b
                    case 0x1f
                        esi[0xb] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x2f] = arg1.b
                    case 0x4d
                        if (arg2[2] == 2)
                            esi[0xe] = arg1.b
                            
                            if (arg1.b != 0)
                                esi[0x32] = arg1.b
            case 2, 3
                *esi = arg1.b
                
                if (arg1.b != 0)
                    esi[0x24] = arg1.b
            case 6, 7
                esi[1] = arg1.b
                
                if (arg1.b != 0)
                    esi[0x25] = arg1.b
            case 8
                if (arg2[3] s<= 0)
                    esi[3] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x27] = arg1.b
                else
                    esi[2] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x26] = arg1.b
            case 0xa
                esi[0x23] = arg1.b
                
                if (arg1.b != 0)
                    esi[0x47] = arg1.b
            case 0xb, 0xc
                eax = arg2[1]
                
                if (eax s> 0x200)
                    if (eax == 0x8000)
                        esi[0x12] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x36] = arg1.b
                    
                    if (eax == 0x4000)
                        esi[0x11] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x35] = arg1.b
                    else if (eax == 0x1000)
                        esi[0xf] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x33] = arg1.b
                    else if (eax == 0x2000)
                        esi[0x10] = arg1.b
                        
                        if (arg1.b != 0)
                            esi[0x34] = arg1.b
                else if (eax == 0x200)
                    esi[0x18] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x3c] = arg1.b
                else if (eax - 4 u<= 0xfc)
                    switch (eax + &jump_table_693f84[5])
                        case &lookup_table_693f9c
                            esi[0x15] = arg1.b
                            
                            if (arg1.b != 0)
                                esi[0x39] = arg1.b
                        case &lookup_table_693f9c[4]
                            esi[0x17] = arg1.b
                            
                            if (arg1.b != 0)
                                esi[0x3b] = arg1.b
                        case &lookup_table_693f9c[0xc]
                            esi[0x14] = arg1.b
                            
                            if (arg1.b != 0)
                                esi[0x38] = arg1.b
                        case &lookup_table_693f9c[0x1c]
                            esi[0x13] = arg1.b
                            
                            if (arg1.b != 0)
                                esi[0x37] = arg1.b
                        case &lookup_table_693f9c[0xfc]
                            esi[0x16] = arg1.b
                            
                            if (arg1.b != 0)
                                esi[0x3a] = arg1.b
            case 0xd, 0xe
                int32_t ecx
                ecx.b = arg2[3] != 0
                eax = arg2[1] - 2
                
                if (eax u<= 0xe)
                    eax = zx.d(lookup_table_693f74[eax])
                    
                    switch (eax)
                        case 0
                            sub_693960(eax, ecx, esi, 0x2a, var_8_1)
                        case 1
                            sub_693960(eax, ecx, esi, 0x28, var_8_1)
                        case 2
                            sub_693960(eax, ecx, esi, 0x29, var_8_1)
                        case 3
                            sub_693960(eax, ecx, esi, 0x27, var_8_1)
            case 0x10, 0x11
                eax = arg2[1]
                
                if (eax == 0x100000)
                    esi[0x19] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x3d] = arg1.b
                else if (eax == 0x200000)
                    esi[0x1a] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x3e] = arg1.b
                
                if (eax == 0x80000)
                    esi[0x1e] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x42] = arg1.b
                else if (eax == 0x10000)
                    esi[0x1b] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x3f] = arg1.b
                else if (eax == 0x20000)
                    esi[0x1c] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x40] = arg1.b
                else if (eax == 0x40000)
                    esi[0x1d] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x41] = arg1.b
            case 0x12, 0x13
                int32_t eax_2 = arg2[1]
                
                if (eax_2 == 1)
                    esi[0x50] = arg1.b
                    return 
                
                if (eax_2 == 2)
                    esi[0x51] = arg1.b
                    return 
                
                if (eax_2 == 0x10)
                    esi[0x52] = arg1.b
            case 0x14, 0x15
                eax = arg2[1]
                
                if (eax == 0x100)
                    esi[0x48] = arg1.b
                    return 
                
                if (eax == 0x200)
                    esi[0x49] = arg1.b
                    return 
                
                if (eax == 0x1000)
                    esi[0x4a] = arg1.b
            case 0x16, 0x17
                int32_t eax_9 = arg2[1]
                
                if (eax_9 == 1)
                    esi[0x1f] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x43] = arg1.b
                else if (eax_9 == 0x100000)
                    esi[0x20] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x44] = arg1.b
                else if (eax_9 == 0x200000)
                    esi[0x21] = arg1.b
                    
                    if (arg1.b != 0)
                        esi[0x45] = arg1.b
