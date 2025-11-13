// 函数: sub_5fb080
// 地址: 0x5fb080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_nan@DV?$c_string_character_source@D@__crt_strtox@@PBD@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$c_string_character_source@D@0@PBD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_20 = ebx
int32_t var_24 = arg1
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
sub_63d720(&result_1, "btnBack")
char* const result_6 = &data_801800
char* result_4 = result_1

if (result_4 != 0)
    result_6 = result_4

char* edx = *(arg2 + 4)
int32_t ecx_2

while (true)
    ebx.b = *edx
    char temp0_1 = *result_6
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_2 = 0
            break
        
        ebx.b = edx[1]
        char temp1_1 = result_6[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx = &edx[2]
            result_6 = &result_6[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_6, result_6, c_1) | 1
    break

if (ecx_2 == 0 || *(arg2 + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    int32_t* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = eax_3[1]
    eax_3[1] -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, eax_3[3] + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    edx.b = 0
    sub_4d46e0(7, edx.b)

sub_63d720(&result_1, "btnStoreShelters")
char* result_5 = result_1
char* const result_7 = &data_801800
char* edx_3 = *(arg2 + 4)

if (result_5 != 0)
    result_7 = result_5

int32_t esi

while (true)
    ebx.b = *edx_3
    char temp3_1 = *result_7
    bool c_2 = ebx.b u< temp3_1
    
    if (ebx.b == temp3_1)
        if (ebx.b == 0)
            esi = 0
            break
        
        ebx.b = edx_3[1]
        char temp4_1 = result_7[1]
        c_2 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            edx_3 = &edx_3[2]
            result_7 = &result_7[2]
            
            if (ebx.b != 0)
                continue
            
            esi = 0
            break
    
    esi = sbb.d(arg1, arg1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_4 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi == 0)
    void* eax_5 = data_cc8d94
    
    if (eax_5 == 0)
        eax_5 = sub_4acc60()
        data_cc8d94 = eax_5
    
    data_cc8d98 = 0
    data_cc8d9c = 8
    data_cc8d90 = 0
    data_cc8da0 = 0x10
    data_cc8da4 = 0x7ef
    sub_4add50(eax_5)
    data_8db660 = 0x16
    sub_4d46e0(7, 0)
    int32_t ecx_9 = data_c23bec
    
    if (ecx_9 != 0)
        uint32_t eax_6 = zx.d(ecx_9.w)
        
        if (eax_6 u< data_c23bac)
            void* eax_8 = eax_6 * 0x18d0 + data_c23ba8
            
            if (*(eax_8 + 0x18c8) == ecx_9 && eax_8 != 0)
                *(eax_8 + 0x13c1) = 0
        
        data_c23bec = 0

sub_63d720(&result_1, "btnStorePlatinum")
char* result = result_1
char* const result_2 = &data_801800
char* edx_7 = *(arg2 + 4)

if (result != 0)
    result_2 = result

int32_t esi_2

while (true)
    ebx.b = *edx_7
    char temp6_1 = *result_2
    bool c_3 = ebx.b u< temp6_1
    
    if (ebx.b == temp6_1)
        if (ebx.b == 0)
            esi_2 = 0
            break
        
        ebx.b = edx_7[1]
        char temp7_1 = result_2[1]
        c_3 = ebx.b u< temp7_1
        
        if (ebx.b == temp7_1)
            edx_7 = &edx_7[2]
            result_2 = &result_2[2]
            
            if (ebx.b != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp8_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_2 == 0)
    void* eax_9 = data_cc8d94
    
    if (eax_9 == 0)
        eax_9 = sub_4acc60()
        data_cc8d94 = eax_9
    
    data_cc8d98 = 0
    data_cc8d9c = 0x4001
    data_cc8d90 = 0
    data_cc8da0 = 0x10
    data_cc8da4 = 0x7ef
    sub_4add50(eax_9)
    data_8db660 = 0x16
    result = sub_4d46e0(7, 0)
    int32_t ecx_14 = data_c23bec
    
    if (ecx_14 != 0)
        result = zx.d(ecx_14.w)
        
        if (result u< data_c23bac)
            result = result * 0x18d0 + data_c23ba8
            
            if (*(result + 0x18c8) == ecx_14 && result != 0)
                result[0x13c1] = 0
        
        data_c23bec = 0

int32_t var_18 = 0
char** edi_1 = &data_be49c0

while (true)
    char* edx_11 = *edi_1
    
    if (edx_11 == 0)
        break
    
    sub_63d720(&result_1, edx_11)
    char* result_3 = &data_801800
    char* edx_12 = *(arg2 + 4)
    result = result_1
    
    if (result != 0)
        result_3 = result
    
    while (true)
        ebx.b = *edx_12
        char temp9_1 = *result_3
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                esi_2 = 0
                break
            
            ebx.b = edx_12[1]
            char temp10_1 = result_3[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                edx_12 = &edx_12[2]
                result_3 = &result_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi_2, esi_2, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp11_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp11_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_2 == 0)
        *(arg2 + 8)
        result = sub_5fade0()
    
    var_18 += 1
    edi_1 = &edi_1[1]
    
    if (edi_1 == &data_be49cc)
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

sub_63b870(result, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, "XString::XString")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
