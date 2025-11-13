// 函数: sub_63dfa0
// 地址: 0x63dfa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??R<lambda_d121dba8a4adeaf3a9819e48611155df>@@QBEHXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** result = arg3
int32_t* result_1 = result
int32_t var_18 = 1

if (arg2 == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(arg3, arg2)
uint8_t* edi = arg4
char* ecx = edi
int32_t var_8_1 = 0
int32_t var_18_1 = 1
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
void* ecx_1 = ecx - &ecx[1]

while (true)
    char* eax_4 = *result
    char* ecx_2 = &data_801800
    
    if (eax_4 != 0)
        ecx_2 = eax_4
    
    int32_t eax_5 = strstr(ecx_2, edi)
    
    if (eax_5 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    char* ecx_3 = *result
    uint32_t esi_1
    
    if (ecx_3 != 0)
        esi_1 = eax_5 - ecx_3
    else
        esi_1 = eax_5 - &data_801800
        ecx_3 = &data_801800
    
    char* const var_28 = &data_801800
    sub_63db30(&var_28, ecx_3, esi_1)
    int32_t var_8_2 = 2
    char* eax_6 = *result_1
    int32_t eax_8
    
    if (eax_6 == 0 || *eax_6 == 0)
        eax_8 = 0
    else
        eax_8 = *(sub_63d4e0(result_1) + 8)
    
    int32_t eax_9 = eax_8 - esi_1
    uint32_t eax_10 = eax_9 - ecx_1
    int32_t var_4c_4
    char const* const var_48_7
    char* ecx_29
    
    if (eax_9 - ecx_1 s< 0)
        var_48_7 = "StringReplace"
        var_4c_4 = 0x204
        ecx_29 = "rightLen >= 0"
    else if (ecx_1 == neg.d(eax_5))
        var_48_7 = "XString::XString"
        var_4c_4 = 0x9a
        ecx_29 = &data_871e0c
    else
        char* const var_20 = &data_801800
        sub_63db30(&var_20, ecx_1 + eax_5, eax_10)
        var_8_2.b = 3
        
        if (arg5 == 0)
            break
        
        char* var_24
        sub_63d720(&var_24, arg5)
        var_8_2.b = 5
        char* const edi_2 = var_28
        char* const var_1c = edi_2
        
        if (edi_2 != 0 && *edi_2 != 0)
            char* eax_12 = sub_63d4e0(&var_1c)
            *(eax_12 + 4) += 1
        
        char* eax_13 = var_24
        int32_t var_18_2 = 3
        char* const ecx_11 = &data_801800
        
        if (eax_13 != 0)
            ecx_11 = eax_13
        
        sub_63d960(&var_1c, ecx_11)
        var_8_2.b = 6
        char* const esi_2 = var_1c
        char* const var_14 = esi_2
        
        if (esi_2 != 0 && *esi_2 != 0)
            char* eax_14 = sub_63d4e0(&var_14)
            *(eax_14 + 4) += 1
        
        char* const eax_15 = var_20
        int32_t var_18_3 = 7
        char* const ecx_14 = &data_801800
        
        if (eax_15 != 0)
            ecx_14 = eax_15
        
        sub_63d960(&var_14, ecx_14)
        sub_63d850(result_1, &var_14)
        int32_t var_18_4 = 3
        var_8_2.b = 7
        
        if (data_cf65bc != 0)
            char* const eax_16 = var_14
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_63d4e0(&var_14)
                int32_t temp2_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_18_5 = 1
        var_8_2.b = 8
        
        if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_18 = sub_63d4e0(&var_1c)
            int32_t temp3_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                var_1c = &data_801800
        
        var_8_2.b = 9
        
        if (data_cf65bc != 0)
            char* eax_19 = var_24
            
            if (eax_19 != 0 && *eax_19 != 0)
                char* eax_20 = sub_63d4e0(&var_24)
                int32_t temp4_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                    var_24 = &data_801800
        
        var_8_2.b = 0xa
        
        if (data_cf65bc != 0)
            char* const eax_21 = var_20
            
            if (eax_21 != 0 && *eax_21 != 0)
                char* eax_22 = sub_63d4e0(&var_20)
                int32_t temp5_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                    var_20 = &data_801800
        
        int32_t var_8_3 = 0xb
        
        if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
            char* eax_23 = sub_63d4e0(&var_28)
            int32_t temp6_1 = *(eax_23 + 4)
            *(eax_23 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                var_28 = &data_801800
        
        edi = arg4
        var_8_3.b = 0
        result = result_1
        continue
    
    sub_63b870(eax_10, &data_801800, ecx_29, "C:\x\ax2017\Engine\xString.cpp", var_4c_4, var_48_7)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63b870(arg5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, "XString::XString")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
