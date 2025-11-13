// 函数: sub_674500
// 地址: 0x674500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x6034)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t eax_7 = arg8
int32_t* var_6018 = eax_7
int32_t var_6020 = ecx
int32_t var_18
char const* const var_14
char* ecx_1

if (edx s< 0)
    var_14 = "AttribTreeItemGetByIndex"
    var_18 = 0x4ca2
    ecx_1 = "idx >= 0"
else if (edx s< ecx[2])
    int32_t ecx_3 = edx * 0x18
    int32_t var_6014 = *ecx + ecx_3
    eax_7 = ecx_3 s/ 0x18
    
    if (eax_7 == edx)
        uint32_t eax_13 = sub_666fd0(ecx, edx)
        *arg3 = edx
        eax_7 = var_6014
        int32_t ecx_5 = eax_7
        int32_t var_6028 = ecx_5
        int32_t edx_4 = *(eax_7 + 0x10)
        int32_t esi_1
        
        if (edx_4 != 0)
            int32_t esi_2 = 0
            
            if (edx_4 s> 0)
                while (true)
                    var_6028 = ecx_5 + 0x18
                    int32_t edx_5
                    eax_7, edx_5 = sub_6744c0(&var_6028)
                    esi_2 += eax_7
                    
                    if (edx_5 == 1)
                        break
                    
                    ecx_5 = var_6028
            
            esi_1 = esi_2 + 1
        else
            esi_1 = edx_4 + 1
        
        int32_t* edx_8 = arg5
        *edx_8 = esi_1
        uint32_t eax_16
        
        if (arg2 != 1)
            if (arg2 != 2)
                eax_16 = 0
            else
                eax_16 = sub_666fd0(var_6020, arg1)
                edx_8 = arg5
            
            goto label_674699
        
        if (arg1 s>= 0)
            eax_7 = var_6020
            
            if (arg1 s< *(eax_7 + 8))
                eax_16 = *eax_7 + arg1 * 0x18
            label_674699:
                
                if (eax_13 != 0)
                    *(eax_13 + 0x10) -= 1
                
                if (eax_16 != 0)
                    *(eax_16 + 0x10) += 1
                
                eax_7 = *edx_8
                
                if (eax_7 u< 0x400)
                    void var_600c
                    eax_7 = memcpy(&var_600c, var_6014, eax_7 * 0x18)
                    int32_t eax_19
                    
                    if (arg2 == 0)
                        eax_19 = 0
                    label_674793:
                        *arg4 = eax_19
                        int32_t ecx_13 = *arg3
                        int32_t* eax_25
                        int32_t* edx_12
                        int32_t* edi_2
                        
                        if (ecx_13 != eax_19)
                            int32_t* ecx_15
                            
                            if (ecx_13 u>= eax_19)
                                edx_12 = arg6
                                edi_2 = arg5
                                *edx_12 = eax_19
                                *arg7 = *edi_2 + *arg4
                                ecx_15 = var_6018
                                *ecx_15 = edx - *arg4
                            else
                                *arg6 = *arg5 + ecx_13
                                *arg7 = *arg3
                                edi_2 = arg5
                                ecx_15 = var_6018
                                *ecx_15 = *arg4 - *arg6
                                *arg4 -= *arg5
                                edx_12 = arg6
                            
                            eax_25 = ecx_15
                        else
                            edx_12 = arg6
                            edi_2 = arg5
                            *edx_12 = 0
                            *arg7 = 0
                            eax_25 = var_6018
                            *eax_25 = 0
                        
                        int32_t ecx_17 = *var_6020
                        memmove(ecx_17 + *arg7 * 0x18, ecx_17 + *edx_12 * 0x18, *eax_25 * 0x18)
                        memcpy(*var_6020 + *arg4 * 0x18, &var_600c, *edi_2 * 0x18)
                        uint32_t result
                        result.b = 1
                        CookieCheckFunction(result)
                        return result
                    
                    if (arg2 == 1)
                        eax_19 = arg1 + 1
                        goto label_674793
                    
                    if (arg2 != 2)
                        var_14 = "AttribTreeItemMove"
                        var_18 = 0x4ce4
                        ecx_1 = "Halt"
                    else if (arg1 s>= 0)
                        eax_7 = var_6020
                        
                        if (arg1 s< *(eax_7 + 8))
                            int32_t eax_21 = *eax_7 + arg1 * 0x18
                            var_6014 = eax_21
                            int32_t edx_9 = *(eax_21 + 0x10)
                            int32_t esi_4
                            
                            if (edx_9 != 0)
                                int32_t esi_5 = 0
                                
                                if (edx_9 s> 0)
                                    while (true)
                                        var_6014 = eax_21 + 0x18
                                        int32_t eax_23
                                        int32_t edx_10
                                        eax_23, edx_10 = sub_6744c0(&var_6014)
                                        esi_5 += eax_23
                                        
                                        if (edx_10 == 1)
                                            break
                                        
                                        eax_21 = var_6014
                                
                                esi_4 = esi_5 + 1
                            else
                                esi_4 = edx_9 + 1
                            
                            eax_19 = arg1 + esi_4
                            goto label_674793
                        
                        var_14 = "AttribTreeItemGetByIndex"
                        var_18 = 0x4ca3
                        ecx_1 = "idx < tree.numItems"
                    else
                        var_14 = "AttribTreeItemGetByIndex"
                        var_18 = 0x4ca2
                        ecx_1 = "idx >= 0"
                else
                    var_14 = "AttribTreeItemMove"
                    var_18 = 0x4cd7
                    ecx_1 = "sourceCount < MAX_SELECTED"
            else
                var_14 = "AttribTreeItemGetByIndex"
                var_18 = 0x4ca3
                ecx_1 = "idx < tree.numItems"
        else
            var_14 = "AttribTreeItemGetByIndex"
            var_18 = 0x4ca2
            ecx_1 = "idx >= 0"
    else
        var_14 = "AttribTreeItemMove"
        var_18 = 0x4cc5
        ecx_1 = "source - tree.items == sourceIdx"
else
    var_14 = "AttribTreeItemGetByIndex"
    var_18 = 0x4ca3
    ecx_1 = "idx < tree.numItems"

sub_63b870(eax_7, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
