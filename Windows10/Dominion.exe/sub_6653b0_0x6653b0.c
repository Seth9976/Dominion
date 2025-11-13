// 函数: sub_6653b0
// 地址: 0x6653b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d310
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t* result_2 = nullptr

if (*result s> 0)
    int32_t esi_1 = data_8cae80
    int32_t edx_1 = 0
    int32_t var_24_1 = 0
    
    while (true)
        int32_t* ecx_1 = result[2] + edx_1
        int32_t edx_2 = *ecx_1
        int32_t var_44
        char const* const var_40
        char* ecx_10
        
        if (edx_2 s< 0 || edx_2 s>= esi_1)
        label_66559e:
            var_40 = "AttribTagGetField"
            var_44 = 0x8b
            ecx_10 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
        else
            result = *(*(data_8cae7c + (edx_2 << 2)) + 0xc)
            
            if (result != 0)
                if (result == data_1724b04)
                    sub_665300(ecx_1)
                    esi_1 = data_8cae80
                label_665563:
                    result = result_2 + 1
                    edx_1 = var_24_1 + 0x10
                    result_2 = result
                    var_24_1 = edx_1
                    
                    if (result s>= *result_1)
                        break
                    
                    result = result_1
                    continue
                else if (edx_2 s< esi_1)
                    if (result == data_1724a80)
                        int32_t** edi_1 = ecx_1[2]
                        int32_t i = 0
                        int32_t** var_2c_1 = edi_1
                        int32_t i_1 = 0
                        
                        if (edi_1[2] s> 0)
                            int32_t edx_3 = 0
                            int32_t var_1c_1 = 0
                            
                            do
                                result = *edi_1
                                int32_t j = 0
                                
                                if (*(edx_3 + result + 0x18) s> 0)
                                    int32_t ecx_2 = 0
                                    int32_t var_14_1 = 0
                                    
                                    do
                                        int32_t* edx_5 = *(edx_3 + result + 0x20) + ecx_2
                                        int32_t ecx_3 = *edx_5
                                        
                                        if (ecx_3 s< 0)
                                            goto label_66559e
                                        
                                        if (ecx_3 s>= esi_1)
                                            goto label_66559e
                                        
                                        result = *(*(data_8cae7c + (ecx_3 << 2)) + 0xc)
                                        
                                        if (result == 0)
                                            goto label_66558d
                                        
                                        if (result == data_1724b04)
                                            void* edi_2 = edx_5[2]
                                            int32_t eax_7 = *(edi_2 + 8)
                                            
                                            if (eax_7 != 0)
                                                uint32_t ecx_4 = zx.d(eax_7.w)
                                                
                                                if (ecx_4 u< data_c23bc8)
                                                    void* esi_3 = ecx_4 * 0x248 + data_c23bc4
                                                    
                                                    if (*(esi_3 + 0x244) == eax_7 && esi_3 != 0)
                                                        int32_t var_8_1 = 0
                                                        `eh vector vbase constructor iterator'(
                                                            esi_3 + 0xc, 0x34, 2, sub_64ca90)
                                                        int32_t var_8_2 = 0xffffffff
                                                        int32_t ecx_5 = data_c23bd0
                                                        data_c23bd0 = zx.d(*(esi_3 + 0x244))
                                                        *(esi_3 + 0x244) = ecx_5
                                                        data_c23bd4 -= 1
                                            
                                            *(edi_2 + 8) = 0
                                            esi_1 = data_8cae80
                                            edi_1 = var_2c_1
                                        
                                        result = *edi_1
                                        j += 1
                                        edx_3 = var_1c_1
                                        ecx_2 = var_14_1 + 0x10
                                        var_14_1 = ecx_2
                                    while (j s< *(edx_3 + result + 0x18))
                                    
                                    i = i_1
                                
                                i += 1
                                edx_3 += 0x30
                                i_1 = i
                                var_1c_1 = edx_3
                            while (i s< edi_1[2])
                    
                    goto label_665563
                
                goto label_66559e
            
        label_66558d:
            var_40 = "AttribTagGetDefMap"
            var_44 = 0x1fe
            ecx_10 = "pAttribField->pDefMap"
        
        sub_63b870(result, &data_801800, ecx_10, "C:\x\ax2017\Engine\AttribMap.cpp", var_44, var_40)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

fsbase->NtTib.ExceptionList = ExceptionList
return result
