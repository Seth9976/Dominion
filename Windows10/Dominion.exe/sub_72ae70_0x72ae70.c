// 函数: sub_72ae70
// 地址: 0x72ae70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0
int32_t i_1 = arg4
int32_t i = arg4
uint32_t esi = arg3
char* edi = arg2

if (arg4 s> 0)
    do
        int32_t edx = *(esi + 0xac)
        char* eax_1 = *(esi + 0xa8)
        
        if (eax_1 u< edx)
            arg3.b = *eax_1
            eax_1 = &eax_1[1]
            *(esi + 0xa8) = eax_1
        else if (*(esi + 0x20) == 0)
            arg3.b = 0
        else
            int32_t eax_4
            eax_4, arg3 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
            
            if (eax_4 != 0)
                edx = esi + 0x28 + eax_4
                eax_1 = esi + 0x29
                *(esi + 0xac) = edx
                arg3.b = *(esi + 0x28)
                *(esi + 0xa8) = eax_1
            else
                edx = esi + 0x29
                *(esi + 0x20) = eax_4
                *(esi + 0xac) = edx
                arg3.b = eax_4.b
                *(esi + 0x28) = eax_4.b
                eax_1 = esi + 0x29
                *(esi + 0xa8) = eax_1
        
        arg3 = zx.d(arg3.b)
        
        if (arg3 != 0x80)
            if (arg3 u< 0x80)
                uint32_t var_c = arg3 + 1
                
                if (arg3 + 1 u> i)
                    return 0
                
                var_8 += arg3 + 1
                bool cond:2_1
                
                do
                    char* eax_5 = *(esi + 0xa8)
                    
                    if (eax_5 u< *(esi + 0xac))
                        arg3.b = *eax_5
                        *(esi + 0xa8) = &eax_5[1]
                    else if (*(esi + 0x20) == 0)
                        arg3.b = 0
                    else
                        void* eax_8
                        eax_8, arg3 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                        
                        if (eax_8 != 0)
                            *(esi + 0xac) = eax_8 + 0x28 + esi
                            arg3.b = *(esi + 0x28)
                            *(esi + 0xa8) = esi + 0x29
                        else
                            *(esi + 0x20) = eax_8
                            *(esi + 0xac) = esi + 0x29
                            *(esi + 0x28) = 0
                            arg3.b = *(esi + 0x28)
                            *(esi + 0xa8) = esi + 0x29
                    
                    *edi = arg3.b
                    edi = &edi[4]
                    cond:2_1 = var_c != 1
                    var_c -= 1
                while (cond:2_1)
            else if (arg3 u> 0x80)
                int32_t j_1 = 0x101 - arg3
                
                if (j_1 s> i_1)
                    return 0
                
                if (eax_1 u< edx)
                    arg3.b = *eax_1
                    *(esi + 0xa8) = &eax_1[1]
                else if (*(esi + 0x20) == 0)
                    arg3.b = 0
                else
                    int32_t eax_17
                    eax_17, arg3 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                    
                    if (eax_17 != 0)
                        *(esi + 0xac) = eax_17 + 0x28 + esi
                        arg3.b = *(esi + 0x28)
                        *(esi + 0xa8) = esi + 0x29
                    else
                        *(esi + 0x20) = eax_17
                        *(esi + 0xac) = esi + 0x29
                        *(esi + 0x28) = 0
                        arg3.b = *(esi + 0x28)
                        *(esi + 0xa8) = esi + 0x29
                
                var_8 += j_1
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        *edi = arg3.b
                        edi = &edi[4]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
        
        i = arg4 - var_8
        i_1 = i
    while (i s> 0)

return 1
