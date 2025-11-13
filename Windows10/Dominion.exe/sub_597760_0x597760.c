// 函数: sub_597760
// 地址: 0x597760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?Grow@?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@AAEPAUSegment@123@PAU4123@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = arg2
int32_t* result = arg1
int32_t var_8_1 = 0
uint32_t eax_3 = 0
int32_t var_20 = 0
char* esi = edi
int32_t ebx
ebx.b = *edi
uint32_t var_14 = 0
char* var_18

if (ebx.b != 0)
    while (true)
        var_18 = esi
        
        if (ebx.b u>= 0x80)
            eax_3.b = ebx.b
            eax_3.b &= 0xe0
            
            if (eax_3.b != 0xc0)
                eax_3.b = ebx.b
                eax_3.b &= 0xf0
                
                if (eax_3.b != 0xe0)
                    ebx.b &= 0xf8
                    
                    if (ebx.b != 0xf0)
                        goto label_597877
        
        sub_5a0d00(&var_18)
        esi = var_18
        eax_3 = var_14 + 1
        var_14 = eax_3
        
        if (*esi == 0)
            break
        
        ebx.b = *esi

if (eax_3 == 1)
label_59782b:
    *result = &data_801800
    int32_t var_8_2 = 0
    int32_t var_20_1 = 1
    sub_63da70(result, edi, esi - edi)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t ebx_1 = 1

while (true)
    arg1.b = *edi
    
    if (arg1.b == 0)
        goto label_59782b
    
    var_18 = edi
    
    if (arg1.b u>= 0x80)
        eax_3.b = arg1.b
        eax_3.b &= 0xe0
        
        if (eax_3.b != 0xc0)
            eax_3.b = arg1.b
            eax_3.b &= 0xf0
            
            if (eax_3.b != 0xe0)
                arg1.b &= 0xf8
                
                if (arg1.b != 0xf0)
                    break
    
    eax_3, arg1 = sub_5a0d00(&var_18)
    edi = var_18
    ebx_1 += 1
    
    if (ebx_1 == var_14)
        goto label_59782b

label_597877:
sub_63b870(eax_3, &data_801800, "!Xutf8_is_invalid_lead_char(str)", "C:\x\ax2017\Engine\Xutf8.cpp", 
    0x222, "Xutf8_next")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
