// 函数: sub_733c00
// 地址: 0x733c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772c21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_160 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_164 = 0x128
char* var_13c
int32_t eax_3 = memset(&var_13c, 0, var_164)
int32_t var_8_1 = 0

if (arg1 == 0)
    sub_63b870(eax_3, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&var_164, arg1)
void var_150
sub_69e000(&var_150, 3)
var_8_1.b = 1
int32_t* ebx

if (sub_7070e0(&var_13c, &var_150) == 0)
labelid_17:
    ebx.b = 0
else
    int32_t var_138
    int32_t eax_5 = var_138
    
    if (eax_5 != 3)
        goto label_733cb4
    
    if (sub_7076e0(&var_13c) == 0)
    labelid_17:
        ebx.b = 0
    else
        eax_5 = var_138
    label_733cb4:
        
        if (eax_5 != 1)
        labelid_17:
            ebx.b = 0
        else
            char* var_12c
            var_164 = var_12c
            char* _Str2
            
            if (_strnicmp("Root", _Str2, var_164) != 0)
            labelid_17:
                ebx.b = 0
            else if (sub_7076e0(&var_13c) == 0)
            labelid_17:
                ebx.b = 0
            else
                int32_t eax_9 = var_138
                
                if (eax_9 != 3)
                    goto label_733d18
                
                if (sub_7076e0(&var_13c) == 0)
                labelid_17:
                    ebx.b = 0
                else
                    eax_9 = var_138
                label_733d18:
                    
                    if (eax_9 != 1)
                    labelid_17:
                        ebx.b = 0
                    else
                        var_164 = var_12c
                        
                        if (_strnicmp("VERSION", _Str2, var_164) != 0)
                        labelid_17:
                            ebx.b = 0
                        else
                            char eax_12
                            va_list ecx_7
                            int32_t edx_2
                            eax_12, ecx_7, edx_2 = sub_7076e0(&var_13c)
                            
                            if (eax_12 == 0 || var_138 != 3)
                            labelid_17:
                                ebx.b = 0
                            else
                                int32_t var_148
                                var_164 = &var_148
                                
                                if (sub_64b6d0(&var_148, edx_2, ecx_7, _Str2, "%d") != 1)
                                labelid_17:
                                    ebx.b = 0
                                else if (sub_7076e0(&var_13c) == 0 || var_148 != 2)
                                labelid_17:
                                    ebx.b = 0
                                else
                                    int32_t eax_16 = var_138
                                    
                                    if (eax_16 != 3)
                                        goto label_733dc6
                                    
                                    if (sub_7076e0(&var_13c) == 0)
                                    labelid_17:
                                        ebx.b = 0
                                    else
                                        eax_16 = var_138
                                    label_733dc6:
                                        
                                        if (eax_16 != 4)
                                        labelid_17:
                                            ebx.b = 0
                                        else
                                            var_164 = var_12c
                                            
                                            if (_strnicmp("VERSION", _Str2, var_164) != 0)
                                            labelid_17:
                                                ebx.b = 0
                                            else if (sub_7076e0(&var_13c) == 0)
                                            labelid_17:
                                                ebx.b = 0
                                            else
                                                int32_t eax_20 = var_138
                                                
                                                if (eax_20 != 3)
                                                    goto label_733e24
                                                
                                                if (sub_7076e0(&var_13c) == 0)
                                                labelid_17:
                                                    ebx.b = 0
                                                else
                                                    eax_20 = var_138
                                                label_733e24:
                                                    
                                                    if (eax_20 != 1)
                                                    label_7342a3:
                                                        ebx.b = 0
                                                    else
                                                        var_164 = var_12c
                                                        
                                                        if (_strnicmp("BONELIST", _Str2, var_164)
                                                            != 0)
                                                        label_7342a3_1:
                                                            ebx.b = 0
                                                        else if (sub_7076e0(&var_13c) == 0)
                                                        label_7342a3_2:
                                                            ebx.b = 0
                                                        else
                                                            arg2[1] = 0
                                                            int32_t* eax_24 = sub_687730(0x1800)
                                                            var_164 = 0x1800
                                                            memset(eax_24, 0, var_164)
                                                            arg2[2] = eax_24
                                                            int32_t eax_25 = sub_687730(8)
                                                            eax_24[2] = eax_25
                                                            __builtin_strcpy(eax_25, "Root[0]")
                                                            *eax_24 = sub_69c4d0("Root[0]", 0)
                                                            arg2[1] += 1
                                                            
                                                            while (true)
                                                                int32_t esi_2 = var_138
                                                                
                                                                if (esi_2 != 3)
                                                                    goto label_733ed3
                                                                
                                                                int32_t* var_140
                                                                
                                                                if (sub_7076e0(&var_13c) == 0)
                                                                label_733f05:
                                                                    esi_2 = var_138
                                                                label_733f0b:
                                                                    
                                                                    if (esi_2 == 3)
                                                                        if (sub_7076e0(&var_13c) == 0)
                                                                            goto label_7342a3_2
                                                                        
                                                                        esi_2 = var_138
                                                                else
                                                                    esi_2 = var_138
                                                                label_733ed3:
                                                                    
                                                                    if (esi_2 != 4)
                                                                        goto label_733f0b
                                                                    
                                                                    var_164 = var_12c
                                                                    
                                                                    if (
                                                                            _strnicmp("BONELIST", _Str2, var_164)
                                                                            == 0)
                                                                        if (sub_7076e0(&var_13c) == 0)
                                                                            goto label_733f05
                                                                        
                                                                        int32_t eax_47 = var_138
                                                                        
                                                                        if (eax_47 == 3)
                                                                            if (sub_7076e0(&var_13c) == 0)
                                                                                goto label_7342a3_2
                                                                            
                                                                            eax_47 = var_138
                                                                        
                                                                        if (eax_47 != 1)
                                                                            goto label_7342a3_2
                                                                        
                                                                        var_164 = var_12c
                                                                        
                                                                        if (_strnicmp("DATA", _Str2, var_164)
                                                                                != 0)
                                                                            goto label_7342a3_2
                                                                        
                                                                        if (sub_7076e0(&var_13c) == 0)
                                                                            goto label_7342a3_2
                                                                        
                                                                        int32_t* esi_4 = &data_801800
                                                                        var_140 = &data_801800
                                                                        var_8_1.b = 0x1d
                                                                        
                                                                        if (var_138 != 3)
                                                                            ebx.b = 0
                                                                        else
                                                                            if (var_12c s> 0)
                                                                                var_164 = var_12c
                                                                                sub_63da70(&var_140, _Str2, var_164)
                                                                                esi_4 = var_140
                                                                            
                                                                            if (sub_7076e0(&var_13c) == 0)
                                                                                ebx.b = 0
                                                                            else
                                                                                int32_t* ecx_35 = &data_801800
                                                                                
                                                                                if (esi_4 != 0)
                                                                                    ecx_35 = esi_4
                                                                                
                                                                                sub_733500(ecx_35, arg2)
                                                                                int32_t eax_53 = var_138
                                                                                
                                                                                if (eax_53 != 3)
                                                                                    goto label_7341b7
                                                                                
                                                                                if (sub_7076e0(&var_13c) == 0)
                                                                                    ebx.b = 0
                                                                                else
                                                                                    eax_53 = var_138
                                                                                label_7341b7:
                                                                                    
                                                                                    if (eax_53 != 4)
                                                                                        ebx.b = 0
                                                                                    else
                                                                                        var_164 = var_12c
                                                                                        
                                                                                        if (_strnicmp("DATA", _Str2, var_164)
                                                                                                != 0)
                                                                                            ebx.b = 0
                                                                                        else if (sub_7076e0(&var_13c) == 0)
                                                                                            ebx.b = 0
                                                                                        else
                                                                                            int32_t eax_57 = var_138
                                                                                            
                                                                                            if (eax_57 != 3)
                                                                                                goto label_734205
                                                                                            
                                                                                            if (sub_7076e0(&var_13c) == 0)
                                                                                                ebx.b = 0
                                                                                            else
                                                                                                eax_57 = var_138
                                                                                            label_734205:
                                                                                                
                                                                                                if (eax_57 != 4)
                                                                                                    ebx.b = 0
                                                                                                else
                                                                                                    var_164 = var_12c
                                                                                                    
                                                                                                    if (_strnicmp("Root", _Str2, var_164)
                                                                                                            != 0)
                                                                                                        ebx.b = 0
                                                                                                    else if (sub_7076e0(&var_13c) == 0)
                                                                                                        ebx.b = 0
                                                                                                    else
                                                                                                        ebx.b = 1
                                                                        
                                                                        var_8_1.b = 0x24
                                                                        
                                                                        if (data_cf65bc != 0 && esi_4 != 0
                                                                                && *esi_4 != 0)
                                                                            char* eax_61 = sub_63d4e0(&var_140)
                                                                            int32_t temp2_1 = *(eax_61 + 4)
                                                                            *(eax_61 + 4) -= 1
                                                                            
                                                                            if (temp2_1 == 1)
                                                                                sub_64c080(eax_61, 
                                                                                    *(eax_61 + 0xc) + 0x10)
                                                                        
                                                                        break
                                                                
                                                                if (esi_2 != 1)
                                                                    goto label_7342a3_2
                                                                
                                                                var_164 = var_12c
                                                                
                                                                if (_strnicmp("BONE", _Str2, var_164)
                                                                        != 0)
                                                                    goto label_7342a3_2
                                                                
                                                                if (sub_7076e0(&var_13c) == 0)
                                                                    goto label_7342a3_2
                                                                
                                                                char* const esi_3 = &data_801800
                                                                char* const var_144 = &data_801800
                                                                var_8_1.b = 0x12
                                                                
                                                                if (var_138 == 3)
                                                                    if (var_12c s> 0)
                                                                        var_164 = var_12c
                                                                        sub_63da70(&var_144, _Str2, var_164)
                                                                        esi_3 = var_144
                                                                    
                                                                    if (sub_7076e0(&var_13c) != 0)
                                                                        int32_t eax_35 = arg2[1]
                                                                        
                                                                        if (eax_35 s< 0x100)
                                                                            var_140 = arg2[2] + eax_35 * 0x18
                                                                            int32_t ecx_21
                                                                            
                                                                            if (esi_3 == 0 || *esi_3 == 0)
                                                                                ecx_21 = 0
                                                                            else
                                                                                ecx_21 = *(sub_63d4e0(&var_144) + 8)
                                                                            
                                                                            int32_t eax_39 = sub_687730(ecx_21 + 1)
                                                                            var_140[2] = eax_39
                                                                            char* const ecx_24 = &data_801800
                                                                            
                                                                            if (esi_3 != 0)
                                                                                ecx_24 = esi_3
                                                                            
                                                                            void* edx_4 = eax_39 - ecx_24
                                                                            
                                                                            do
                                                                                eax_39.b = *ecx_24
                                                                                ecx_24 = &ecx_24[1]
                                                                                *(edx_4 + ecx_24 - 1) = eax_39.b
                                                                            while (eax_39.b != 0)
                                                                            
                                                                            *var_140 = sub_69c4d0(var_140[2], 0)
                                                                            int32_t eax_42 = var_138
                                                                            
                                                                            if (eax_42 != 3)
                                                                                goto label_734059
                                                                            
                                                                            if (sub_7076e0(&var_13c) != 0)
                                                                                eax_42 = var_138
                                                                            label_734059:
                                                                                
                                                                                if (eax_42 == 4)
                                                                                    var_164 = var_12c
                                                                                    
                                                                                    if (
                                                                                            _strnicmp("BONE", _Str2, var_164) == 0
                                                                                            && sub_7076e0(&var_13c) != 0)
                                                                                        arg2[1] += 1
                                                                                        var_8_1.b = 0x1a
                                                                                        
                                                                                        if (data_cf65bc != 0 && esi_3 != 0
                                                                                                && *esi_3 != 0)
                                                                                            char* eax_46 = sub_63d4e0(&var_144)
                                                                                            int32_t temp3_1 = *(eax_46 + 4)
                                                                                            *(eax_46 + 4) -= 1
                                                                                            
                                                                                            if (temp3_1 == 1)
                                                                                                sub_64c080(eax_46, 
                                                                                                    *(eax_46 + 0xc) + 0x10)
                                                                                        
                                                                                        var_8_1.b = 1
                                                                                        continue
                                                                
                                                                var_8_1.b = 0x17
                                                                
                                                                if (data_cf65bc != 0 && esi_3 != 0
                                                                        && *esi_3 != 0)
                                                                    char* eax_62 = sub_63d4e0(&var_144)
                                                                    int32_t temp1_1 = *(eax_62 + 4)
                                                                    *(eax_62 + 4) -= 1
                                                                    
                                                                    if (temp1_1 == 1)
                                                                        sub_64c080(eax_62, 
                                                                            *(eax_62 + 0xc) + 0x10)
                                                                
                                                                goto label_7342a3_2

var_8_1.b = 0x25

if (data_cf65bc != 0)
    char* const var_14c
    char* eax_63 = var_14c
    
    if (eax_63 != 0 && *eax_63 != 0)
        char* eax_64 = sub_63d4e0(&var_14c)
        int32_t temp0_1 = *(eax_64 + 4)
        *(eax_64 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_64, *(eax_64 + 0xc) + 0x10)
            var_14c = &data_801800

int32_t var_8_2 = 0x26
char* eax_65 = var_13c

if (eax_65 != 0)
    var_164 = eax_65
    _aligned_free(var_164)

void var_20
sub_7078c0(&var_20)
var_13c = nullptr
var_8_2.b = 0x27
sub_7078c0(&var_20)
uint32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
