// 函数: sub_6efe80
// 地址: 0x6efe80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771da5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_20 = arg1
int32_t edx = *arg2

for (void* i = &data_8cc228; i s< &data_8cc5f8; i += 8)
    if (*i == edx)
        void* eax_4 = sub_6dd320(&data_8cc5f8, edx)
        int32_t ecx = *(eax_4 + 0x10)
        char* var_18
        char** ecx_3
        
        if (ecx == 0xf)
            void* edx_1 = arg2[2]
            
            if (edx_1 == 0)
            label_6f0119:
                int32_t var_38_7 = *(i + 4)
                sub_63df30(arg1, "%s")
            else
                sub_6ef360(&var_18, edx_1)
                int32_t var_8_1 = 0
                char* const ecx_2 = &data_801800
                char* eax_5 = var_18
                
                if (eax_5 != 0)
                    ecx_2 = eax_5
                
                char* const var_38 = ecx_2
                int32_t var_3c = *(i + 4)
                sub_63df30(arg1, "%s   [%s]")
                int32_t var_8_2 = 1
            label_6eff1d:
                
                if (data_cf65bc != 0)
                    char* eax_6 = var_18
                    
                    if (eax_6 != 0 && *eax_6 != 0)
                        ecx_3 = &var_18
                    label_6f0080:
                        char* eax_17 = sub_63d4e0(ecx_3)
                        int32_t temp1_1 = *(eax_17 + 4)
                        *(eax_17 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return arg1
        else if (ecx != 0xa)
            if (eax_4 != data_1777598)
                if (ecx == 8)
                    int32_t eax_19 = arg2[2]
                    
                    if (eax_19 != 0)
                        int32_t var_38_5 = eax_19
                        int32_t var_3c_4 = *(i + 4)
                        sub_63df30(arg1, "%s   %s")
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return arg1
                else if (ecx == 1)
                    int32_t var_38_6 = arg2[2]
                    int32_t var_3c_5 = *(i + 4)
                    sub_63df30(arg1, "%s   %d")
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg1
                
                goto label_6f0119
            
            int32_t* ebx_1 = arg2[2]
            
            if (ebx_1[2] != 1)
                int32_t var_38_4 = *(i + 4)
                sub_63df30(arg1, "%s   [path]")
            else
                int32_t* eax_9 = *ebx_1
                float xmm1_1 = *eax_9
                float temp0_1 = eax_9[1]
                xmm1_1 - temp0_1
                eax_9:1.b = (xmm1_1 == temp0_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm1_1, temp0_1) ? 1 : 0) << 2 | (xmm1_1 < temp0_1 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    sub_6ef1a0(&var_18, xmm1_1)
                    int32_t var_8_3 = 2
                    char* const ecx_6 = &data_801800
                    char* eax_10 = var_18
                    
                    if (eax_10 != 0)
                        ecx_6 = eax_10
                    
                    char* const var_38_2 = ecx_6
                    int32_t var_3c_2 = *(i + 4)
                    sub_63df30(arg1, "%s   [%s]")
                    int32_t var_8_4 = 3
                    goto label_6eff1d
                
                char* var_1c
                sub_6ef1a0(&var_1c, xmm1_1)
                int32_t var_8_5 = 4
                char* var_14
                sub_6ef1a0(&var_14, *(*ebx_1 + 4))
                var_8_5.b = 5
                char* const edx_2 = &data_801800
                char* eax_12 = var_14
                char* const ecx_9 = &data_801800
                
                if (eax_12 != 0)
                    ecx_9 = eax_12
                
                char* eax_13 = var_1c
                char* const var_38_3 = ecx_9
                
                if (eax_13 != 0)
                    edx_2 = eax_13
                
                char* const var_3c_3 = edx_2
                int32_t var_40_1 = *(i + 4)
                sub_63df30(arg1, "%s   [%s to %s]")
                var_8_5.b = 6
                
                if (data_cf65bc != 0)
                    char* eax_14 = var_14
                    
                    if (eax_14 != 0 && *eax_14 != 0)
                        char* eax_15 = sub_63d4e0(&var_14)
                        int32_t temp2_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                            var_14 = &data_801800
                
                int32_t var_8_6 = 7
                
                if (data_cf65bc != 0)
                    char* eax_16 = var_1c
                    
                    if (eax_16 != 0 && *eax_16 != 0)
                        ecx_3 = &var_1c
                        goto label_6f0080
        else
            int32_t var_38_1 = *(i + 4)
            char* var_3c_1
            
            if ((arg2[2] | arg2[3]) == 0)
                var_3c_1 = "%s   [false]"
            else
                var_3c_1 = "%s   [true]"
            
            sub_63df30(arg1, var_3c_1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1

sub_63b870(&ExceptionList, &data_801800, "Halt", "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 
    0x462, "FindToolData")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
