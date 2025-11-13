// 函数: sub_6b7d40
// 地址: 0x6b7d40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ffcd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = sub_687730(0x4c0)
int32_t result = memset(esi, 0, 0x4c0)
data_147b07c = esi
int32_t result_1 = 0

if (data_147b080 s> 0)
    void* edi_1 = &data_147b08c
    
    while (true)
        int32_t eax_13 = *(edi_1 - 4)
        int32_t var_3c_2
        char const* const ecx_4
        
        if (eax_13 u> 0x25)
            char const* const var_38_2 = "AssetRegistryInitForApp"
            var_3c_2 = 0xa9
            ecx_4 =
                "pAssetTableItem->assetType >=0 && pAssetTableItem->assetType < ASSET_TYPE_COUNT"
        else if (*(edi_1 + 0x14) == 0)
            char const* const var_38_1 = "AssetRegistryInitForApp"
            var_3c_2 = 0xac
            ecx_4 = "pAssetTableItem->pDefMap != NULL"
        else
            int32_t* ebx_3 = (eax_13 << 5) + esi
            *ebx_3 = eax_13
            ebx_3[7] = *(edi_1 + 0x14)
            ebx_3[1] = *edi_1
            ebx_3[2] = *(edi_1 + 4)
            ebx_3[3] = *(edi_1 + 8)
            ebx_3[4] = *(edi_1 + 0xc)
            int32_t* i_1 = nullptr
            int32_t var_20_1 = 0
            int32_t var_1c_1 = 0
            int32_t var_8_1 = 0
            void* eax_10 = sub_69d970(&i_1, nullptr, *(edi_1 + 0x14), &i_1, 0)
            int32_t var_8_2 = 1
            int32_t* i = i_1
            
            while (i != 0)
                int32_t* i_2 = i
                i = i[1]
                sub_64c080(i_2, 0xc)
            
            int32_t var_8_3 = 0xffffffff
            int32_t var_1c_2 = 0
            i_1 = nullptr
            int32_t var_20_2 = 0
            ebx_3[5] = eax_10
            ebx_3[6] = *(edi_1 + 0x10)
            eax_13 = *(*(edi_1 + 0x14) + 0x1c)
            
            if (eax_13 != *(edi_1 - 4))
                char const* const var_38 = "AssetRegistryInitForApp"
                var_3c_2 = 0xb8
                ecx_4 = "pAssetTableItem->pDefMap->assetType == pAssetTableItem->assetType"
            else
                edi_1 += 0x1c
                result = result_1 + 1
                result_1 = result
                
                if (result s>= data_147b080)
                    break
                
                esi = data_147b07c
                continue
        
        sub_63b870(eax_13, &data_801800, ecx_4, "C:\x\ax2017\Engine\AssetTypeRegistry.cpp", 
            var_3c_2, "AssetRegistryInitForApp")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

fsbase->NtTib.ExceptionList = ExceptionList
return result
