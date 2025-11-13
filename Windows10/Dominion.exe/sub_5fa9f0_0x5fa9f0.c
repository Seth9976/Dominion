// 函数: sub_5fa9f0
// 地址: 0x5fa9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a630
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x3334)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t entry_ebx
int32_t var_14_1 = entry_ebx
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* const result_2
sub_63d720(&result_2, "btnBack")
void* esi = arg1
char* const result_3 = &data_801800
int32_t* result = result_2

if (result != 0)
    result_3 = result

char* edx = *(esi + 4)
int32_t ecx_2

while (true)
    entry_ebx.b = *edx
    char temp0_1 = *result_3
    bool c_1 = entry_ebx.b u< temp0_1
    
    if (entry_ebx.b == temp0_1)
        if (entry_ebx.b == 0)
            ecx_2 = 0
            break
        
        entry_ebx.b = edx[1]
        char temp1_1 = result_3[1]
        c_1 = entry_ebx.b u< temp1_1
        
        if (entry_ebx.b == temp1_1)
            edx = &edx[2]
            result_3 = &result_3[2]
            
            if (entry_ebx.b != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_3, result_3, c_1) | 1
    break

if (ecx_2 == 0 || *(esi + 0x18) == 2)
    entry_ebx.b = 1
else
    entry_ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_2)
    int32_t temp2_1 = result[1]
    result[1] -= 1
    
    if (temp2_1 == 1)
        result, edx = sub_64c080(result, result[3] + 0x10)
        result_2 = &data_801800

int32_t var_8_2 = 0xffffffff

if (entry_ebx.b != 0)
    edx.b = 0
    result = sub_4d46e0(7, edx.b)

result_2 = nullptr
char const (** edi)[0x6] = &data_be46f8

while (true)
    char const (* edx_3)[0x6] = *edi
    
    if (edx_3 == 0)
        break
    
    char* result_1
    sub_63d720(&result_1, edx_3)
    result = result_1
    int32_t* result_4 = &data_801800
    char* edx_4 = *(esi + 4)
    
    if (result != 0)
        result_4 = result
    
    int32_t esi_1
    
    while (true)
        entry_ebx.b = *edx_4
        char temp3_1 = *result_4
        bool c_2 = entry_ebx.b u< temp3_1
        
        if (entry_ebx.b == temp3_1)
            if (entry_ebx.b == 0)
                esi_1 = 0
                break
            
            entry_ebx.b = edx_4[1]
            char temp4_1 = *(result_4 + 1)
            c_2 = entry_ebx.b u< temp4_1
            
            if (entry_ebx.b == temp4_1)
                edx_4 = &edx_4[2]
                result_4 += 2
                
                if (entry_ebx.b != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(esi, esi, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp5_1 = result[1]
        result[1] -= 1
        
        if (temp5_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_1 == 0)
        void* eax_3 = sub_4bbdb0()
        void var_3344
        void var_19a4
        memcpy(&var_19a4, sub_4e49d0(eax_3, &var_3344), 0x1990)
        int32_t eax_6 = *(arg1 + 8)
        
        if (eax_6 u> 3)
            sub_63b870(eax_6, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
                0x8945, "DomCreateUpdateRulesCustomClick")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        switch (eax_6)
            case 0
                char* const result_5 = result_2
            case 1
                char* const result_6 = result_2
            case 2
                char* const result_7 = result_2
            case 3
                char* const result_8 = result_2
        
        result = sub_4e4cb0(eax_3)
    
    result_2 = &result_2[1]
    edi = &edi[1]
    
    if (edi == &data_be4708)
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    esi = arg1

sub_63b870(result, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, "XString::XString")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
