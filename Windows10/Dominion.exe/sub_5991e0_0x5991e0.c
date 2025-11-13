// 函数: sub_5991e0
// 地址: 0x5991e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?CreateOversubscriber@SchedulerProxy@details@Concurrency@@UAEPAUIVirtualProcessorRoot@3@PAUIExecutionResource@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_24 = arg3
int32_t var_20 = 0
*arg3 = &data_801800
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** arg_c
struct _EXCEPTION_REGISTRATION_RECORD** ebx = arg_c
int32_t ecx = data_1597e48
int32_t edx = data_1597e44
int32_t var_20_1 = 1
int32_t var_8_3
struct _EXCEPTION_REGISTRATION_RECORD*** ecx_3

if (ebx == 1)
    if (arg5 s< 0 || arg5 s>= ecx)
        sub_63b870(arg5, &data_801800, "index >= 0 && index < mSize", 
            "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
            "XDynArray<struct DomLogCardEntry>::operator []")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_3 = edx + (arg5 << 3)
    
    if (*(edx + (arg5 << 3) + 4) != 1)
        goto label_599435
    
    int32_t var_3c_1 = ecx
    int32_t var_40_1 = 0
    int32_t var_8_2 = 1
    eax_3 = sub_63d850(arg3, sub_598ae0(eax_3, arg2, &arg_c, *eax_3, 1, arg6))
    var_8_3 = 2
    
    if (data_cf65bc == 0)
    label_599405:
        var_8_3.b = 0
    label_59940d:
        
        if (arg2 == 0x11)
            sub_692c20(eax_3, arg3, 0x11, arg4)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    eax_3 = arg_c
    
    if (eax_3 == 0 || *eax_3 == 0)
        goto label_599405
    
    ecx_3 = &arg_c
label_5993ed:
    eax_3 = sub_63d4e0(ecx_3)
    int32_t temp2_1 = eax_3[1]
    eax_3[1] -= 1
    
    if (temp2_1 == 1)
        eax_3 = sub_64c080(eax_3, &eax_3[3][2])
    
    goto label_599405

struct _EXCEPTION_REGISTRATION_RECORD** var_1c
struct _EXCEPTION_REGISTRATION_RECORD** var_18

if (ebx == 2)
    if (arg5 s< 0 || arg5 s>= data_1597e48)
    label_599638:
        sub_63b870(eax_3, &data_801800, "index >= 0 && index < mSize", 
            "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
            "XDynArray<struct DomLogCardEntry>::operator []")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_6 = data_1597e44
    int32_t var_3c_3 = ecx
    int32_t var_40_2 = 0
    eax_3 =
        sub_598ae0(eax_6, arg2, &var_18, *(eax_6 + (arg5 << 3)), *(eax_6 + (arg5 << 3) + 4), arg6)
    int32_t var_8_4 = 3
    int32_t ecx_5 = data_1597e48
    
    if (arg5 + 1 s>= ecx_5)
        goto label_599638
    
    int32_t eax_7 = data_1597e44
    int32_t var_3c_4 = ecx_5
    int32_t var_40_3 = 0
    sub_598ae0(eax_7, arg2, &arg_c, *(eax_7 + ((arg5 + 1) << 3)), *(eax_7 + ((arg5 + 1) << 3) + 4), 
        arg6)
    var_8_4.b = 4
    struct _EXCEPTION_REGISTRATION_RECORD*** var_3c_5 = &arg_c
    var_8_4.b = 5
    eax_3 = sub_63d850(arg3, sub_599090(&var_18, arg2, &var_1c, 3, "[one]", &var_18, "[another]"))
    var_8_4.b = 6
    
    if (data_cf65bc != 0)
        eax_3 = var_1c
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_1c)
            int32_t temp1_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp1_1 == 1)
                eax_3 = sub_64c080(eax_3, &eax_3[3][2])
    
    var_8_4.b = 7
    
    if (data_cf65bc != 0)
        eax_3 = arg_c
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&arg_c)
            int32_t temp3_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp3_1 == 1)
                eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                arg_c = &data_801800
    
    var_8_3 = 8
    
    if (data_cf65bc == 0)
        goto label_599405
    
    eax_3 = var_18
    
    if (eax_3 == 0 || *eax_3 == 0)
        goto label_599405
    
    ecx_3 = &var_18
    goto label_5993ed

label_599435:
int32_t esi_3 = 0

if (ebx s> 0)
    while (true)
        int32_t eax_12 = arg5 + esi_3
        
        if (arg5 + esi_3 s< 0 || eax_12 s>= ecx)
            sub_63b870(eax_12, &data_801800, "index >= 0 && index < mSize", 
                "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
                "XDynArray<struct DomLogCardEntry>::operator []")
            
            if (sub_63bc30() == 0)
                sub_63bb00()
                noreturn
            
            breakpoint
        
        int32_t var_3c_8 = ecx
        int32_t var_40_4 = 0
        sub_598ae0(eax_12, arg2, &arg_c, *(edx + (eax_12 << 3)), *(edx + (eax_12 << 3) + 4), arg6)
        int32_t var_8_5 = 9
        
        if (esi_3 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD*** eax_14 = &arg_c
            struct _EXCEPTION_REGISTRATION_RECORD*** var_3c_10 = &arg_c
            
            if (esi_3 != ebx - 1)
                var_8_5.b = 0xc
                eax_3 = sub_63d850(arg3, 
                    sub_599090(eax_14, arg2, &var_1c, 4, "[first]", arg3, "[rest]"))
                var_8_5.b = 0xd
                
                if (data_cf65bc != 0)
                    eax_3 = var_1c
                    
                    if (eax_3 != 0 && *eax_3 != 0)
                        eax_3 = sub_63d4e0(&var_1c)
                        int32_t temp4_1 = eax_3[1]
                        eax_3[1] -= 1
                        
                        if (temp4_1 == 1)
                            eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                            var_1c = &data_801800
            else
                var_8_5.b = 0xa
                eax_3 =
                    sub_63d850(arg3, sub_599090(eax_14, arg2, &var_18, 5, "[list]", arg3, "[last]"))
                var_8_5.b = 0xb
                
                if (data_cf65bc != 0)
                    eax_3 = var_18
                    
                    if (eax_3 != 0 && *eax_3 != 0)
                        eax_3 = sub_63d4e0(&var_18)
                        int32_t temp5_1 = eax_3[1]
                        eax_3[1] -= 1
                        
                        if (temp5_1 == 1)
                            eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                            var_18 = &data_801800
        else
            eax_3 = sub_63d850(arg3, &arg_c)
        
        int32_t var_8_6 = 0xe
        
        if (data_cf65bc != 0)
            eax_3 = arg_c
            
            if (eax_3 != 0 && *eax_3 != 0)
                eax_3 = sub_63d4e0(&arg_c)
                int32_t temp6_1 = eax_3[1]
                eax_3[1] -= 1
                
                if (temp6_1 == 1)
                    eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                    arg_c = &data_801800
        
        esi_3 += 1
        var_8_6.b = 0
        
        if (esi_3 s>= ebx)
            break
        
        ecx = data_1597e48
        edx = data_1597e44
        continue

goto label_59940d
