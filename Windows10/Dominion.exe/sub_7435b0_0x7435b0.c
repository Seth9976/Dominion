// 函数: sub_7435b0
// 地址: 0x7435b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t result

if (data_147ef94 s> 0)
    do
        int32_t* ecx_1 = data_147df90
        int32_t edi_1 = (&data_147df94)[i]
        
        if (ecx_1[1] != 0x20)
            sub_63b870(result, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
                "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        result = *sub_5af880(ecx_1)
        
        if (*(edi_1 * 0xe0 + result + 0x39) == 1)
            result.b = 1
            return result
        
        i += 1
    while (i s< data_147ef94)

result.b = 0
return result
