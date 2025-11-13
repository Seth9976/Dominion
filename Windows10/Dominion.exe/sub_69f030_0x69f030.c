// 函数: sub_69f030
// 地址: 0x69f030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_69eb30()
int32_t eax_3 = sub_69fce0(arg1)
int32_t var_34
char* var_30
char const* const ecx_1

if (eax_3.b != 0)
    if (*arg1 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    void* edx = data_147ac2c
    var_30 = *(edx + 0x24)
    char* ecx_5
    eax_3, ecx_5 = sub_6c8de0(arg1, *(edx + 0x20))
    
    if (eax_3.b == 0)
        var_30 = ecx_5
        eax_3 = sub_69ef40(sub_63d720(&var_30, arg1))
        
        if (eax_3 == 0)
            eax_3 = sub_6b7ef0(arg1)
            
            if (eax_3 == arg2)
                void* edi_1 = data_147ac2c
                *(edi_1 + 0x18) += 1
                
                if (*(edi_1 + 0xc) == 0)
                    sub_6a0220(edi_1 + 0xc)
                
                char* ecx_10 = *(edi_1 + 0xc)
                var_30 = ecx_10
                *(edi_1 + 0xc) = *ecx_10
                *ecx_10 = 0
                *(ecx_10 + 8) = 0
                *(ecx_10 + 0x10) = 0
                *(ecx_10 + 0x14) = 0
                *(ecx_10 + 0x18) = 0
                *(ecx_10 + 0x1c) = 0
                *(ecx_10 + 0xc) = &data_801800
                *(ecx_10 + 4) = arg2
                *(ecx_10 + 0x20) = &data_801800
                sub_63d720(&var_30, arg1)
                char* const var_14
                var_30 = sub_6a0010(&var_14)
                int32_t var_8_1 = 0
                sub_63d850(&ecx_10[0x20], var_30)
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
                
                int32_t ebx_1 = ecx_10
                int32_t var_8_3 = 0xffffffff
                var_30 = &ecx_10[0x20]
                *(ebx_1 + 8) = 0
                eax_3 = sub_6a0140(var_30)
                
                if (eax_3 == 0)
                    char* eax_9 = *(ecx_10 + 0x20)
                    char* const ecx_16 = &data_801800
                    int32_t* esi_1 = data_147ac2c
                    
                    if (eax_9 != 0)
                        ecx_16 = eax_9
                    
                    int32_t eax_10 = sub_69c4d0(ecx_16, 0)
                    int32_t** ecx_19 = (esi_1[1] & eax_10) << 2
                    int32_t* esi_2 = *(ecx_19 + *esi_1)
                    
                    if (esi_2 != 0)
                        char* edi_3 = *(ecx_10 + 0x20)
                        
                        while (true)
                            char* eax_12 = *esi_2
                            char* const ecx_20 = &data_801800
                            
                            if (eax_12 != 0)
                                ecx_20 = eax_12
                            
                            char* const eax_13 = &data_801800
                            
                            if (edi_3 != 0)
                                eax_13 = edi_3
                            
                            int32_t eax_15
                            
                            while (true)
                                char edx_6 = *eax_13
                                char temp1_1 = *ecx_20
                                bool c_1 = edx_6 u< temp1_1
                                
                                if (edx_6 == temp1_1)
                                    if (edx_6 == 0)
                                        eax_15 = 0
                                        break
                                    
                                    edx_6 = eax_13[1]
                                    char temp2_1 = ecx_20[1]
                                    c_1 = edx_6 u< temp2_1
                                    
                                    if (edx_6 == temp2_1)
                                        eax_13 = &eax_13[2]
                                        ecx_20 = &ecx_20[2]
                                        
                                        if (edx_6 != 0)
                                            continue
                                        
                                        eax_15 = 0
                                        break
                                
                                eax_15 = sbb.d(eax_13, eax_13, c_1) | 1
                                break
                            
                            if (eax_15 == 0)
                                esi_2[1] = ebx_1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return ebx_1
                            
                            esi_2 = esi_2[2]
                            
                            if (esi_2 == 0)
                                break
                    
                    int32_t* eax_16 = sub_64bfd0(0xc)
                    eax_16[3] += 1
                    
                    if (*eax_16 == 0)
                        sub_64be70(eax_16)
                    
                    int32_t* edi_4 = *eax_16
                    *eax_16 = *edi_4
                    char* eax_18 = *(ebx_1 + 0x20)
                    *edi_4 = eax_18
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_63d4e0(edi_4)
                        *(eax_19 + 4) += 1
                    
                    edi_4[1] = ebx_1
                    edi_4[2] = *(ecx_19 + *esi_1)
                    *(ecx_19 + *esi_1) = edi_4
                    esi_1[2] += 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return ebx_1
                
                var_30 = "AssetPtrFromPath"
                var_34 = 0xcd
                ecx_1 = "gpAssetAppData->pathToAssetMap.GetAt(pAssetNew->assetPath) == NULL"
            else
                var_30 = "AssetPtrFromPath"
                var_34 = 0xc5
                ecx_1 = "AssetTypeFromPath(assetPath) == assetType"
        else
            if (*(eax_3 + 4) == arg2)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_3
            
            var_30 = "AssetPtrFromPath"
            var_34 = 0xc1
            ecx_1 = "pAssetExisting->assetType == assetType"
    else
        var_30 = "AssetPtrFromPath"
        var_34 = 0xb9
        ecx_1 = "Halt"
else
    var_30 = "AssetPtrFromPath"
    var_34 = 0xb0
    ecx_1 = "AssetPathIsValid(assetPath)"

sub_63b870(eax_3, &data_801800, ecx_1, "C:\x\ax2017\Engine\AssetCatalog.cpp", var_34, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
