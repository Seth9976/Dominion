// 函数: sub_6958c0
// 地址: 0x6958c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ef95
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]
char const* const lpFileInformation

if (ecx u> 0x25)
    lpFileInformation = "AssetTypeGetInfo"
    sub_63b870(&ExceptionList, &data_801800, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
        "C:\x\ax2017\Engine\AssetTypeRegistry.cpp", 0xc3, lpFileInformation)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const lpFileName_1 = &data_801800
char* const edx = &data_801800
void* eax_5 = data_147b07c + (ecx << 5)
char* eax_6 = *(eax_5 + 0x1c)
char* eax_7 = arg2[8]

if (eax_7 != 0)
    edx = eax_7

char* result_3
sub_69feb0(&result_3, edx)
int32_t var_8_1 = 0
char** eax_8 = sub_5af880(arg2)
char* eax_9 = eax_6
int32_t ecx_4 = *(eax_9 + 0xc)
char const* const var_74
int32_t var_70
char* ecx_5

if (ecx_4 != 0)
    int32_t var_54 = 0
    int32_t* var_18_1 = &var_54
    int32_t var_28
    lpFileInformation = &var_28
    var_28 = 0
    char* result_4 = nullptr
    char var_1c_1 = 1
    sub_694da0(eax_9, eax_9, eax_8, 0, lpFileInformation)
    memset(arg3, 0, 0xa8)
    *arg3 = arg2[1]
    arg3[1] = *(eax_6 + 0x18)
    arg3[2] = *(eax_5 + 0x14)
    arg3[3] = arg4
    arg3[4] = ecx_4
    arg3[5] = var_54
    char* eax_18 = result_3
    
    if (eax_18 == 0 || *eax_18 == 0)
        goto label_6959e7
    
    eax_9 = sub_63d4e0(&result_3)
    
    if (*(eax_9 + 8) s< 0x80)
        eax_18 = result_3
    label_6959e7:
        char* lpFileInformation_3 = &data_801800
        
        if (eax_18 != 0)
            lpFileInformation_3 = eax_18
        
        void* edx_3 = arg3 - lpFileInformation_3
        
        do
            eax_18.b = *lpFileInformation_3
            *(edx_3 + lpFileInformation_3 + 0x28) = eax_18.b
            lpFileInformation_3 = &lpFileInformation_3[1]
        while (eax_18.b != 0)
        
        int32_t eax_19 = arg2[1]
        lpFileInformation = lpFileInformation_3
        char* lpFileInformation_1 = arg2[8]
        lpFileInformation = lpFileInformation_1
        
        if (lpFileInformation_1 != 0 && *lpFileInformation_1 != 0)
            char* eax_20 = sub_63d4e0(&lpFileInformation)
            *(eax_20 + 4) += 1
        
        char* result_1
        sub_6c4b90(&result_1, eax_19)
        var_8_1.b = 1
        int32_t eax_21 = arg2[1]
        char* lpFileInformation_2 = arg2[8]
        lpFileInformation = lpFileInformation_2
        
        if (lpFileInformation_2 != 0 && *lpFileInformation_2 != 0)
            char* eax_22 = sub_63d4e0(&lpFileInformation)
            *(eax_22 + 4) += 1
        
        char* result_2
        sub_6c5090(&result_2, eax_21)
        char* lpFileName_2 = result_1
        char* const lpFileName = &data_801800
        
        if (lpFileName_2 != 0)
            lpFileName = lpFileName_2
        
        void var_38
        lpFileInformation = &var_38
        BOOL eax_23 = GetFileAttributesExA(lpFileName, GetFileExInfoStandard, lpFileInformation)
        
        if (eax_23 != 0)
            arg3[6] = result_4
            arg3[7] = ecx_4
        else
            arg3[6] = eax_23
            arg3[7] = eax_23
        
        char* lpFileName_3 = result_2
        
        if (lpFileName_3 != 0)
            lpFileName_1 = lpFileName_3
        
        lpFileInformation = &var_38
        char* result = GetFileAttributesExA(lpFileName_1, GetFileExInfoStandard, lpFileInformation)
        
        if (result != 0)
            result = result_4
            arg3[8] = result
            arg3[9] = ecx_4
        else
            arg3[8] = result
            arg3[9] = result
        
        var_8_1.b = 2
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_2)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_2 = &data_801800
        
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp1_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp1_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_1 = &data_801800
        
        int32_t var_8_2 = 4
        
        if (data_cf65bc != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_3)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    lpFileInformation = "DefBinWriteMakeAssetEntry"
    var_70 = 0x45f
    var_74 = "C:\x\ax2017\Engine\DefBin.cpp"
    ecx_5 = "assetName.Length() < MAX_ASSET_NAME_LEN"
else
    lpFileInformation = "DefinitionGetSize"
    var_70 = 0x6d
    var_74 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx_5 = "pDefMap->definitionSize != 0"

sub_63b870(eax_9, &data_801800, ecx_5, var_74, var_70, lpFileInformation)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
