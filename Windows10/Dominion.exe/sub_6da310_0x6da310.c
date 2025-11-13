// 函数: sub_6da310
// 地址: 0x6da310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770e9d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char const* const var_48
int32_t var_44
char const* const var_40
char* ecx

if (arg1 == 0 || arg1[1] != 2)
    var_40 = "StructureCreate"
    var_44 = 0x324
    var_48 = "C:\x\ax2017\Engine\Structure.cpp"
    ecx = "assetStructure && assetStructure->assetType == ASSET_TYPE_STRUCTURE"
else
    int32_t* esi_1 = data_147abe8
    
    if (esi_1 != 0)
        void* esi_2 = *esi_1
        eax_3 = *(esi_2 + 0x10)
        
        if (eax_3 u< *(esi_2 + 8))
            char* ecx_1 = *(esi_2 + 4)
            eax_3 = *(esi_2 + 0xc)
            char* var_24 = ecx_1
            
            if (eax_3 u<= ecx_1)
                void* eax_4
                
                if (eax_3 != ecx_1)
                    ecx_1 = eax_3
                    var_24 = ecx_1
                    eax_4 = *(eax_3 * 0x6c + *esi_2 + 0x68)
                else
                    eax_4 = &ecx_1[1]
                    *(esi_2 + 4) = eax_4
                
                *(esi_2 + 0xc) = eax_4
                char** result = ecx_1 * 0x6c + *esi_2
                memset(result, 0, 0x68)
                *result = &data_801800
                result[0xf] = 0
                result[0x10] = 0
                eax_3 = *(esi_2 + 0x14) << 0x10 | var_24
                result[0x1a] = eax_3
                *(esi_2 + 0x14) += 1
                
                if (*(esi_2 + 0x14) == 0x10000)
                    *(esi_2 + 0x14) = 1
                
                *(esi_2 + 0x10) += 1
                
                if (arg1[1] == 2)
                    int32_t* var_2c = arg1
                    
                    if (*arg1 == 0)
                        sub_69f4a0(eax_3, 0, arg1, 1)
                    
                    int32_t* eax_9 = *arg1
                    arg1[7] += 1
                    void* ecx_3 = *eax_9
                    int32_t var_14_1 = 2
                    char* const edx_2 = &data_801800
                    *(result + 8) = 0
                    result[4] = 0
                    *(result + 0x14) = data_800248
                    result[9] = *(ecx_3 + 0x38)
                    result[1] = arg1
                    char* eax_11 = arg1[8]
                    
                    if (eax_11 != 0)
                        edx_2 = eax_11
                    
                    var_14_1.b = 3
                    int32_t* eax_13 = sub_63d850(result, sub_69feb0(&var_24, edx_2))
                    var_14_1.b = 4
                    
                    if (data_cf65bc != 0)
                        eax_13 = var_24
                        
                        if (eax_13 != 0 && *eax_13 != 0)
                            eax_13 = sub_63d4e0(&var_24)
                            int32_t temp0_1 = eax_13[1]
                            eax_13[1] -= 1
                            
                            if (temp0_1 == 1)
                                eax_13 = sub_64c080(eax_13, eax_13[3] + 0x10)
                                var_24 = &data_801800
                    
                    var_14_1.b = 2
                    int32_t* esi_4 = result[1]
                    result[0xc] = 0
                    result[0xd] = 0
                    __builtin_memcpy(&result[0x14], 
                        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01\x00\x00\x00", 
                        0x14)
                    
                    if (esi_4 == 0)
                        sub_69fd50(eax_13, "!Null\Null", &var_24, 2)
                        var_14_1.b = 5
                        char* eax_14 = var_24
                        char* ecx_9 = &data_801800
                        
                        if (eax_14 != 0)
                            ecx_9 = eax_14
                        
                        eax_13 = sub_69f030(ecx_9, esi_4 + 2)
                        esi_4 = eax_13
                        var_14_1.b = 6
                        
                        if (data_cf65bc != 0)
                            eax_13 = var_24
                            
                            if (eax_13 != 0 && *eax_13 != 0)
                                eax_13 = sub_63d4e0(&var_24)
                                int32_t temp1_1 = eax_13[1]
                                eax_13[1] -= 1
                                
                                if (temp1_1 == 1)
                                    eax_13 = sub_64c080(eax_13, eax_13[3] + 0x10)
                                    var_24 = &data_801800
                        
                        var_14_1.b = 2
                    else if (esi_4[1] != 2)
                        sub_63b870(eax_13, &data_801800, 
                            "assetPtr && assetPtr->assetType == assetType", 
                            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    if (*esi_4 == 0)
                        sub_69f4a0(eax_13, 0, esi_4, 1)
                    
                    int32_t* eax_15 = *esi_4
                    esi_4[7] += 1
                    int32_t* eax_16 = *eax_15
                    void* ecx_13 = *eax_16
                    
                    if (ecx_13 != 0)
                        float xmm1_1 = result[9]
                        result[0x11] = xmm1_1 f* *(ecx_13 + 0x58)
                        result[0x12] = xmm1_1 f* *(*eax_16 + 0x5c)
                    else
                        result[0x11] = 0x3f800000
                        result[0x12] = 0x3f800000
                    
                    esi_4[7] -= 1
                    result[0xb] = sub_6dd400(arg1)
                    arg1[7] -= 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
                
                var_40 = "DefAutoLock::DefAutoLock"
                var_44 = 0x19
                var_48 = "C:\x\ax2017\Engine\DefLoad.h"
                ecx = "assetPtr && assetPtr->assetType == assetType"
            else
                var_40 = "DataArray<struct Structure>::DataArrayAlloc"
                var_44 = 0xf5
                var_48 = "C:\x\ax2017\Engine\DataArray.h"
                ecx = "mFreeListHead <= mMaxUsedCount"
        else
            var_40 = "DataArray<struct Structure>::DataArrayAlloc"
            var_44 = 0xf4
            var_48 = "C:\x\ax2017\Engine\DataArray.h"
            ecx = "mUsedCount < mMaxSize"
    else
        var_40 = "GetGameData"
        var_44 = 0x45
        var_48 = "C:\x\ax2017\Engine\Game.h"
        ecx = "gpGameData"

sub_63b870(eax_3, &data_801800, ecx, var_48, var_44, var_40)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
