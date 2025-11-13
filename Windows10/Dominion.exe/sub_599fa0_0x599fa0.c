// 函数: sub_599fa0
// 地址: 0x599fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__abi_winrt_ptrto_array_ctor@P$AAVString@Platform@@$00@@YAPAXQ$01$ADV?$Array@P$AAVString@Platform@@$00@Platform@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg2
char** var_24 = arg3
char* arg_4
int32_t* edi = arg_4
int32_t var_14 = 0
*arg3 = &data_801800
int32_t var_8_1 = 0
int32_t* eax_3 = &edi[1]
int32_t ecx = *edi
int32_t var_14_1 = 1
int32_t var_8_3
int32_t ecx_13
char* edi_1

if (ecx == 1)
    int32_t edx = *eax_3
    
    if (edx == 0xc00)
        if (arg4 u> 0xa)
            int32_t var_38_1 = arg4
            sub_63df30(&arg_4, "%d{debt_prompt}")
        else
            switch (arg4)
                case 0
                    sub_63d720(&arg_4, "{debt_0_prompt}")
                case 1
                    sub_63d720(&arg_4, "{debt_1_prompt}")
                case 2
                    sub_63d720(&arg_4, "{debt_2_prompt}")
                case 3
                    sub_63d720(&arg_4, "{debt_3_prompt}")
                case 4
                    sub_63d720(&arg_4, "{debt_4_prompt}")
                case 5
                    sub_63d720(&arg_4, "{debt_5_prompt}")
                case 6
                    sub_63d720(&arg_4, "{debt_6_prompt}")
                case 7
                    sub_63d720(&arg_4, "{debt_7_prompt}")
                case 8
                    sub_63d720(&arg_4, "{debt_8_prompt}")
                case 9
                    sub_63d720(&arg_4, "{debt_9_prompt}")
                case 0xa
                    sub_63d720(&arg_4, "{debt_10_prompt}")
        
        int32_t var_14_2 = 3
        int32_t var_8_2 = 1
        ecx_13 = sub_63d850(arg3, &arg_4)
        var_8_3 = 2
        goto label_59a103
    
    if (edx == 0x601)
        int32_t var_38_3 = arg4
        sub_63df30(&arg_4, "%d{vp}")
        int32_t var_14_3 = 5
        int32_t var_8_4 = 3
        ecx_13 = sub_63d850(arg3, &arg_4)
        var_8_3 = 4
    label_59a103:
        
        if (data_cf65bc != 0)
            char* eax_5 = arg_4
            
            if (eax_5 != 0 && *eax_5 != 0)
                char* eax_6 = sub_63d4e0(&arg_4)
                int32_t temp1_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                ecx_13 = *(eax_6 + 4)
                
                if (temp1_1 == 1)
                    ecx_13 = sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
        
        edi_1 = var_18
    label_59a670:
        var_8_3.b = 0
        
        if ((arg5.b & 4) != 0)
            char** var_38_27 = arg3
            int32_t var_3c_3 = ecx_13
            int32_t var_8_13 = 0x21
            sub_63d850(arg3, sub_598fb0(arg5, edi_1, &arg_4, 0x90))
            int32_t var_8_14 = 0x22
        label_59a6d2:
            
            if (data_cf65bc != 0)
                char* eax_42 = arg_4
                
                if (eax_42 != 0 && *eax_42 != 0)
                    char* eax_43 = sub_63d4e0(&arg_4)
                    int32_t temp10_1 = *(eax_43 + 4)
                    *(eax_43 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
        else if ((arg5.b & 8) != 0)
            char** var_38_29 = arg3
            int32_t var_3c_4 = ecx_13
            int32_t var_8_15 = 0x23
            sub_63d850(arg3, sub_598fb0(arg5, edi_1, &arg_4, 0x91))
            int32_t var_8_16 = 0x24
            goto label_59a6d2
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    arg2 = var_18

if (ecx == 0)
    int32_t eax_7 = *eax_3
    
    if (eax_7 == 3)
        int32_t var_38_5 = arg4
        int32_t var_8_5 = 5
        ecx_13 = sub_63d850(arg3, sub_63df30(&arg_4, "%d{potion}"))
        var_8_3 = 6
        goto label_59a103
    
    if (eax_7 == 0)
        int32_t var_38_7 = ecx
        int32_t var_8_6 = 7
        ecx_13 = sub_63d850(arg3, sub_599ce0(arg4, arg2, &arg_4, arg4))
        var_8_3 = 8
        goto label_59a103
    
    eax_3 = &edi[1]
else if (ecx == 2)
    int32_t var_38_10 = ecx
    int32_t var_8_7 = 9
    ecx_13 = sub_63d850(arg3, sub_599ce0(arg4, arg2, &arg_4, arg4))
    var_8_3 = 0xa
    goto label_59a103

char** ecx_31
char* var_20
char* var_1c

if (arg4 != 1)
    sub_599bd0(eax_3, arg2, &var_1c, edi, 1, 1, arg6)
    int32_t var_48_3 = arg4
    int32_t var_8_12 = 0x1b
    sub_63df30(&var_20, "%d")
    int32_t var_14_6 = 9
    edi_1 = var_18
    char** var_38_25 = &var_1c
    var_8_12.b = 0x1c
    var_8_12.b = 0x1d
    ecx_13 =
        sub_63d850(arg3, sub_599090(&var_20, edi_1, &arg_4, 0x8f, 0x801c54, &var_20, "[resource]"))
    var_8_12.b = 0x1e
    
    if (data_cf65bc != 0)
        char* eax_33 = arg_4
        
        if (eax_33 != 0 && *eax_33 != 0)
            char* eax_34 = sub_63d4e0(&arg_4)
            int32_t temp0_1 = *(eax_34 + 4)
            *(eax_34 + 4) -= 1
            ecx_13 = *(eax_34 + 4)
            
            if (temp0_1 == 1)
                ecx_13 = sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                arg_4 = &data_801800
    
    var_8_12.b = 0x1f
    
    if (data_cf65bc != 0)
        char* eax_35 = var_20
        
        if (eax_35 != 0 && *eax_35 != 0)
            char* eax_36 = sub_63d4e0(&var_20)
            int32_t temp2_1 = *(eax_36 + 4)
            *(eax_36 + 4) -= 1
            ecx_13 = *(eax_36 + 4)
            
            if (temp2_1 == 1)
                ecx_13 = sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
    
    var_8_3 = 0x20
label_59a63a:
    
    if (data_cf65bc == 0)
        goto label_59a670
    
    char* eax_37 = var_1c
    
    if (eax_37 == 0 || *eax_37 == 0)
        goto label_59a670
    
    ecx_31 = &var_1c
else
    int32_t var_3c_1
    char const* const var_38_15
    
    if (ecx u> 3)
        var_38_15 = "GetNResLikes"
        var_3c_1 = 0x656
    label_59a73a:
        sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 
            var_3c_1, var_38_15)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    switch (ecx)
        case 0
            sub_599bd0(eax_3, arg2, &var_1c, edi, 0, 1, arg6)
            int32_t var_48_2 = 1
            int32_t var_8_11 = 0x15
            sub_63df30(&var_20, "%d")
            int32_t var_14_5 = 0x11
            edi_1 = var_18
            int32_t* var_38_22 = &var_1c
            var_8_11.b = 0x16
            var_8_11.b = 0x17
            ecx_13 = sub_63d850(arg3, 
                sub_599090(&var_20, edi_1, &arg_4, 0x8f, 0x801c54, &var_20, "[resource]"))
            var_8_11.b = 0x18
            
            if (data_cf65bc != 0)
                char* eax_27 = arg_4
                
                if (eax_27 != 0 && *eax_27 != 0)
                    char* eax_28 = sub_63d4e0(&arg_4)
                    int32_t temp3_1 = *(eax_28 + 4)
                    *(eax_28 + 4) -= 1
                    ecx_13 = *(eax_28 + 4)
                    
                    if (temp3_1 == 1)
                        ecx_13 = sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                        arg_4 = &data_801800
            
            var_8_11.b = 0x19
            
            if (data_cf65bc != 0)
                char* eax_29 = var_20
                
                if (eax_29 != 0 && *eax_29 != 0)
                    char* eax_30 = sub_63d4e0(&var_20)
                    int32_t temp6_1 = *(eax_30 + 4)
                    *(eax_30 + 4) -= 1
                    ecx_13 = *(eax_30 + 4)
                    
                    if (temp6_1 == 1)
                        ecx_13 = sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
            
            var_8_3 = 0x1a
            goto label_59a63a
        case 1
            eax_3 = *eax_3
            int32_t eax_23
            bool cond:10_1
            
            if (eax_3 s<= 0xb00)
                if (eax_3 == 0xb00)
                    goto label_59a41d
                
                if (eax_3 s> 0x600)
                    if (eax_3 == 0x601)
                        goto label_59a3f1
                    
                    if (eax_3 != 0xa00)
                        goto label_59a42b
                    
                    goto label_59a2ce
                
                if (eax_3 == 0x600)
                label_59a43a:
                    eax_23 = 2
                    goto label_59a454
                
                if (eax_3 == 0)
                    var_38_15 = "TokenArticleStyle"
                    var_3c_1 = 0x4ca
                    goto label_59a73a
                
                void* eax_14 = eax_3 - 0x400
                
                if (eax_3 == 0x400)
                    goto label_59a43a
                
                eax_3 = eax_14 - 1
                cond:10_1 = eax_14 == 1
                goto label_59a429
            
            if (eax_3 s<= 0xc00)
                if (eax_3 == 0xc00)
                label_59a3f1:
                    var_38_15 = "TokenArticleStyle"
                    var_3c_1 = 0x4cd
                    goto label_59a73a
                
                eax_3 -= 0xb01
                
                if (eax_3 u> 9)
                label_59a42b:
                    var_38_15 = "TokenArticleStyle"
                    var_3c_1 = 0x4e5
                    goto label_59a73a
                
                *(eax_3 + &lookup_table_59a794)
            label_59a41d:
                eax_23 = 5
            label_59a454:
                int32_t var_8_10 = 0x13
                ecx_13 = sub_63d850(arg3, sub_599bd0(eax_23, arg2, &arg_4, edi, 0, eax_23, arg6))
                var_8_3 = 0x14
                goto label_59a103
            
            if (eax_3 s> 0x1000)
                cond:10_1 = eax_3 == 0x1001
            label_59a429:
                
                if (cond:10_1)
                    goto label_59a43a
                
                goto label_59a42b
            
            if (eax_3 != 0x1000)
                int32_t* temp4_1 = eax_3
                eax_3 -= 0xe00
                
                if (temp4_1 == 0xe00)
                    goto label_59a2ce
                
                int32_t* temp8_1 = eax_3
                eax_3 -= 1
                
                if (temp8_1 != 1)
                    goto label_59a42b
                
                goto label_59a41d
            
        label_59a2ce:
            sub_599bd0(eax_3, arg2, &var_20, edi, 0, 1, arg6)
            int32_t var_48_1 = 1
            int32_t var_8_9 = 0xd
            sub_63df30(&var_1c, "%d")
            int32_t var_14_4 = 0x21
            edi_1 = var_18
            char** var_38_17 = &var_20
            var_8_9.b = 0xe
            var_8_9.b = 0xf
            ecx_13 = sub_63d850(arg3, 
                sub_599090(&var_1c, edi_1, &arg_4, 0x8f, 0x801c54, &var_1c, "[resource]"))
            var_8_9.b = 0x10
            
            if (data_cf65bc != 0)
                char* eax_17 = arg_4
                
                if (eax_17 != 0 && *eax_17 != 0)
                    char* eax_18 = sub_63d4e0(&arg_4)
                    int32_t temp12_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    ecx_13 = *(eax_18 + 4)
                    
                    if (temp12_1 == 1)
                        ecx_13 = sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                        arg_4 = &data_801800
            
            var_8_9.b = 0x11
            
            if (data_cf65bc != 0)
                char* eax_19 = var_1c
                
                if (eax_19 != 0 && *eax_19 != 0)
                    char* eax_20 = sub_63d4e0(&var_1c)
                    int32_t temp13_1 = *(eax_20 + 4)
                    *(eax_20 + 4) -= 1
                    ecx_13 = *(eax_20 + 4)
                    
                    if (temp13_1 == 1)
                        ecx_13 = sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
            
            var_8_3 = 0x12
            
            if (data_cf65bc == 0)
                goto label_59a670
            
            char* eax_21 = var_20
            
            if (eax_21 == 0 || *eax_21 == 0)
                goto label_59a670
            
            ecx_31 = &var_20
        case 2
            var_38_15 = "GetNResLikes"
            var_3c_1 = 0x654
            goto label_59a73a
        case 3
            int32_t var_8_8 = 0xb
            ecx_13 = sub_63d850(arg3, sub_599bd0(eax_3, arg2, &arg_4, edi, 0, 2, arg6))
            var_8_3 = 0xc
            goto label_59a103
char* eax_38 = sub_63d4e0(ecx_31)
int32_t temp7_1 = *(eax_38 + 4)
*(eax_38 + 4) -= 1
ecx_13 = *(eax_38 + 4)

if (temp7_1 == 1)
    ecx_13 = sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)

goto label_59a670
