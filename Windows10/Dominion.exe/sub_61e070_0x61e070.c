// 函数: sub_61e070
// 地址: 0x61e070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

data_1723ff4 = 0
sub_61dd90(sub_61dad0())
uint32_t result

if (arg1 != 0)
    int32_t var_14_1 = 0
    int32_t var_10_1 = arg1
    uint32_t var_c_1 = modu.dp.d(0:(sub_63eb70()), 0x77359400)
    result = sub_51b500()
    
    if (result.b != 0)
        data_171efd0 = sub_5ac2e0(&data_171efd4)
    label_61e137:
        void* eax_7 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        sub_4e5ac0(eax_7, eax_7 + 0x350c, &data_171efd4, eax_7 + 0x3510)
        data_cc8dc8
        return sub_4d8ad0(arg1)
else
    result = sub_5ac5a0()
    data_171efd0 = result
    
    if (result != 0)
        uint32_t eax_1 = zx.d(result.w)
        
        if (eax_1 u< data_b4a5c4)
            int32_t ecx_1 = eax_1 * 0x510c
            eax_1 = data_b4a5c0
            
            if (*(ecx_1 + eax_1 + 0x5108) != result)
                goto label_61e17c
            
            memcpy(&data_171efd4, eax_1 + 4 + ecx_1, 0x5020)
            goto label_61e137
        
    label_61e17c:
        sub_63b870(eax_1, &data_801800, "DataArrayTryToGet(id) != NULL", 
            "C:\x\ax2017\Engine\DataArray.h", 0x6d, 
            "DataArray<struct CampaignMapTask>::DataArrayGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return result
