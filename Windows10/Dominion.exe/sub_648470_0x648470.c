// 函数: sub_648470
// 地址: 0x648470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_1c = arg3

if (arg3[1] != 2)
    sub_63b870(arg3, &data_801800, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
        "C:\x\ax2017\Engine\AssetUtils.cpp", 0x313, "StructureDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* result = sub_5af880(arg3)
int32_t** result_1 = result
int32_t* ecx = *result

if (ecx == 0)
    return result

int32_t i = 0

if (*ecx s> 0)
    int32_t esi_1 = arg5
    result = nullptr
    int32_t* result_2 = nullptr
    
    do
        void* edi_2 = ecx[2] + result
        int32_t eax_1 = sub_6dd280(result, edi_2 + 0x60, &data_8ce7bc, 0x53)
        
        if (esi_1 == 0)
            esi_1 = data_1724a58
            
            if (eax_1 != 0)
                esi_1 = eax_1
        
        int32_t eax_2 = sub_6dd280(eax_1, edi_2 + 0x60, &data_8ce7bc, 0x54)
        int32_t var_38_1
        int32_t* eax_3
        
        if (eax_2 == 0)
            int32_t var_14 = esi_1
            eax_3 = &var_14
            var_38_1 = 1
        else
            int32_t var_20_1 = eax_2
            int32_t var_24
            eax_3 = &var_24
            var_24 = esi_1
            var_38_1 = 2
        
        sub_647050(eax_3, arg2, edi_2, arg4, eax_3, var_38_1, arg6)
        i += 1
        esi_1 = arg5
        result = &result_2[0x54]
        result_2 = result
        ecx = *result_1
    while (i s< *ecx)

return sub_647d70(result, arg2, var_1c, arg6)
