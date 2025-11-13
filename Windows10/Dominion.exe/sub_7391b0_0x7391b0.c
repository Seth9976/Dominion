// 函数: sub_7391b0
// 地址: 0x7391b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result

if (arg1[2] != 4)
    int32_t eax = arg1[1]
    
    if (eax != 3)
        if (eax == 0x12)
            char* eax_3 = sub_69f4a0(sub_69ec60(arg1), 1, arg1, 0)
            
            if (arg1[1] != 0x12)
                sub_63b870(eax_3, &data_801800, "assetPtr->assetType == ASSET_TYPE_FONT", 
                    "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2e6, "FontGetDef")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            void* eax_4 = sub_5af880(arg1)
            void* var_8_1 = eax_4
            
            if (*(eax_4 + 0x1c) s> 0)
                int32_t ebx_1 = 0
                int32_t i = 0
                
                do
                    int32_t* esi_1 = *(eax_4 + 0x20)
                    sub_69f4a0(sub_69ec60(*(esi_1 + ebx_1)), 1, *(esi_1 + ebx_1), 0)
                    eax_4 = var_8_1
                    ebx_1 += 0x30
                    i += 1
                while (i s< *(eax_4 + 0x1c))
            
            goto label_739249
        
        char* eax_6 = arg1[8]
        char* const ecx_5 = &data_801800
        
        if (eax_6 != 0)
            ecx_5 = eax_6
        
        char* const var_20_1 = ecx_5
        sub_63b5f0("AtlasMaker: I don't handle this asset type yet %s")
    else
        sub_69f4a0(sub_69ec60(arg1), 1, arg1, 0)
    label_739249:
        result = arg1[2]
        
        if (result != 4)
            result.b = result != 0
            return result

result.b = 0
return result
