// 函数: sub_4e7050
// 地址: 0x4e7050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$ListArray@U?$ListArrayInlineLink@VWorkQueue@details@Concurrency@@@details@Concurrency@@@details@Concurrency@@QAE@PAVSchedulerBase@12@HH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_2c = arg3
int32_t var_24 = 0
*arg3 = &data_801800
int32_t var_8_1 = 0
char* arg_4
char* eax_3 = arg_4
int32_t var_24_1 = 1
int32_t var_8_4

if (*eax_3 == 0)
    sub_4d47c0(&arg_4, arg2)
    int32_t var_24_2 = 3
    int32_t var_8_3 = 0xf
    sub_63d850(arg3, &arg_4)
    var_8_4 = 0x10
else
    char* var_40 = eax_3
    sub_63df30(&arg_4, "[%s]")
    int32_t var_8_2 = 1
    char* var_20
    char* var_1c
    int32_t* ecx_11
    
    if (*arg5 == 0)
        if (arg4 == 0)
            sub_63b870(arg5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_63d720(&var_1c, arg4)
        var_8_2.b = 0xa
        uint8_t* ecx_13 = &data_801800
        uint8_t* eax_17 = arg_4
        
        if (eax_17 != 0)
            ecx_13 = eax_17
        
        var_8_2.b = 0xb
        sub_63d850(arg3, sub_4d48c0(&var_1c, arg2, &var_20, ecx_13, &var_1c))
        var_8_2.b = 0xc
        
        if (data_cf65bc != 0)
            char* eax_20 = var_20
            
            if (eax_20 != 0 && *eax_20 != 0)
                char* eax_21 = sub_63d4e0(&var_20)
                int32_t temp1_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                    var_20 = &data_801800
        
        var_8_2.b = 0xd
        
        if (data_cf65bc != 0)
            char* eax_22 = var_1c
            
            if (eax_22 != 0 && *eax_22 != 0)
                ecx_11 = &var_1c
            label_4e72b7:
                char* eax_23 = sub_63d4e0(ecx_11)
                int32_t temp3_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
    else
        char* var_40_1 = arg5
        char** eax_5 = sub_63df30(&var_20, "[%s]")
        var_8_2.b = 2
        
        if (arg6 == 0)
            sub_63b870(eax_5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_63d720(&var_1c, arg6)
        char* const edi_1 = &data_801800
        var_8_2.b = 3
        char* const ecx_1 = &data_801800
        char* eax_6 = var_20
        
        if (eax_6 != 0)
            ecx_1 = eax_6
        
        if (arg4 == 0)
            sub_63b870(eax_6, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        char* var_18
        sub_63d720(&var_18, arg4)
        var_8_2.b = 4
        char* eax_7 = arg_4
        
        if (eax_7 != 0)
            edi_1 = eax_7
        
        int32_t* var_40_2 = &var_1c
        var_8_2.b = 5
        char* var_14
        sub_63d850(arg3, sub_4d4980(&var_18, arg2, &var_14, edi_1, &var_18, ecx_1))
        var_8_2.b = 6
        
        if (data_cf65bc != 0)
            char* eax_10 = var_14
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_63d4e0(&var_14)
                int32_t temp4_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        var_8_2.b = 7
        
        if (data_cf65bc != 0)
            char* eax_12 = var_18
            
            if (eax_12 != 0 && *eax_12 != 0)
                char* eax_13 = sub_63d4e0(&var_18)
                int32_t temp5_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
        
        var_8_2.b = 8
        
        if (data_cf65bc != 0)
            char* eax_14 = var_1c
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_63d4e0(&var_1c)
                int32_t temp6_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
        
        var_8_2.b = 9
        
        if (data_cf65bc != 0)
            char* eax_16 = var_20
            
            if (eax_16 != 0 && *eax_16 != 0)
                ecx_11 = &var_20
                goto label_4e72b7
    var_8_4 = 0xe

if (data_cf65bc != 0)
    char* eax_24 = arg_4
    
    if (eax_24 != 0 && *eax_24 != 0)
        char* eax_25 = sub_63d4e0(&arg_4)
        int32_t temp0_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)

var_8_4.b = 0

if (sub_4c89a0() == 7)
    char* eax_27 = *arg3
    void* edi_2
    
    if (eax_27 != 0)
        edi_2 = &eax_27[1]
    else
        eax_27 = &data_801800
        edi_2 = &data_801801
    
    void* var_40_8 = edi_2
    int32_t var_44_3 = sx.d(toupper(*eax_27))
    int32_t var_8_5 = 0x11
    sub_63d850(arg3, sub_63df30(&arg_4, "%c%s"))
    int32_t var_8_6 = 0x12
    
    if (data_cf65bc != 0)
        char* eax_32 = arg_4
        
        if (eax_32 != 0 && *eax_32 != 0)
            char* eax_33 = sub_63d4e0(&arg_4)
            int32_t temp2_1 = *(eax_33 + 4)
            *(eax_33 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
