// 函数: sub_720ca0
// 地址: 0x720ca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t* ebx = arg1
int32_t eax_28

do
    uint32_t edx_1
    
    if (ebx[0x11f2] == 0)
        void* esi_1 = *ebx
        char* eax_1 = *(esi_1 + 0xa8)
        
        if (eax_1 u< *(esi_1 + 0xac))
            arg1.b = *eax_1
            *(esi_1 + 0xa8) = &eax_1[1]
        else if (*(esi_1 + 0x20) == 0)
            arg1.b = 0
        else
            void* eax_4
            eax_4, arg1 = (*(esi_1 + 0x10))(*(esi_1 + 0x1c), esi_1 + 0x28, *(esi_1 + 0x24))
            
            if (eax_4 != 0)
                *(esi_1 + 0xac) = eax_4 + 0x28 + esi_1
                arg1.b = *(esi_1 + 0x28)
                *(esi_1 + 0xa8) = esi_1 + 0x29
            else
                *(esi_1 + 0x20) = eax_4
                *(esi_1 + 0xac) = esi_1 + 0x29
                *(esi_1 + 0x28) = 0
                arg1.b = *(esi_1 + 0x28)
                *(esi_1 + 0xa8) = esi_1 + 0x29
        
        edx_1 = zx.d(arg1.b)
        
        if (edx_1 == 0xff)
            void* esi_2 = *ebx
            char* eax_10 = *(esi_2 + 0xa8)
            
            if (eax_10 u< *(esi_2 + 0xac))
                arg1.b = *eax_10
                *(esi_2 + 0xa8) = &eax_10[1]
            else if (*(esi_2 + 0x20) == 0)
                arg1.b = 0
            else
                void* eax_13
                eax_13, arg1 = (*(esi_2 + 0x10))(*(esi_2 + 0x1c), esi_2 + 0x28, *(esi_2 + 0x24))
                
                if (eax_13 != 0)
                    *(esi_2 + 0xac) = eax_13 + 0x28 + esi_2
                    arg1.b = *(esi_2 + 0x28)
                    *(esi_2 + 0xa8) = esi_2 + 0x29
                else
                    *(esi_2 + 0x20) = eax_13
                    *(esi_2 + 0xac) = esi_2 + 0x29
                    *(esi_2 + 0x28) = 0
                    arg1.b = *(esi_2 + 0x28)
                    *(esi_2 + 0xa8) = esi_2 + 0x29
            
            uint32_t i
            
            for (i = zx.d(arg1.b); i == 0xff; i = zx.d(arg1.b))
                void* esi_3 = *ebx
                char* eax_19 = *(esi_3 + 0xa8)
                
                if (eax_19 u< *(esi_3 + 0xac))
                    arg1.b = *eax_19
                    *(esi_3 + 0xa8) = &eax_19[1]
                else if (*(esi_3 + 0x20) == 0)
                    arg1.b = 0
                else
                    void* eax_22
                    eax_22, arg1 = (*(esi_3 + 0x10))(*(esi_3 + 0x1c), esi_3 + 0x28, *(esi_3 + 0x24))
                    
                    if (eax_22 != 0)
                        *(esi_3 + 0xac) = eax_22 + 0x28 + esi_3
                        arg1.b = *(esi_3 + 0x28)
                        *(esi_3 + 0xa8) = esi_3 + 0x29
                    else
                        *(esi_3 + 0x20) = eax_22
                        *(esi_3 + 0xac) = esi_3 + 0x29
                        *(esi_3 + 0x28) = 0
                        arg1.b = *(esi_3 + 0x28)
                        *(esi_3 + 0xa8) = esi_3 + 0x29
            
            if (i != 0)
                ebx[0x11f1].b = i.b
                ebx[0x11f2] = 1
                return i
    else
        edx_1 = 0
    
    eax_28 = ebx[0x11f0]
    ebx[0x11ef] |= edx_1 << (0x18 - eax_28).b
    ebx[0x11f0] = eax_28 + 8
while (eax_28 + 8 s<= 0x18)

return eax_28 + 8
