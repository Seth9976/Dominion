// 函数: sub_677dc0
// 地址: 0x677dc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d9dd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx
ebx.b = arg2
char var_11 = ebx.b
int32_t var_40_1
char* ecx
char const* const edx

if (arg3 != 0)
    if (arg3[1] == 0x22)
        int32_t* result = sub_5af880(arg3)
        int32_t* result_2 = result
        int32_t i_1 = 0
        int32_t* result_3 = result_2
        
        if (result_2[2] s> 0)
            char edi_1 = arg4
            result = nullptr
            int32_t* result_1 = nullptr
            int32_t i
            
            do
                void* esi_2 = *result_2 + result
                int32_t* eax_4 = sub_6dcf50(result, esi_2, &data_8cae70, 0x66)
                
                if (eax_4 == 3 || eax_4 == 5)
                    int32_t var_3c_2 = sub_6dd140(eax_4, esi_2, &data_8cae70, 0x64)
                    int32_t var_40_2 = data_c27c20
                    int32_t* var_18
                    int32_t* eax_6 = sub_676e70(&var_18, "dom_ui_")
                    int32_t var_8_1 = 0
                    eax_4 = sub_6771a0(eax_6, *result_3 + result_1, eax_6, edi_1)
                    int32_t var_8_2 = 1
                    
                    if (data_cf65bc != 0)
                        eax_4 = var_18
                        
                        if (eax_4 != 0 && *eax_4 != 0)
                            eax_4 = sub_63d4e0(&var_18)
                            int32_t temp0_1 = eax_4[1]
                            eax_4[1] -= 1
                            
                            if (temp0_1 == 1)
                                eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                                var_18 = &data_801800
                    
                    int32_t var_8_3 = 0xffffffff
                
                if (ebx.b == 0)
                    int32_t* eax_7 = sub_6dd280(eax_4, esi_2, &data_8cae70, 0x104)
                    
                    if (eax_7 != 0)
                        int32_t var_3c_3 = sub_6dd140(eax_7, esi_2, &data_8cae70, 0x64)
                        char* eax_10 = sub_6dd140(sub_63b5f0("el %s"), esi_2, &data_8cae70, 0x105)
                        
                        if (eax_10 != 0 && *eax_10 != 0)
                            eax_10 = sub_677a50(eax_10, eax_10, eax_7, edi_1)
                        
                        enum MESSAGEBOX_RESULT eax_11 =
                            sub_6dd1e0(eax_10, esi_2, &data_8cae70, data_1724a80, 0x69)
                        ebx = eax_11
                        
                        if (ebx != 0)
                            int32_t j = 0
                            
                            if (ebx[2] s> 0)
                                int32_t edi_2 = 0
                                
                                do
                                    eax_11 =
                                        sub_6dd140(eax_11, *ebx + 0x18 + edi_2, &data_8cae70, 0x105)
                                    
                                    if (eax_11 != 0 && *eax_11 != 0)
                                        eax_11 = sub_677a50(eax_11, eax_11, eax_7, arg4)
                                    
                                    j += 1
                                    edi_2 += 0x30
                                while (j s< ebx[2])
                                
                                edi_1 = arg4
                    
                    ebx.b = var_11
                
                i = i_1 + 1
                result = &result_1[6]
                i_1 = i
                result_2 = result_3
                result_1 = result
            while (i s< result_3[2])
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    char const* const var_3c_6 = "UI2DefGet"
    var_40_1 = 0xc17
    edx = &data_801800
    ecx = "ptr->assetType == ASSET_TYPE_UI2"
else
    char const* const var_3c_1 = "UI2DefGet"
    var_40_1 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx = &data_874470

sub_63b870(&ExceptionList, edx, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_40_1, "UI2DefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
