// 函数: sub_631980
// 地址: 0x631980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

bool cond:0 = data_8db5c4 != 0x27
*arg1 = 0x41000000
arg1[1] = 0x41000000
*arg2 = 0x3f800000
arg2[1] = 0x3f800000
int32_t edi_1

if (not(cond:0))
    edi_1 = data_8db5c8
label_6319d3:
    
    if (edi_1 != 0)
        int32_t var_8_1
        
        if (data_1a98cd4 != "tbl_opponents" || data_1a98cd0 != edi_1 || data_1a98cd8 != 0
                || data_1a98cdc != "tbl_opponent_pods" || data_1a98ce0 != 0xffffffff
                || data_1a98ce4 != 0)
            int32_t eax_1 = sub_67bd70(edi_1, "tbl_opponents")
            
            if (eax_1 != 0)
                int32_t eax_3 = sub_64c870(sub_64e7a0(eax_1), nullptr)
                data_1a98cf0 = eax_3
                
                if (eax_3 != 0)
                    int32_t edx = sub_67bd70(eax_3, "tbl_opponent_pods")
                    data_1a98cf0 = edx
                    data_1a98cd0 = edi_1
                    data_1a98cd4 = "tbl_opponents"
                    data_1a98cd8 = 0
                    data_1a98cdc = "tbl_opponent_pods"
                    data_1a98ce0 = 0xffffffff
                    data_1a98ce4 = 0
                    var_8_1 = edx
                else
                    var_8_1 = 0
            else
                data_1a98cf0 = eax_1
                var_8_1 = 0
        else
            var_8_1 = data_1a98cf0
        
        int32_t esi_1
        
        if (data_1a98cf8 != "tbl_opponents" || data_1a98cf4 != edi_1 || data_1a98cfc != 0
                || data_1a98d00 != "tbl_opponent_pods" || data_1a98d04 != 0 || data_1a98d08 != 0)
            int32_t eax_5 = sub_67bd70(edi_1, "tbl_opponents")
            int32_t eax_7
            
            if (eax_5 != 0)
                eax_7 = sub_64c870(sub_64e7a0(eax_5), nullptr)
            
            if (eax_5 == 0 || eax_7 == 0)
                data_1a98d14 = 0
                esi_1 = 0
            else
                int32_t eax_8 = sub_67bd70(eax_7, "tbl_opponent_pods")
                
                if (eax_8 != 0)
                    esi_1 = sub_64c870(sub_64e7a0(eax_8), nullptr)
                else
                    esi_1 = 0
                
                data_1a98d14 = esi_1
                
                if (esi_1 == 0)
                    esi_1 = 0
                else
                    data_1a98cf4 = edi_1
                    data_1a98cf8 = "tbl_opponents"
                    data_1a98cfc = 0
                    data_1a98d00 = "tbl_opponent_pods"
                    data_1a98d04 = 0
                    data_1a98d08 = 0
        else
            esi_1 = data_1a98d14
        
        if (var_8_1 == 0)
            *arg1 = 0x3f800000
            arg1[1] = 0x3f800000
        else
            uint32_t eax_11 = sub_64e7a0(var_8_1)
            int32_t eax_12 = *(eax_11 + 0x16d0)
            *arg1 = *(eax_11 + 0x16cc)
            arg1[1] = eax_12
        
        if (esi_1 != 0)
            uint32_t eax_13 = sub_64e7a0(esi_1)
            int32_t result = *(eax_13 + 0x16d0)
            *arg2 = *(eax_13 + 0x16cc)
            arg2[1] = result
            return result
        
        *arg1 = 0x3f800000
        arg1[1] = 0x3f800000
else if (data_8db5d4 == 0x27)
    edi_1 = data_8db5d8
    goto label_6319d3
return 0x3f800000
