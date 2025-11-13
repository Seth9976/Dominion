// 函数: sub_57c1b0
// 地址: 0x57c1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = arg4 & 0x30

if (eax_1 != 0x30)
    int32_t eax_3 = arg5 & 0x30
    
    if (eax_3 != 0x30)
        uint32_t eax_4
        int32_t edx
        eax_4, edx = sub_5915b0(eax_3, arg2, arg3, arg4)
        uint32_t eax_5
        int32_t edx_1
        eax_5, edx_1 = sub_5915b0(eax_4, edx, arg3, arg5)
        
        if (eax_4 == eax_5)
            int32_t ecx_4
            
            if (eax_4 == 0x130b)
                uint32_t eax_7
                int32_t edx_2
                
                if (eax_1 != 0)
                    void* eax_8
                    eax_8, edx_2 = sub_5769e0(eax_5, edx_1, arg3, arg4)
                    eax_7 = *(eax_8 + 0xb0)
                else
                    void* eax_6
                    eax_6, edx_2 = sub_576940(eax_5, edx_1, arg3, arg4)
                    eax_7 = *(eax_6 + 0x84)
                
                if (eax_3 != 0)
                    void* eax_10
                    eax_10, edx_1 = sub_5769e0(eax_7, edx_2, arg3, arg5)
                    ecx_4 = *(eax_10 + 0xb0)
                else
                    void* eax_9
                    eax_9, edx_1 = sub_576940(eax_7, edx_2, arg3, arg5)
                    ecx_4 = *(eax_9 + 0x84)
                
                eax_5 = eax_7
            
            if (eax_4 == 0x130b && eax_5 == ecx_4 && eax_5 == 0xe)
                return 1
            
            void* eax_11
            int32_t edx_3
            int32_t esi_1
            
            if (eax_1 != 0)
                eax_11, edx_3 = sub_5769e0(eax_5, edx_1, arg3, arg4)
                esi_1 = *(eax_11 + 0xb0)
            else
                eax_11, edx_3 = sub_576940(eax_5, edx_1, arg3, arg4)
                esi_1 = *(eax_11 + 0x84)
            
            int32_t eax_13
            
            if (eax_3 != 0)
                eax_13 = *(sub_5769e0(eax_11, edx_3, arg3, arg5) + 0xb0)
            else
                eax_13 = *(sub_576940(eax_11, edx_3, arg3, arg5) + 0x84)
            
            if (esi_1 == eax_13)
                for (void* const i = &data_820ef0; i != &data_820f38; i += 4)
                    if (eax_4 == *i)
                        return 2
                
                return 1

return 0
