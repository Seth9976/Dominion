// 函数: sub_6e1610
// 地址: 0x6e1610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = 0
int32_t* eax_1 = arg1 + 4
int32_t var_10 = 0
int32_t* var_8 = eax_1
int32_t* var_14_1

if (*(arg1 + 8) s<= 0)
    var_8 = eax_1
    var_14_1 = arg1 + 8
else
    int32_t ecx_1 = 0
    int32_t var_14 = 0
    
    while (true)
        int32_t* esi_2 = *eax_1 + ecx_1
        int32_t eax_2 = strchr(esi_2[1], 0x20)
        int32_t var_2c_6
        char const* const ecx_6
        
        if (eax_2 != 0)
            char const* const var_28_6 = "AttribTableInit"
            var_2c_6 = 0x37
            ecx_6 = "strchr(pAttribField->fieldName, ' ') == NULL"
        else
            eax_2 = strchr(esi_2[1], 0x3c)
            
            if (eax_2 != 0)
                char const* const var_28_5 = "AttribTableInit"
                var_2c_6 = 0x38
                ecx_6 = "strchr(pAttribField->fieldName, '<') == NULL"
            else
                eax_2 = strchr(esi_2[1], 0x3e)
                
                if (eax_2 != 0)
                    char const* const var_28_4 = "AttribTableInit"
                    var_2c_6 = 0x39
                    ecx_6 = "strchr(pAttribField->fieldName, '>') == NULL"
                else
                    eax_2 = strchr(esi_2[1], 0x26)
                    
                    if (eax_2 != 0)
                        char const* const var_28_3 = "AttribTableInit"
                        var_2c_6 = 0x3a
                        ecx_6 = "strchr(pAttribField->fieldName, '&') == NULL"
                    else
                        eax_2 = strchr(esi_2[1], 0x22)
                        
                        if (eax_2 != 0)
                            char const* const var_28_2 = "AttribTableInit"
                            var_2c_6 = 0x3b
                            ecx_6 = "strchr(pAttribField->fieldName, '"') == NULL"
                        else
                            esi_2[3] = sub_6a2d40(esi_2[2])
                            eax_2 = *esi_2
                            
                            if (eax_2 u>= 0x3e8)
                                char const* const var_28_1 = "AttribTableInit"
                                var_2c_6 = 0x40
                                ecx_6 = "pAttribField->position < 1000"
                            else
                                if (eax_2 s> ebx)
                                    ebx = eax_2
                                
                                ecx_1 = var_14 + 0x3c
                                bool cond:1_1 = var_10 + 1 s< *(arg1 + 8)
                                var_10 += 1
                                eax_1 = var_8
                                var_14 = ecx_1
                                
                                if (cond:1_1)
                                    continue
                                
                                var_14_1 = arg1 + 8
                                break
        
        sub_63b870(eax_2, &data_801800, ecx_6, "C:\x\ax2017\Engine\AttribMapRegistry.cpp", 
            var_2c_6, "AttribTableInit")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

int32_t count = (ebx + 1) << 2
int32_t eax_8 = sub_687730(count)
memset(eax_8, 0, count)
*(arg1 + 0xc) = eax_8
int32_t i = 0
*(arg1 + 0x10) = ebx + 1
int32_t* result = arg1 + 8

if (*result s> 0)
    int32_t esi_3 = 0
    
    do
        i += 1
        int32_t* edx_3 = *var_8 + esi_3
        esi_3 += 0x3c
        result = *(arg1 + 0xc)
        result[*edx_3] = edx_3
    while (i s< *var_14_1)

return result
