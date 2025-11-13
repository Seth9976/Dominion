// 函数: sub_5d1d00
// 地址: 0x5d1d00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx_1

if (data_8db5c4 == 0x27)
    ebx_1 = data_8db5c8
label_5d1d32:
    
    if (ebx_1 != 0)
        if (arg1 != 0xffffffff)
            int32_t edx = data_b604e0
            int32_t eax_10 = edx
            
            if (edx == 0xffffffff)
                eax_10 = 0
            
            if (arg1 == eax_10)
                void* esi_7 = arg2 * 9
                int32_t ecx_10
                
                if (*((esi_7 << 2) + &data_1a8c26c) != "tbl_player_pods"
                    || *((esi_7 << 2) + &data_1a8c268) != ebx_1
                    || *((esi_7 << 2) + &data_1a8c270) != arg2
                    || *((esi_7 << 2) + &data_1a8c274) != 0)
                label_5d1fb2:
                    int32_t eax_25 = sub_67be20(arg2)
                    ecx_10 = eax_25
                    *((esi_7 << 2) + &data_1a8c288) = ecx_10
                    
                    if (ecx_10 == 0)
                        return eax_25
                    
                    *((esi_7 << 2) + &data_1a8c26c) = "tbl_player_pods"
                    *((esi_7 << 2) + &data_1a8c268) = ebx_1
                    *((esi_7 << 2) + &data_1a8c270) = arg2
                    *((esi_7 << 2) + &data_1a8c274) = 0
                else
                    ecx_10 = *((esi_7 << 2) + &data_1a8c288)
                    
                    if (ecx_10 == 0)
                        goto label_5d1fb2
                    
                    uint32_t eax_22 = zx.d(ecx_10.w)
                    
                    if (eax_22 u>= data_c23bac
                            || *(eax_22 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_10)
                        goto label_5d1fb2
                
                return ecx_10
            
            if (edx == 0xffffffff)
                edx = 0
            
            void* ecx_4 = arg1 - edx
            void* esi_3 = sub_4b95e0() + ecx_4
            
            if (ecx_4 s>= 0)
                esi_3 = ecx_4
            
            void* edi_1 = (esi_3 - 1) * 9
            int32_t ecx_5
            
            if (*((edi_1 << 2) + &data_1a8a5bc) != "tbl_opponents"
                || *((edi_1 << 2) + &data_1a8a5b8) != ebx_1
                || *((edi_1 << 2) + &data_1a8a5c0) != esi_3 - 1
                || *((edi_1 << 2) + &data_1a8a5c4) != 0)
            label_5d1ec3:
                ecx_5 = sub_67be20(esi_3 - 1)
                *((edi_1 << 2) + &data_1a8a5d8) = ecx_5
                
                if (ecx_5 != 0)
                    *((edi_1 << 2) + &data_1a8a5bc) = "tbl_opponents"
                    *((edi_1 << 2) + &data_1a8a5b8) = ebx_1
                    *((edi_1 << 2) + &data_1a8a5c0) = esi_3 - 1
                    *((edi_1 << 2) + &data_1a8a5c4) = 0
            else
                ecx_5 = *((edi_1 << 2) + &data_1a8a5d8)
                
                if (ecx_5 == 0)
                    goto label_5d1ec3
                
                uint32_t eax_13 = zx.d(ecx_5.w)
                
                if (eax_13 u>= data_c23bac || *(eax_13 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_5)
                    goto label_5d1ec3
            
            float xmm0_1 = *(
                sub_64e7a0(sub_4bb9f0((edi_1 << 2) + &data_1a8a690, ecx_5, "tbl_opponent_pods"))
                + 0x16cc)
            xmm0_1 - 0f
            uint32_t eax_18
            eax_18:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                return sub_5ca740((((esi_3 - 1) << 5) + arg2) * 0x24 + &data_1a8a768, ebx_1, 
                    "tbl_opponents", esi_3 - 1, "tbl_opponent_pods", arg2)
        else
            int32_t ebx_2 = *(sub_5cc6c0(0xd00) + 0x1ba0)
            
            if (ebx_2 != 0)
                void* esi_1 = arg2 * 9
                int32_t ecx
                
                if (*((esi_1 << 2) + &data_1a8a13c) != "tbl_assocPile"
                    || *((esi_1 << 2) + &data_1a8a138) != ebx_2
                    || *((esi_1 << 2) + &data_1a8a140) != 0
                    || *((esi_1 << 2) + &data_1a8a144) != 0)
                label_5d1db9:
                    int32_t eax_5 = sub_67bd70(ebx_2, "tbl_assocPile")
                    
                    if (eax_5 == 0)
                        *((esi_1 << 2) + &data_1a8a158) = eax_5
                        return 0
                    
                    int32_t eax_8 = sub_64c870(sub_64e7a0(eax_5), nullptr)
                    ecx = eax_8
                    *((esi_1 << 2) + &data_1a8a158) = ecx
                    
                    if (ecx == 0)
                        return eax_8
                    
                    *((esi_1 << 2) + &data_1a8a13c) = "tbl_assocPile"
                    *((esi_1 << 2) + &data_1a8a138) = ebx_2
                    *((esi_1 << 2) + &data_1a8a140) = 0
                    *((esi_1 << 2) + &data_1a8a144) = 0
                else
                    ecx = *((esi_1 << 2) + &data_1a8a158)
                    
                    if (ecx == 0)
                        goto label_5d1db9
                    
                    uint32_t eax_2 = zx.d(ecx.w)
                    
                    if (eax_2 u>= data_c23bac || *(eax_2 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx)
                        goto label_5d1db9
                
                return ecx
else if (data_8db5d4 == 0x27)
    ebx_1 = data_8db5d8
    goto label_5d1d32
return 0
