// 函数: sub_631c10
// 地址: 0x631c10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

bool cond:0 = data_8db5c4 != 0x27
*arg2 = 0x3f800000
arg2[1] = 0x3f800000
*arg4 = 0x3f800000
arg4[1] = 0x3f800000
int32_t edi_1

if (not(cond:0))
    edi_1 = data_8db5c8
label_631c5c:
    
    if (edi_1 != 0)
        void* edx_1 = arg3 - 1
        void* esi_1 = edx_1 * 9
        void* var_8_1 = edx_1
        int32_t var_c_1
        
        if (*((esi_1 << 2) + &data_1a98d1c) != "tbl_opponents"
                || *((esi_1 << 2) + &data_1a98d18) != edi_1
                || *((esi_1 << 2) + &data_1a98d20) != edx_1
                || *((esi_1 << 2) + &data_1a98d24) != "tbl_opponent_pods"
                || *((esi_1 << 2) + &data_1a98d28) != 0xffffffff
                || *((esi_1 << 2) + &data_1a98d2c) != 0)
            int32_t eax_1 = sub_67be20(edx_1)
            *((esi_1 << 2) + &data_1a98d38) = eax_1
            
            if (eax_1 != 0)
                int32_t eax = sub_67bd70(eax_1, "tbl_opponent_pods")
                edx_1 = var_8_1
                *((esi_1 << 2) + &data_1a98d38) = eax
                *((esi_1 << 2) + &data_1a98d18) = edi_1
                *((esi_1 << 2) + &data_1a98d1c) = "tbl_opponents"
                *((esi_1 << 2) + &data_1a98d20) = edx_1
                *((esi_1 << 2) + &data_1a98d24) = "tbl_opponent_pods"
                *((esi_1 << 2) + &data_1a98d28) = 0xffffffff
                *((esi_1 << 2) + &data_1a98d2c) = 0
                var_c_1 = eax
            else
                edx_1 = var_8_1
                var_c_1 = eax_1
        else
            var_c_1 = *((esi_1 << 2) + &data_1a98d38)
        
        int32_t edi_2
        
        if (*((esi_1 << 2) + &data_1a98df4) != "tbl_opponents"
                || *((esi_1 << 2) + &data_1a98df0) != edi_1
                || *((esi_1 << 2) + &data_1a98df8) != edx_1
                || *((esi_1 << 2) + &data_1a98dfc) != "tbl_opponent_pods"
                || *((esi_1 << 2) + &data_1a98e00) != 0 || *((esi_1 << 2) + &data_1a98e04) != 0)
            int32_t eax_2 = sub_67be20(edx_1)
            
            if (eax_2 != 0)
                int32_t eax_3 = sub_67bd70(eax_2, "tbl_opponent_pods")
                
                if (eax_3 != 0)
                    edi_2 = sub_64c870(sub_64e7a0(eax_3), nullptr)
                else
                    edi_2 = 0
                
                *((esi_1 << 2) + &data_1a98e10) = edi_2
                
                if (edi_2 != 0)
                    *((esi_1 << 2) + &data_1a98df0) = edi_1
                    *((esi_1 << 2) + &data_1a98df4) = "tbl_opponents"
                    *((esi_1 << 2) + &data_1a98df8) = var_8_1
                    *((esi_1 << 2) + &data_1a98dfc) = "tbl_opponent_pods"
                    *((esi_1 << 2) + &data_1a98e00) = 0
                    *((esi_1 << 2) + &data_1a98e04) = 0
            else
                *((esi_1 << 2) + &data_1a98e10) = eax_2
                edi_2 = 0
        else
            edi_2 = *((esi_1 << 2) + &data_1a98e10)
        
        if (var_c_1 == 0)
            *arg2 = 0x3f800000
            arg2[1] = 0x3f800000
        else
            uint32_t eax_8 = sub_64e7a0(var_c_1)
            int32_t eax_9 = *(eax_8 + 0x16d0)
            *arg2 = *(eax_8 + 0x16cc)
            arg2[1] = eax_9
        
        if (edi_2 != 0)
            uint32_t eax_10 = sub_64e7a0(edi_2)
            int32_t result = *(eax_10 + 0x16d0)
            *arg4 = *(eax_10 + 0x16cc)
            arg4[1] = result
            return result
        
        *arg2 = 0x3f800000
        arg2[1] = 0x3f800000
else if (data_8db5d4 == 0x27)
    edi_1 = data_8db5d8
    goto label_631c5c
return 0x3f800000
