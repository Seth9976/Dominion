// 函数: sub_4bfd90
// 地址: 0x4bfd90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_762dd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = *(arg1 + 4)
char* const result_1
sub_63d720(&result_1, "btnBack")
char* result = result_1
char* const result_4 = &data_801800
char* const result_2 = &data_801800

if (result != 0)
    result_2 = result

int32_t ecx_2

while (true)
    char edx_1 = *result_2
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_2 = 0
            break
        
        edx_1 = result_2[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            result_2 = &result_2[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_2, result_2, c_1) | 1
    break

void* ebx

if (ecx_2 == 0 || *(arg1 + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b == 0)
    char* esi_1 = *(arg1 + 4)
    sub_63d720(&result_1, "btnAvatar")
    char* const result_5 = result_1
    char* const result_8 = &data_801800
    
    if (result_5 != 0)
        result_8 = result_5
    
    int32_t esi_3
    
    while (true)
        char edx_4 = *result_8
        char temp3_1 = *esi_1
        bool c_2 = edx_4 u< temp3_1
        
        if (edx_4 == temp3_1)
            if (edx_4 == 0)
                esi_3 = 0
                break
            
            edx_4 = result_8[1]
            char temp4_1 = esi_1[1]
            c_2 = edx_4 u< temp4_1
            
            if (edx_4 == temp4_1)
                result_8 = &result_8[2]
                esi_1 = &esi_1[2]
                
                if (edx_4 != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_3 = sub_63d4e0(&result_1)
        int32_t temp5_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_3 != 0)
        char* esi_6 = *(arg1 + 4)
        sub_63d720(&result_1, "btnRight")
        result = result_1
        char* result_3 = &data_801800
        
        if (result != 0)
            result_3 = result
        
        int32_t esi_8
        
        while (true)
            char edx_10 = *result_3
            char temp6_1 = *esi_6
            bool c_3 = edx_10 u< temp6_1
            
            if (edx_10 == temp6_1)
                if (edx_10 == 0)
                    esi_8 = 0
                    break
                
                edx_10 = result_3[1]
                char temp7_1 = esi_6[1]
                c_3 = edx_10 u< temp7_1
                
                if (edx_10 == temp7_1)
                    result_3 = &result_3[2]
                    esi_6 = &esi_6[2]
                    
                    if (edx_10 != 0)
                        continue
                    
                    esi_8 = 0
                    break
            
            esi_8 = sbb.d(esi_6, esi_6, c_3) | 1
            break
        
        int32_t var_8_5 = 2
        
        if (data_cf65bc != 0 && result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp8_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp8_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
        
        int32_t var_8_6 = 0xffffffff
        
        if (esi_8 != 0)
            char* esi_9 = *(arg1 + 4)
            sub_63d720(&result_1, "btnLeft")
            result = result_1
            
            if (result != 0)
                result_4 = result
            
            int32_t esi_11
            
            while (true)
                char ecx_22 = *result_4
                char temp9_1 = *esi_9
                bool c_4 = ecx_22 u< temp9_1
                
                if (ecx_22 == temp9_1)
                    if (ecx_22 == 0)
                        esi_11 = 0
                        break
                    
                    ecx_22 = result_4[1]
                    char temp10_1 = esi_9[1]
                    c_4 = ecx_22 u< temp10_1
                    
                    if (ecx_22 == temp10_1)
                        result_4 = &result_4[2]
                        esi_9 = &esi_9[2]
                        
                        if (ecx_22 != 0)
                            continue
                        
                        esi_11 = 0
                        break
                
                esi_11 = sbb.d(esi_9, esi_9, c_4) | 1
                break
            
            int32_t var_8_7 = 3
            
            if (data_cf65bc != 0 && result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp11_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(result, *(result + 0xc) + 0x10)
            
            if (esi_11 == 0)
                data_cc8dbc -= 1
        else
            data_cc8dbc += 1
    else
        char* result_6 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        int32_t ecx_10 = data_cc8dbc
        result_1 = result_6
        void* esi_4 = ecx_10 * 3
        int32_t ecx_12 = *(arg1 + 8) + (esi_4 << 3)
        char const* const var_44_1
        int32_t var_40
        char const* const var_3c_1
        char* ecx_13
        
        if (ecx_12 u>= 0x570)
            var_3c_1 = "GameSpecific_ButtonIndexToAvatar"
            var_40 = 0xeab1
            var_44_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx_13 = "idx < sizeof(AVATAR_DEFS)"
        label_4c0138:
            sub_63b870(result_6, &data_801800, ecx_13, var_44_1, var_40, var_3c_1)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (ecx_12 s< 0)
            var_3c_1 = "GameSpecific_ButtonIndexToAvatar"
            var_40 = 0xeab2
            var_44_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx_13 = "idx >= 0"
            goto label_4c0138
        
        char* const result_7 = result_1
        *(result_7 + 8) = *(ecx_12 * 0x18 + &data_bf01d0)
        int32_t eax_6
        uint32_t edx_7
        eax_6, edx_7 = _Xtime_get_ticks(eax_2)
        uint32_t eax_7
        int32_t edx_8
        eax_7, edx_8 = __alldiv(eax_6, edx_7, 0x989680, 0)
        *(result_7 + 0x4268) = eax_7
        uint32_t var_24 = eax_7
        int32_t var_1c_1 = *(result_7 + 8)
        result_6 = data_cc8d5c
        *(result_7 + 0x426c) = edx_8
        int32_t var_20_1 = edx_8
        
        if (result_6 == 0)
            var_3c_1 = "GetClient"
            var_40 = 0x7b
            var_44_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_13 = "gClient"
            goto label_4c0138
        
        int32_t eax_9 = *(result_6 + 0x14)
        void* ecx_14 = data_147abf4
        
        if (eax_9 != 0)
            uint32_t edx_9 = zx.d(eax_9.w)
            
            if (edx_9 u< *(ecx_14 + 4))
                esi_4 = edx_9 * 0x64 + *ecx_14
                
                if (*(esi_4 + 0x60) == eax_9 && esi_4 != 0)
                    int32_t var_3c_2 = 0xf42c1
                    sub_689e00(eax_9, 0x10, esi_4 + 0x50)
                    sub_689be0(&var_24, 0x10, esi_4 + 0x50, &var_24)
        
        data_cc8dc8
        data_8db660 = 5
        sub_4d8ad0(esi_4)
else
    data_8db660 = 5

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
