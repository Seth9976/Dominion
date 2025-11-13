// 函数: sub_51c9c0
// 地址: 0x51c9c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t i_1 = 0
int32_t* ebx = arg1 + 0x584
int32_t i

do
    int32_t esi_1 = ebx[-1]
    
    if (esi_1 == 0)
        break
    
    uint32_t eax_1
    
    if (esi_1 - 0xdb1 u<= 0x15)
        switch (esi_1)
            case 0xdb1, 0xdb2
                int32_t j = *ebx
                
                if (j s<= 0x929)
                    switch (j)
                        case 0x100
                            *arg2 = 0x18
                            int32_t eax_2
                            eax_2.b = 1
                            return eax_2
                        case 0x105, 0x106
                            *arg2 = 0x3b
                            int32_t eax_3
                            eax_3.b = 1
                            return eax_3
                        case 0x500
                            *arg2 = 0x34
                            j.b = 1
                            return j
                        case 0x911
                            *arg2 = 0x48
                            int32_t eax_4
                            eax_4.b = 1
                            return eax_4
                        case 0x923
                            *arg2 = 0x4b
                            int32_t eax_5
                            eax_5.b = 1
                            return eax_5
                        case 0x929
                        label_51ca87:
                            *arg2 = 0x1a
                            j.b = 1
                            return j
                else if (j s> 0xd2b)
                    if (j s<= 0xf46)
                        if (j == 0xf46)
                            *arg2 = 0x52
                            j.b = 1
                            return j
                        
                        if (j - 0xd2c u<= 3)
                            switch (j)
                                case 0xd2c, 0xd2d, 0xd2e
                                    *arg2 = 8
                                case 0xd2f
                                    *arg2 = 0x5f
                else if (j == 0xd2b)
                    *arg2 = 0x5f
                else
                    if (j == 0x92e)
                        *arg2 = 0x57
                        j.b = 1
                        return j
                    
                    if (j == 0x92a)
                        goto label_51ca87
                    
                    if (j == 0x92b)
                        goto label_51ca87
                    
                    if (j == 0xd28)
                        *arg2 = 0x5f
                
                int32_t eax_6 = 0
                
                while (*(arg1 + (eax_6 << 2)) != j)
                    eax_6 += 1
                    
                    if (eax_6 s>= 0xa)
                        *arg2 = 0x1a
                        eax_6.b = 1
                        return eax_6
            case 0xdb5, 0xdb6
            label_51cbc2:
                *arg2 = 0x21
                eax_1.b = 1
                return eax_1
            case 0xdb8, 0xdba
                eax_1 = *ebx
                
                if (eax_1 == 0x103)
                    *arg2 = 0x20
                    eax_1.b = 1
                    return eax_1
                
                if (eax_1 == 0x100)
                    *arg2 = 0x1c
                    int32_t eax_8
                    eax_8.b = 1
                    return eax_8
                
                if (eax_1 == 0x101)
                    *arg2 = 0x65
                    eax_1.b = 1
                    return eax_1
                
                if (eax_1 == 0x923)
                    *arg2 = 0x24
                    eax_1.b = 1
                    return eax_1
                
                if (esi_1 == 0xdba)
                    goto label_51cbc2
            case 0xdbb, 0xdbc
                *arg2 = 0x2b
                eax_1.b = 1
                return eax_1
            case 0xdbe
                *arg2 = 0x3d
                eax_1.b = 1
                return eax_1
            case 0xdbf
                *arg2 = 0x55
                eax_1.b = 1
                return eax_1
            case 0xdc0
                *arg2 = 0x1f
                eax_1.b = 1
                return eax_1
            case 0xdc1, 0xdc6
                *arg2 = 0x1b
                eax_1.b = 1
                return eax_1
    ebx = &ebx[5]
    i = i_1 + 1
    i_1 = i
while (i s< 0x20)

i.b = 0
return i
