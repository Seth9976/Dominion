// 函数: sub_723b50
// 地址: 0x723b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_7202a0(*arg1)
void* esi = *arg1
char* eax_1 = *(esi + 0xa8)
char ecx_1

if (eax_1 u< *(esi + 0xac))
    ecx_1 = *eax_1
    *(esi + 0xa8) = &eax_1[1]
else if (*(esi + 0x20) == 0)
    ecx_1 = 0
else
    void* eax_4 = (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
    
    if (eax_4 != 0)
        *(esi + 0xac) = eax_4 + 0x28 + esi
        ecx_1 = *(esi + 0x28)
        *(esi + 0xa8) = esi + 0x29
    else
        *(esi + 0x20) = eax_4
        *(esi + 0xac) = esi + 0x29
        *(esi + 0x28) = 0
        ecx_1 = *(esi + 0x28)
        *(esi + 0xa8) = esi + 0x29

uint32_t ecx_2 = zx.d(ecx_1)
arg1[0x11fc] = ecx_2

if (ecx_2 - 1 u<= 3 && ecx_2 s<= *(*arg1 + 8) && eax == (ecx_2 << 1) + 6)
    uint32_t var_8_1 = 0
    void* var_c_1 = &arg1[0x11fd]
    
    while (true)
        void* esi_1 = *arg1
        char* eax_14 = *(esi_1 + 0xa8)
        
        if (eax_14 u< *(esi_1 + 0xac))
            ecx_2.b = *eax_14
            *(esi_1 + 0xa8) = &eax_14[1]
        else if (*(esi_1 + 0x20) == 0)
            ecx_2.b = 0
        else
            void* eax_17
            eax_17, ecx_2 = (*(esi_1 + 0x10))(*(esi_1 + 0x1c), esi_1 + 0x28, *(esi_1 + 0x24))
            
            if (eax_17 != 0)
                *(esi_1 + 0xac) = eax_17 + 0x28 + esi_1
                ecx_2.b = *(esi_1 + 0x28)
                *(esi_1 + 0xa8) = esi_1 + 0x29
            else
                *(esi_1 + 0x20) = eax_17
                *(esi_1 + 0xac) = esi_1 + 0x29
                *(esi_1 + 0x28) = 0
                ecx_2.b = *(esi_1 + 0x28)
                *(esi_1 + 0xa8) = esi_1 + 0x29
        
        void* esi_2 = *arg1
        uint32_t i = zx.d(ecx_2.b)
        char* eax_23 = *(esi_2 + 0xa8)
        
        if (eax_23 u< *(esi_2 + 0xac))
            ecx_2.b = *eax_23
            *(esi_2 + 0xa8) = &eax_23[1]
        else if (*(esi_2 + 0x20) == 0)
            ecx_2.b = 0
        else
            void* eax_26
            eax_26, ecx_2 = (*(esi_2 + 0x10))(*(esi_2 + 0x1c), esi_2 + 0x28, *(esi_2 + 0x24))
            
            if (eax_26 != 0)
                *(esi_2 + 0xac) = eax_26 + 0x28 + esi_2
                ecx_2.b = *(esi_2 + 0x28)
                *(esi_2 + 0xa8) = esi_2 + 0x29
            else
                *(esi_2 + 0x20) = eax_26
                *(esi_2 + 0xac) = esi_2 + 0x29
                *(esi_2 + 0x28) = 0
                ecx_2.b = *(esi_2 + 0x28)
                *(esi_2 + 0xa8) = esi_2 + 0x29
        
        int32_t edx_1 = 0
        uint32_t esi_3 = zx.d(ecx_2.b)
        int32_t ecx_3 = *(*arg1 + 8)
        
        if (ecx_3 s> 0)
            int32_t* eax_33 = &arg1[0x11a7]
            
            while (*eax_33 != i)
                edx_1 += 1
                eax_33 = &eax_33[0x12]
                
                if (edx_1 s>= ecx_3)
                    break
        
        if (edx_1 == ecx_3)
            break
        
        int32_t eax_34 = edx_1 * 9
        uint32_t ecx_5 = esi_3 u>> 4
        arg1[eax_34 * 2 + 0x11ab] = ecx_5
        
        if (ecx_5 u> 3)
            break
        
        int32_t esi_4 = esi_3 & 0xf
        arg1[eax_34 * 2 + 0x11ac] = esi_4
        
        if (esi_4 u> 3)
            break
        
        ecx_2 = var_8_1 + 1
        var_8_1 = ecx_2
        *var_c_1 = edx_1
        var_c_1 += 4
        
        if (ecx_2 s>= arg1[0x11fc])
            void* esi_5 = *arg1
            char* eax_35 = *(esi_5 + 0xa8)
            
            if (eax_35 u< *(esi_5 + 0xac))
                ecx_2.b = *eax_35
                *(esi_5 + 0xa8) = &eax_35[1]
            else if (*(esi_5 + 0x20) == 0)
                ecx_2.b = 0
            else
                void* eax_38
                eax_38, ecx_2 = (*(esi_5 + 0x10))(*(esi_5 + 0x1c), esi_5 + 0x28, *(esi_5 + 0x24))
                
                if (eax_38 != 0)
                    *(esi_5 + 0xac) = eax_38 + 0x28 + esi_5
                    ecx_2.b = *(esi_5 + 0x28)
                    *(esi_5 + 0xa8) = esi_5 + 0x29
                else
                    *(esi_5 + 0x20) = eax_38
                    *(esi_5 + 0xac) = esi_5 + 0x29
                    *(esi_5 + 0x28) = 0
                    ecx_2.b = *(esi_5 + 0x28)
                    *(esi_5 + 0xa8) = esi_5 + 0x29
            
            void* esi_6 = *arg1
            arg1[0x11f4] = zx.d(ecx_2.b)
            char* eax_45 = *(esi_6 + 0xa8)
            
            if (eax_45 u< *(esi_6 + 0xac))
                ecx_2.b = *eax_45
                *(esi_6 + 0xa8) = &eax_45[1]
            else if (*(esi_6 + 0x20) == 0)
                ecx_2.b = 0
            else
                void* eax_48
                eax_48, ecx_2 = (*(esi_6 + 0x10))(*(esi_6 + 0x1c), esi_6 + 0x28, *(esi_6 + 0x24))
                
                if (eax_48 != 0)
                    *(esi_6 + 0xac) = eax_48 + 0x28 + esi_6
                    ecx_2.b = *(esi_6 + 0x28)
                    *(esi_6 + 0xa8) = esi_6 + 0x29
                else
                    *(esi_6 + 0x20) = eax_48
                    *(esi_6 + 0xac) = esi_6 + 0x29
                    *(esi_6 + 0x28) = 0
                    ecx_2.b = *(esi_6 + 0x28)
                    *(esi_6 + 0xa8) = esi_6 + 0x29
            
            void* esi_7 = *arg1
            arg1[0x11f5] = zx.d(ecx_2.b)
            char* eax_55 = *(esi_7 + 0xa8)
            
            if (eax_55 u< *(esi_7 + 0xac))
                ecx_2.b = *eax_55
                *(esi_7 + 0xa8) = &eax_55[1]
            else if (*(esi_7 + 0x20) == 0)
                ecx_2.b = 0
            else
                void* eax_58
                eax_58, ecx_2 = (*(esi_7 + 0x10))(*(esi_7 + 0x1c), esi_7 + 0x28, *(esi_7 + 0x24))
                
                if (eax_58 != 0)
                    *(esi_7 + 0xac) = eax_58 + 0x28 + esi_7
                    ecx_2.b = *(esi_7 + 0x28)
                    *(esi_7 + 0xa8) = esi_7 + 0x29
                else
                    *(esi_7 + 0x20) = eax_58
                    *(esi_7 + 0xac) = esi_7 + 0x29
                    *(esi_7 + 0x28) = 0
                    ecx_2.b = *(esi_7 + 0x28)
                    *(esi_7 + 0xa8) = esi_7 + 0x29
            
            int32_t edx_2 = arg1[0x11f4]
            uint32_t eax_64 = zx.d(ecx_2.b)
            int32_t eax_65 = eax_64 & 0xf
            uint32_t ecx_8 = eax_64 u>> 4
            bool cond:0_1 = arg1[0x11f3] == 0
            arg1[0x11f6] = ecx_8
            arg1[0x11f7] = eax_65
            
            if (cond:0_1)
                if (edx_2 == 0 && ecx_8 == 0 && eax_65 == 0)
                    arg1[0x11f5] = 0x3f
                    return 1
            else if (edx_2 s<= 0x3f)
                int32_t esi_8 = arg1[0x11f5]
                
                if (esi_8 s<= 0x3f && edx_2 s<= esi_8 && ecx_8 u<= 0xd && eax_65 u<= 0xd)
                    return 1
            
            break

return 0
