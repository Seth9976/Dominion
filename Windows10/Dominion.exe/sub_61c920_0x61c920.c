// 函数: sub_61c920
// 地址: 0x61c920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_ccf768 != 0)
    return 0x20

void var_8

if (data_b7d424 == 0 && sub_4aceb0(data_be1538, &var_8) == 0
        && sub_4aceb0(data_be153c, &var_8) == 0)
    int32_t eax_4 = *(arg1 + 4)
    
    if (eax_4 == 3)
        return 0x10
    
    if (eax_4 == 1)
        int32_t eax_6 = *(arg1 + 8)
        
        if (eax_6 != 0)
            uint32_t ecx_2 = zx.d(eax_6.w)
            
            if (ecx_2 u< data_b809e4)
                uint32_t esi_2 = ecx_2 * 0x1c30 + data_b809e0
                
                if (*(esi_2 + 0x1c28) == eax_6 && esi_2 != 0)
                    void* eax_7 = *(esi_2 + 0x2c)
                    
                    if (eax_7 == 6 || eax_7 == 4)
                        return 4
                    
                    if (eax_7 == 5)
                        return 0x24
                    
                    if (eax_7 == 0)
                        void* result = eax_7 + 4
                        char eax_9 = sub_5efe00(eax_7, nullptr, esi_2, eax_7.b)
                        char eax_10
                        
                        if (eax_9 != 0)
                            eax_10 = sub_610fb0(esi_2)
                        
                        void* eax_12
                        uint32_t edi_1
                        
                        if (eax_9 == 0 || eax_10 == 0)
                            eax_12 = data_b80b08
                            
                            if (eax_12 != 0x34)
                                edi_1 = esi_2
                            
                            if (eax_12 != 0x34 && eax_12 != 0x101)
                                goto label_61ca9f
                            
                            edi_1 = esi_2
                            
                            if (data_b80b14 s< 1)
                                goto label_61ca9f
                            
                            eax_12 = *data_b80b0c
                            
                            if (eax_12 != *(esi_2 + 0x98))
                                goto label_61ca9f
                            
                            goto label_61ca4a
                        
                    label_61ca4a:
                        result = 6
                        eax_12 = sub_6053a0()
                        char const* const var_30
                        int32_t var_2c_1
                        char const* const var_28_1
                        char* ecx_9
                        
                        if (eax_12.b != 0)
                        label_61ca66:
                            edi_1 = esi_2
                            eax_12 = sub_5efe00(eax_12, nullptr, edi_1, 0)
                            
                            if (eax_12.b != 0)
                                eax_12 = sub_5cb070()
                                void* esi_3 = eax_12
                                
                                if (esi_3 == 0)
                                label_61ca9a:
                                    result = 0xe
                                    goto label_61ca9f
                                
                                eax_12 = sub_610fb0(edi_1)
                                
                                if (eax_12.b == 0 || *(esi_3 + 0x10) == 2)
                                    goto label_61ca9f
                                
                                goto label_61ca9a
                            
                            if (*(esi_2 + 0x2c) == 0)
                                int32_t ecx_10 = data_b8097c
                                eax_12 = nullptr
                                
                                if (ecx_10 s<= 0)
                                    goto label_61ca9f
                                
                                while (*((eax_12 << 2) + &data_b7fcfc) != *(edi_1 + 0x98))
                                    eax_12 += 1
                                    
                                    if (eax_12 s>= ecx_10)
                                        goto label_61ca9f
                                
                                goto label_61ca9a
                            
                            var_28_1 = "CanDragCard"
                            var_2c_1 = 0xdc05
                            var_30 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                            ecx_9 = "gfx.type == DOMGFX_CARD"
                        else
                            eax_12 = sub_4dad50()
                            
                            if (eax_12 != 2)
                                goto label_61ca66
                            
                            edi_1 = esi_2
                        label_61ca9f:
                            int32_t ecx_7 = *(edi_1 + 0x9c)
                            
                            if (ecx_7 != 0)
                                eax_12 = sub_5d4360(sub_5cba00(ecx_7))
                                
                                if (eax_12 == 2 || eax_12 == 3)
                                label_61cae7:
                                    
                                    if (*(edi_1 + 0xa4) != 0x3ea)
                                        result |= 0x10
                                    else
                                        int32_t eax_14
                                        
                                        if (data_8db5c4 != 0x27)
                                            eax_14 = 0
                                            
                                            if (data_8db5d4 == 0x27)
                                                eax_14 = data_8db5d8
                                        else
                                            eax_14 = data_8db5c8
                                        
                                        int32_t eax_15 =
                                            sub_4bb9f0(0x1a96614, eax_14, "tbl_player_hand")
                                        uint32_t eax_16 = sub_64e7a0(eax_15)
                                        int32_t var_18
                                        eax_12 = sub_67a650(eax_16, &var_18, eax_16, nullptr)
                                        
                                        if (eax_12.b == 0)
                                            eax_12 = sub_67a8a0(sub_64e7a0(eax_15), &data_7ffb14)
                                        else
                                            int32_t var_10
                                            
                                            if (sub_4ae0b0(var_18) f> 9.99999975e-06f)
                                                result |= 0x10
                                            else
                                                int32_t var_14
                                                
                                                if (sub_4ae0b0(var_10) f> 9.99999975e-06f)
                                                    result |= 0x10
                                                else
                                                    int32_t var_c
                                                    
                                                    if (sub_4ae0b0(var_14) f> 9.99999975e-06f)
                                                        result |= 0x10
                                                    else if (sub_4ae0b0(var_c) f> 9.99999975e-06f)
                                                        result |= 0x10
                                                    else
                                                        eax_12 = sub_67a8a0(sub_64e7a0(eax_15), 
                                                            &data_7ffb14)
                                else
                                    eax_12 = *(edi_1 + 0xa4)
                                    
                                    if (eax_12 == 0x3ec || eax_12 == 0x3e9 || eax_12 == 0x3ea
                                            || eax_12 == 2)
                                        goto label_61cae7
                            
                            if (data_cc8d5c != 0)
                                return result
                            
                            var_28_1 = "GetClient"
                            var_2c_1 = 0x7b
                            var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                            ecx_9 = "gClient"
                        
                        sub_63b870(eax_12, &data_801800, ecx_9, var_30, var_2c_1, var_28_1)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    if (eax_7 == 3)
                        if (sub_6053a0() == 0 && sub_4dad50() == 2)
                            return 4
                        
                        int32_t ecx_16
                        ecx_16.b = sub_5deb60(esi_2, nullptr) != 0
                        return (ecx_16 << 3) + 4
    
    return 0

if (*(arg1 + 4) == 1)
    int32_t eax_26 = *(arg1 + 8)
    
    if (eax_26 != 0)
        uint32_t ecx_18 = zx.d(eax_26.w)
        
        if (ecx_18 u< data_b809e4)
            void* ecx_20 = ecx_18 * 0x1c30 + data_b809e0
            
            if (*(ecx_20 + 0x1c28) == eax_26 && ecx_20 != 0)
                int32_t edx_5 = *(ecx_20 + 0x2c)
                
                if (edx_5 != 1)
                    if (edx_5 == 2)
                        return 0x14
                    
                    return 0x40
                
                if (*(ecx_20 + 0x174) == edx_5)
                    if (*(ecx_20 + 0x1c28) == data_b7d434)
                        return 0
                    
                    return 0x16

return 0x40
