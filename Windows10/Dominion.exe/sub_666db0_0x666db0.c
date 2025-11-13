// 函数: sub_666db0
// 地址: 0x666db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d390
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
memcpy(&data_c27c54, arg1, 0x1018)
sub_69cee0(**data_c27c20, data_1724a84)
int32_t** esi = *data_c27c20
int32_t* result = sub_69d4c0(**(arg1 + 0x1018), data_1724a84)
*esi = result
int32_t* ecx_4 = data_c27c20
char const* const var_40
int32_t var_3c_1
char const* const var_38
char* ecx_5
char const* const edx_2

if (ecx_4 != 0)
    if (ecx_4[1] == 0x22)
        result = sub_5af880(ecx_4)
        int32_t* result_1 = result
        int32_t edx_3 = 0
        int32_t* result_2 = result_1
        int32_t var_18_1 = 0
        
        if (result_1[2] s> 0)
            int32_t* ecx_6 = nullptr
            int32_t* var_1c_1 = nullptr
            
            while (true)
                result = *result_1
                int32_t edi_1 = 0
                
                if (*(ecx_6 + result) s> 0)
                    int32_t esi_1 = 0
                    int32_t var_14_1 = 0
                    
                    while (true)
                        int32_t* ecx_7 = *(ecx_6 + result + 8)
                        int32_t edx_4 = *(ecx_7 + esi_1)
                        
                        if (edx_4 s< 0 || edx_4 s>= data_8cae80)
                            var_38 = "AttribTagGetField"
                            var_3c_1 = 0x8b
                            ecx_5 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                        else
                            result = *(*(data_8cae7c + (edx_4 << 2)) + 0xc)
                            
                            if (result == 0)
                                var_38 = "AttribTagGetDefMap"
                                var_3c_1 = 0x1fe
                                ecx_5 = "pAttribField->pDefMap"
                            else
                                if (result == data_1724b04)
                                    void* ebx_1 = *(ecx_7 + esi_1 + 8)
                                    int32_t eax_7 = *(ebx_1 + 8)
                                    
                                    if (eax_7 != 0)
                                        uint32_t ecx_8 = zx.d(eax_7.w)
                                        
                                        if (ecx_8 u< data_c23bc8)
                                            void* esi_3 = ecx_8 * 0x248 + data_c23bc4
                                            
                                            if (*(esi_3 + 0x244) == eax_7 && esi_3 != 0)
                                                int32_t var_8_1 = 0
                                                `eh vector vbase constructor iterator'(esi_3 + 0xc, 
                                                    0x34, 2, sub_64ca90)
                                                int32_t var_8_2 = 0xffffffff
                                                int32_t ecx_9 = data_c23bd0
                                                data_c23bd0 = zx.d(*(esi_3 + 0x244))
                                                *(esi_3 + 0x244) = ecx_9
                                                data_c23bd4 -= 1
                                            
                                            esi_1 = var_14_1
                                    
                                    *(ebx_1 + 8) = 0
                                    result_1 = result_2
                                
                                result = *result_1
                                edi_1 += 1
                                ecx_6 = var_1c_1
                                esi_1 += 0x10
                                var_14_1 = esi_1
                                
                                if (edi_1 s< *(ecx_6 + result))
                                    continue
                                
                                edx_3 = var_18_1
                                break
                        
                        var_40 = "C:\x\ax2017\Engine\AttribMap.cpp"
                        goto label_666fa4
                
                edx_3 += 1
                ecx_6 = &ecx_6[6]
                var_18_1 = edx_3
                var_1c_1 = ecx_6
                
                if (edx_3 s>= result_1[2])
                    break
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_38 = "UI2DefGet"
    var_3c_1 = 0xc17
    var_40 = "C:\x\ax2017\Engine\UI2.cpp"
    ecx_5 = "ptr->assetType == ASSET_TYPE_UI2"
label_666fa4:
    edx_2 = &data_801800
else
    var_38 = "UI2DefGet"
    var_3c_1 = 0xc16
    var_40 = "C:\x\ax2017\Engine\UI2.cpp"
    edx_2 = "UI2DefGet on null pointer"
    ecx_5 = &data_874470

sub_63b870(result, edx_2, ecx_5, var_40, var_3c_1, var_38)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
