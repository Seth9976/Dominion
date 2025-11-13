// 函数: sub_6c5df0
// 地址: 0x6c5df0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg1[2]
char const* const var_30
int32_t var_2c_1
char const* const var_28_1
int32_t eax_4
char* ecx
void* edi

if (eax_3 == 0 || eax_3 == 1)
    eax_4 = arg1[3]
    edi = &arg1[3]
    
    if (eax_4 == 0 || *eax_4 == 0)
        char* eax_5 = arg1[8]
        char* edx_1 = &data_801800
        
        if (eax_5 != 0)
            edx_1 = eax_5
        
        int32_t var_8_1 = 0
        char* var_14
        sub_63d850(edi, sub_6c48e0(&var_14, edx_1))
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        goto label_6c5ec3
    
    var_28_1 = "DefinitionLoadPackAsset"
    var_2c_1 = 0x264
    var_30 = "C:\x\ax2017\Engine\DefLoad.cpp"
    ecx = "assetPtr->xbinFilePath.IsEmpty()"
else
    edi = &arg1[3]
label_6c5ec3:
    int32_t* var_18
    eax_4 = sub_696510(&var_18, arg1)
    
    if (eax_4.b == 0)
        arg1[2] = 0
        char* eax_9 = *edi
        
        if (eax_9 != 0 && eax_9 != &data_801800)
            if (data_cf65bc != 0 && *eax_9 != 0)
                eax_9 = sub_63d4e0(edi)
                int32_t temp1_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                    *edi = &data_801800
            
            *edi = &data_801800
        
        eax_9.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    int32_t ecx_10 = arg1[1]
    arg1[2] = 2
    
    if (ecx_10 u> 0x25)
        var_28_1 = "AssetTypeGetInfo"
        var_2c_1 = 0xc3
        var_30 = "C:\x\ax2017\Engine\AssetTypeRegistry.cpp"
        ecx = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
    else
        eax_4 = data_147b07c
        int32_t* edi_1 = var_18
        int32_t edx_7 = *((ecx_10 << 5) + eax_4 + 4)
        
        if (edx_7 != 0)
            char* eax_10 = arg1[8]
            char* const ecx_12 = &data_801800
            
            if (eax_10 != 0)
                ecx_12 = eax_10
            
            eax_4 = edx_7(ecx_12, *edi_1, eax_2)
        
        if (*arg1 == 0)
            *arg1 = edi_1
            eax_4.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4
        
        var_28_1 = "DefinitionLoadPackAsset"
        var_2c_1 = 0x279
        var_30 = "C:\x\ax2017\Engine\DefLoad.cpp"
        ecx = "assetPtr->pAssetData == NULL"
sub_63b870(eax_4, &data_801800, ecx, var_30, var_2c_1, var_28_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
