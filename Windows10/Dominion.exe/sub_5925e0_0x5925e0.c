// 函数: sub_5925e0
// 地址: 0x5925e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$_Process_sort_queue@PAPAUSYMTYPE@@P6A_NPAU1@0@Z@std@@YAXQAPAUSYMTYPE@@P6A_NPAU1@1@ZAAU?$_Work_stealing_membership@U?$_Sort_work_item_impl@H@std@@@0@AAU?$_Sort_work_item_impl@H@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_28 = arg2
char** var_2c = arg3
void* const i = &data_7bfed8
int32_t var_18 = 0

do
    if (*i == arg4)
        if (i == 0)
            break
        
        void* eax_5 = sub_68c730(*(i + 8), arg2, i)
        uint32_t var_48 = arg5 != 1
        char* eax_6 = sub_693050(var_28, eax_5)
        
        if (eax_6 == 0)
            sub_63b870(eax_6, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        char* var_14
        sub_63d720(&var_14, eax_6)
        int32_t var_18_1 = 2
        int32_t var_8_1 = 1
        int32_t eax_7 = *(i + 0xc)
        int32_t edi_1
        char* var_24
        char* var_20
        char** ecx_26
        
        if (eax_7 == 0)
            int32_t var_48_16 = arg5
            sub_63df30(&var_20, "%d")
            edi_1 = 0x22
            int32_t var_18_6 = 0x22
            var_8_1.b = 2
            char* esi_2 = &data_801800
            char* eax_45 = var_20
            char* ecx_42 = &data_801800
            
            if (eax_45 != 0)
                ecx_42 = eax_45
            
            char* eax_46 = var_14
            
            if (eax_46 != 0)
                esi_2 = eax_46
            
            var_8_1.b = 3
            sub_63d850(&var_14, sub_63dfa0(eax_46, esi_2, &var_24, 0x801c54, ecx_42))
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                char* eax_48 = var_24
                
                if (eax_48 != 0 && *eax_48 != 0)
                    char* eax_49 = sub_63d4e0(&var_24)
                    int32_t temp3_1 = *(eax_49 + 4)
                    *(eax_49 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                        var_24 = &data_801800
            
            var_8_1.b = 5
            
            if (data_cf65bc != 0)
                char* eax_50 = var_20
                
                if (eax_50 != 0 && *eax_50 != 0)
                    ecx_26 = &var_20
                label_592b1b:
                    char* eax_51 = sub_63d4e0(ecx_26)
                    int32_t temp5_1 = *(eax_51 + 4)
                    *(eax_51 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
        else
            char* var_1c
            
            if (eax_7 == 1)
                int32_t var_48_10 = arg5
                sub_63df30(&var_1c, "%d")
                edi_1 = 6
                int32_t var_18_5 = 6
                var_8_1.b = 6
                char* esi_1 = &data_801800
                char* eax_31 = var_1c
                char* ecx_27 = &data_801800
                char* edx_15 = &data_801800
                
                if (eax_31 != 0)
                    ecx_27 = eax_31
                
                char* eax_32 = var_14
                
                if (eax_32 != 0)
                    edx_15 = eax_32
                
                var_8_1.b = 7
                sub_63d850(&var_14, sub_63dfa0(eax_32, edx_15, &var_20, 0x801c54, ecx_27))
                var_8_1.b = 8
                
                if (data_cf65bc != 0)
                    char* eax_34 = var_20
                    
                    if (eax_34 != 0 && *eax_34 != 0)
                        char* eax_35 = sub_63d4e0(&var_20)
                        int32_t temp4_1 = *(eax_35 + 4)
                        *(eax_35 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
                            var_20 = &data_801800
                
                var_8_1.b = 9
                
                if (data_cf65bc != 0)
                    char* eax_36 = var_1c
                    
                    if (eax_36 != 0 && *eax_36 != 0)
                        char* eax_37 = sub_63d4e0(&var_1c)
                        int32_t temp6_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                
                var_8_1.b = 1
                char* eax_38
                int32_t ecx_35
                eax_38, ecx_35 = sub_571b30(arg6, 0x18)
                int32_t var_48_13 = 1
                sub_4e3fa0(eax_38, eax_38, &var_24, var_28, ecx_35)
                var_8_1.b = 0xa
                char* ecx_37 = &data_801800
                char* eax_39 = var_24
                
                if (eax_39 != 0)
                    ecx_37 = eax_39
                
                char* eax_40 = var_14
                
                if (eax_40 != 0)
                    esi_1 = eax_40
                
                var_8_1.b = 0xb
                sub_63d850(&var_14, sub_63dfa0(eax_40, esi_1, &var_28, "[card]", ecx_37))
                var_8_1.b = 0xc
                
                if (data_cf65bc != 0)
                    char* eax_42 = var_28
                    
                    if (eax_42 != 0 && *eax_42 != 0)
                        char* eax_43 = sub_63d4e0(&var_28)
                        int32_t temp10_1 = *(eax_43 + 4)
                        *(eax_43 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                
                var_8_1.b = 0xd
                
                if (data_cf65bc != 0)
                    char* eax_44 = var_24
                    
                    if (eax_44 != 0 && *eax_44 != 0)
                        ecx_26 = &var_24
                        goto label_592b1b
            else
                if (eax_7 != 2)
                    sub_63b870(eax_7 - 2, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x5015, 
                        "VPBannerStringFormat")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t var_48_1 = arg5
                sub_63df30(&var_20, "%d")
                int32_t var_18_2 = 0xa
                var_8_1.b = 0xe
                char* const esi = &data_801800
                char* eax_11 = var_20
                char* const ecx_7 = &data_801800
                char* edx_2 = &data_801800
                
                if (eax_11 != 0)
                    ecx_7 = eax_11
                
                char* eax_12 = var_14
                
                if (eax_12 != 0)
                    edx_2 = eax_12
                
                var_8_1.b = 0xf
                sub_63d850(&var_14, sub_63dfa0(eax_12, edx_2, &var_1c, 0x820c90, ecx_7))
                var_8_1.b = 0x10
                
                if (data_cf65bc != 0)
                    char* eax_14 = var_1c
                    
                    if (eax_14 != 0 && *eax_14 != 0)
                        char* eax_15 = sub_63d4e0(&var_1c)
                        int32_t temp7_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                            var_1c = &data_801800
                
                var_8_1.b = 0x11
                
                if (data_cf65bc != 0)
                    char* eax_16 = var_20
                    
                    if (eax_16 != 0 && *eax_16 != 0)
                        char* eax_17 = sub_63d4e0(&var_20)
                        int32_t temp9_1 = *(eax_17 + 4)
                        *(eax_17 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                
                int32_t var_48_4 = arg6
                var_8_1.b = 1
                sub_63df30(&var_1c, "%d")
                int32_t var_18_3 = 0x1a
                var_8_1.b = 0x12
                char* const ecx_14 = &data_801800
                char* eax_18 = var_1c
                char* const edx_7 = &data_801800
                
                if (eax_18 != 0)
                    ecx_14 = eax_18
                
                char* eax_19 = var_14
                
                if (eax_19 != 0)
                    edx_7 = eax_19
                
                var_8_1.b = 0x13
                sub_63d850(&var_14, sub_63dfa0(eax_19, edx_7, &var_20, 0x820c94, ecx_14))
                var_8_1.b = 0x14
                
                if (data_cf65bc != 0)
                    char* eax_21 = var_20
                    
                    if (eax_21 != 0 && *eax_21 != 0)
                        char* eax_22 = sub_63d4e0(&var_20)
                        int32_t temp11_1 = *(eax_22 + 4)
                        *(eax_22 + 4) -= 1
                        
                        if (temp11_1 == 1)
                            sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                            var_20 = &data_801800
                
                var_8_1.b = 0x15
                
                if (data_cf65bc != 0)
                    char* eax_23 = var_1c
                    
                    if (eax_23 != 0 && *eax_23 != 0)
                        char* eax_24 = sub_63d4e0(&var_1c)
                        int32_t temp12_1 = *(eax_24 + 4)
                        *(eax_24 + 4) -= 1
                        
                        if (temp12_1 == 1)
                            sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
                
                int32_t var_48_7 = arg7
                var_8_1.b = 1
                sub_63df30(&var_1c, "%d")
                edi_1 = 0x5a
                int32_t var_18_4 = 0x5a
                var_8_1.b = 0x16
                char* const ecx_21 = &data_801800
                char* eax_25 = var_1c
                
                if (eax_25 != 0)
                    ecx_21 = eax_25
                
                char* eax_26 = var_14
                
                if (eax_26 != 0)
                    esi = eax_26
                
                var_8_1.b = 0x17
                sub_63d850(&var_14, sub_63dfa0(eax_26, esi, &var_20, 0x820c98, ecx_21))
                var_8_1.b = 0x18
                
                if (data_cf65bc != 0)
                    char* eax_28 = var_20
                    
                    if (eax_28 != 0 && *eax_28 != 0)
                        char* eax_29 = sub_63d4e0(&var_20)
                        int32_t temp13_1 = *(eax_29 + 4)
                        *(eax_29 + 4) -= 1
                        
                        if (temp13_1 == 1)
                            sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                            var_20 = &data_801800
                
                var_8_1.b = 0x19
                
                if (data_cf65bc != 0)
                    char* eax_30 = var_1c
                    
                    if (eax_30 != 0 && *eax_30 != 0)
                        ecx_26 = &var_1c
                        goto label_592b1b
        var_8_1.b = 1
        char* esi_3 = var_14
        *arg3 = esi_3
        
        if (esi_3 != 0 && *esi_3 != 0)
            char* eax_52 = sub_63d4e0(arg3)
            *(eax_52 + 4) += 1
        
        int32_t var_18_7 = edi_1 | 1
        int32_t var_8_2 = 0x1a
        
        if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
            char* eax_53 = sub_63d4e0(&var_14)
            int32_t temp8_1 = *(eax_53 + 4)
            *(eax_53 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_64c080(eax_53, *(eax_53 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    i += 0x14
while (i != &data_7c0090)

sub_63d720(arg3, &data_801800)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
