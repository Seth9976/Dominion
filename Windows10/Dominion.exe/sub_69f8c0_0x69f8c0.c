// 函数: sub_69f8c0
// 地址: 0x69f8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Create_send_message@?$_Order_node_base@W4agent_status@Concurrency@@@Concurrency@@IAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg3
int32_t ebx
int32_t var_18 = ebx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 1
char* const result_5 = &data_801800
char* result_1
char* result_3 = result_1

if (result_3 != 0)
    result_5 = result_3

int32_t result_4 = sub_69f030(result_5, arg3)
int32_t result_8 = result_4
int32_t ecx = *(result_8 + 8)
int32_t var_2c
char const* const ecx_1

if (ecx != 3)
    if (ecx == 4)
        sub_69ec60(result_8)
    
    int32_t result_2
    result_4 = result_2
    int32_t result_6 = &data_801800
    char* const edx_1 = &data_801800
    
    if (result_4 != 0)
        result_6 = result_4
    
    int32_t ecx_4
    
    while (true)
        ebx.b = *result_6
        char temp0_1 = *edx_1
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_4 = 0
                break
            
            ebx.b = *(result_6 + 1)
            char temp1_1 = edx_1[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_6 += 2
                edx_1 = &edx_1[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_4 = 0
                break
        
        ecx_4 = sbb.d(result_6, result_6, c_1) | 1
        break
    
    char* const edx_2 = &data_801800
    
    if (ecx_4 != 0)
        char* edi_1 = *(result_8 + 0xc)
        char* const ecx_5 = &data_801800
        
        if (edi_1 != 0)
            ecx_5 = edi_1
        
        int32_t ecx_7
        
        while (true)
            ebx.b = *ecx_5
            char temp2_1 = *edx_2
            bool c_2 = ebx.b u< temp2_1
            
            if (ebx.b == temp2_1)
                if (ebx.b == 0)
                    ecx_7 = 0
                    break
                
                ebx.b = ecx_5[1]
                char temp3_1 = edx_2[1]
                c_2 = ebx.b u< temp3_1
                
                if (ebx.b == temp3_1)
                    ecx_5 = &ecx_5[2]
                    edx_2 = &edx_2[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    ecx_7 = 0
                    break
            
            ecx_7 = sbb.d(ecx_5, ecx_5, c_2) | 1
            break
        
        if (ecx_7 != 0)
            int32_t result_7 = &data_801800
            
            if (result_4 != 0)
                result_7 = result_4
            
            void* eax_3 = &data_801800
            
            if (edi_1 != 0)
                eax_3 = edi_1
            
            while (true)
                edx_2.b = *eax_3
                char temp4_1 = *result_7
                bool c_3 = edx_2.b u< temp4_1
                
                if (edx_2.b == temp4_1)
                    if (edx_2.b == 0)
                        result_4 = 0
                        break
                    
                    edx_2.b = *(eax_3 + 1)
                    char temp7_1 = *(result_7 + 1)
                    c_3 = edx_2.b u< temp7_1
                    
                    if (edx_2.b == temp7_1)
                        eax_3 += 2
                        result_7 += 2
                        
                        if (edx_2.b != 0)
                            continue
                        
                        result_4 = 0
                        break
                
                result_4 = sbb.d(eax_3, eax_3, c_3) | 1
                break
        
        if (ecx_7 == 0 || result_4 == 0)
            if (*result_8 == 0)
                *(result_8 + 8) = 2
                sub_63d850(result_8 + 0xc, &result_2)
                *(result_8 + 0x10) = arg2
                *(result_8 + 0x14) = arg4
                char* result = arg5
                *(result_8 + 0x18) = result
                var_8_1.b = 2
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp5_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp5_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                            result_1 = &data_801800
                
                int32_t var_8_2 = 3
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp6_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp6_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            char const* const var_28_4 = "AssetCatalogNewPackAsset"
            var_2c = 0x18b
            ecx_1 = "pAsset->pAssetData == NULL"
        else
            char const* const var_28_2 = "AssetCatalogNewPackAsset"
            var_2c = 0x188
            ecx_1 = "pAsset->xbinFilePath == "" || pAsset->xbinFilePath == xbinFilePath"
    else
        char const* const var_28_1 = "AssetCatalogNewPackAsset"
        var_2c = 0x185
        ecx_1 = "xbinFilePath != """
else
    char const* const var_28 = "AssetCatalogNewPackAsset"
    var_2c = 0x17d
    ecx_1 = "pAsset->assetLocation != ASSET_LOCATION_MEMORY"

sub_63b870(result_4, &data_801800, ecx_1, "C:\x\ax2017\Engine\AssetCatalog.cpp", var_2c, 
    "AssetCatalogNewPackAsset")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
