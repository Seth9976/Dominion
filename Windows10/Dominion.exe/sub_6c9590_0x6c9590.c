// 函数: sub_6c9590
// 地址: 0x6c9590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7709e3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_144 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_12c = 0
void* const result_34

if (data_8c4157 != 0)
    result_34 = &data_87a37c
    
    if (GetFileAttributesA(result_34) == 0xffffffff)
        result_34 = "../res"
        
        if (GetFileAttributesA(result_34) == 0xffffffff)
            result_34 = "../../res"
            
            if (GetFileAttributesA(result_34) == 0xffffffff)
                result_34 = "../../../res"
                
                if (GetFileAttributesA(result_34) == 0xffffffff)
                    result_34 = "../../../../res"
                    
                    if (GetFileAttributesA(result_34) == 0xffffffff)
                        result_34 = "../../../../../res"
                        
                        if (GetFileAttributesA(result_34) == 0xffffffff)
                            result_34 = "../../../../../../res"
                            
                            if (GetFileAttributesA(result_34) == 0xffffffff)
                                result_34 = 0x104
                                char _DstBuf[0x108]
                                char* var_150_1 = _getcwd(&_DstBuf, result_34)
                                sub_63b5f0("Can't find res directory %s\n")
                            else
                                result_34 = "../../../../../.."
                                _chdir(result_34)
                        else
                            result_34 = "../../../../.."
                            _chdir(result_34)
                    else
                        result_34 = "../../../.."
                        _chdir(result_34)
                else
                    result_34 = "../../.."
                    _chdir(result_34)
            else
                result_34 = "../.."
                _chdir(result_34)
        else
            result_34 = &data_87e664
            _chdir(result_34)

result_34 = 0x104
uint32_t result = _getcwd(&data_147cf90, result_34)

if (result == 0)
    result_34 = "AppSetWorkingDirectory"
    sub_63b870(result, &data_801800, "result", "C:\x\ax2017\Engine\AssetSource.cpp", 0x218, 
        result_34)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (data_8c4157 == 0)
    int32_t ecx_121 = 0
    
    do
        result.b = (&data_147cf90)[ecx_121]
        ecx_121 += 1
        *(ecx_121 + &data_147d094:3) = result.b
    while (result.b != 0)
else
    char* result_46
    sub_63d720(&result_46, &data_147cf90)
    int32_t var_8_1 = 0
    char* result_45 = result_46
    char* result_48 = result_45
    char* result_56 = result_48
    
    if (result_45 != 0 && *result_45 != 0)
        char* eax_11 = sub_63d4e0(&result_56)
        *(eax_11 + 4) += 1
    
    var_8_1.b = 1
    char* result_4
    sub_63d720(&result_4, "/sys")
    var_8_1.b = 3
    char* result_47 = result_45
    
    if (result_45 != 0 && *result_45 != 0)
        char* eax_12 = sub_63d4e0(&result_47)
        *(eax_12 + 4) += 1
    
    char* result_5 = result_4
    int32_t var_12c_1 = 1
    char* const result_27 = &data_801800
    
    if (result_5 != 0)
        result_27 = result_5
    
    result_34 = result_27
    sub_63d960(&result_47, result_34)
    char* const result_35 = &data_801800
    char* result_49 = result_47
    
    if (result_49 != 0)
        result_35 = result_49
    
    result_34 = result_35
    void* result_42
    result, result_42 = GetFileAttributesA(result_34)
    uint32_t result_1 = result
    int32_t var_12c_2 = 0
    var_8_1.b = 4
    
    if (data_cf65bc != 0 && result_49 != 0 && *result_49 != 0)
        result = sub_63d4e0(&result_47)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        result_42 = *(result + 4)
        
        if (temp0_1 == 1)
            result, result_42 = sub_64c080(result, *(result + 0xc) + 0x10)
    
    var_8_1.b = 5
    
    if (data_cf65bc != 0)
        result = result_4
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_4)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            result_42 = *(result + 4)
            
            if (temp1_1 == 1)
                result, result_42 = sub_64c080(result, *(result + 0xc) + 0x10)
    
    var_8_1.b = 1
    
    if (result_1 == 0xffffffff)
        result_34 = result_42
        result_34 = result_45
        
        if (result_45 != 0 && *result_45 != 0)
            char* eax_13 = sub_63d4e0(&result_34)
            *(eax_13 + 4) += 1
        
        result_34 = sub_6c5380(&result_4)
        var_8_1.b = 6
        sub_63d850(&result_46, result_34)
        var_8_1.b = 7
        
        if (data_cf65bc != 0)
            char* result_6 = result_4
            
            if (result_6 != 0 && *result_6 != 0)
                char* eax_15 = sub_63d4e0(&result_4)
                int32_t temp2_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
        
        var_8_1.b = 1
        sub_63d720(&result_4, "Engine")
        var_8_1.b = 9
        result_45 = result_46
        result_47 = result_45
        
        if (result_45 != 0 && *result_45 != 0)
            char* eax_16 = sub_63d4e0(&result_47)
            *(eax_16 + 4) += 1
        
        char* result_15 = result_4
        int32_t var_12c_3 = 2
        char* const result_21 = &data_801800
        
        if (result_15 != 0)
            result_21 = result_15
        
        result_34 = result_21
        sub_63d960(&result_47, result_34)
        result_34 = &result_47
        sub_63d850(&result_56, result_34)
        int32_t var_12c_4 = 0
        var_8_1.b = 0xa
        
        if (data_cf65bc != 0)
            char* result_57 = result_47
            
            if (result_57 != 0 && *result_57 != 0)
                char* eax_17 = sub_63d4e0(&result_47)
                int32_t temp5_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
        
        var_8_1.b = 0xb
        
        if (data_cf65bc != 0 && result_15 != 0 && *result_15 != 0)
            char* eax_18 = sub_63d4e0(&result_4)
            int32_t temp6_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        
        var_8_1.b = 1
        sub_63d720(&result_4, "/sys")
        var_8_1.b = 0xd
        result_48 = result_56
        result_47 = result_48
        
        if (result_48 != 0 && *result_48 != 0)
            char* eax_19 = sub_63d4e0(&result_47)
            *(eax_19 + 4) += 1
        
        char* result_7 = result_4
        char* result_28 = &data_801800
        int32_t var_12c_5 = 4
        
        if (result_7 != 0)
            result_28 = result_7
        
        result_34 = result_28
        sub_63d960(&result_47, result_34)
        char* const result_36 = &data_801800
        char* result_50 = result_47
        
        if (result_50 != 0)
            result_36 = result_50
        
        result_34 = result_36
        uint32_t var_128_1 = GetFileAttributesA(result_34)
        int32_t var_12c_6 = 0
        var_8_1.b = 0xe
        
        if (data_cf65bc != 0 && result_50 != 0 && *result_50 != 0)
            result = sub_63d4e0(&result_47)
            int32_t temp7_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp7_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_1.b = 0xf
        
        if (data_cf65bc != 0)
            result = result_4
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_4)
                int32_t temp8_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_1.b = 1
        
        if (var_128_1 == 0xffffffff)
            sub_63d720(&result_4, "trunk/Engine")
            var_8_1.b = 0x11
            result_47 = result_45
            
            if (result_45 != 0 && *result_45 != 0)
                char* eax_20 = sub_63d4e0(&result_47)
                *(eax_20 + 4) += 1
            
            char* result_16 = result_4
            int32_t var_12c_7 = 0x10
            char* const result_22 = &data_801800
            
            if (result_16 != 0)
                result_22 = result_16
            
            result_34 = result_22
            sub_63d960(&result_47, result_34)
            result_34 = &result_47
            sub_63d850(&result_56, result_34)
            int32_t var_12c_8 = 0
            var_8_1.b = 0x12
            
            if (data_cf65bc != 0)
                char* result_58 = result_47
                
                if (result_58 != 0 && *result_58 != 0)
                    char* eax_21 = sub_63d4e0(&result_47)
                    int32_t temp9_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
            
            var_8_1.b = 0x13
            
            if (data_cf65bc != 0 && result_16 != 0 && *result_16 != 0)
                char* eax_22 = sub_63d4e0(&result_4)
                int32_t temp10_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
            
            var_8_1.b = 1
            sub_63d720(&result_4, "/sys")
            var_8_1.b = 0x15
            result_48 = result_56
            result_47 = result_48
            
            if (result_48 != 0 && *result_48 != 0)
                char* eax_23 = sub_63d4e0(&result_47)
                *(eax_23 + 4) += 1
            
            char* result_8 = result_4
            char* result_29 = &data_801800
            int32_t var_12c_9 = 8
            
            if (result_8 != 0)
                result_29 = result_8
            
            result_34 = result_29
            sub_63d960(&result_47, result_34)
            char* const result_37 = &data_801800
            char* result_51 = result_47
            
            if (result_51 != 0)
                result_37 = result_51
            
            result_34 = result_37
            void* result_43
            result, result_43 = GetFileAttributesA(result_34)
            uint32_t result_2 = result
            int32_t var_12c_10 = 0
            var_8_1.b = 0x16
            
            if (data_cf65bc != 0 && result_51 != 0 && *result_51 != 0)
                result = sub_63d4e0(&result_47)
                int32_t temp11_1 = *(result + 4)
                *(result + 4) -= 1
                result_43 = *(result + 4)
                
                if (temp11_1 == 1)
                    result, result_43 = sub_64c080(result, *(result + 0xc) + 0x10)
            
            var_8_1.b = 0x17
            
            if (data_cf65bc != 0)
                result = result_4
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_4)
                    int32_t temp12_1 = *(result + 4)
                    *(result + 4) -= 1
                    result_43 = *(result + 4)
                    
                    if (temp12_1 == 1)
                        result, result_43 = sub_64c080(result, *(result + 0xc) + 0x10)
            
            var_8_1.b = 1
            
            if (result_2 == 0xffffffff)
                result_34 = result_43
                result_34 = result_45
                
                if (result_45 != 0 && *result_45 != 0)
                    char* eax_24 = sub_63d4e0(&result_34)
                    *(eax_24 + 4) += 1
                
                result_34 = sub_6c5380(&result_4)
                var_8_1.b = 0x18
                sub_63d850(&result_46, result_34)
                var_8_1.b = 0x19
                
                if (data_cf65bc != 0)
                    char* result_9 = result_4
                    
                    if (result_9 != 0 && *result_9 != 0)
                        char* eax_26 = sub_63d4e0(&result_4)
                        int32_t temp13_1 = *(eax_26 + 4)
                        *(eax_26 + 4) -= 1
                        
                        if (temp13_1 == 1)
                            sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                
                var_8_1.b = 1
                sub_63d720(&result_4, "Engine")
                var_8_1.b = 0x1b
                result_45 = result_46
                result_47 = result_45
                
                if (result_45 != 0 && *result_45 != 0)
                    char* eax_27 = sub_63d4e0(&result_47)
                    *(eax_27 + 4) += 1
                
                char* result_17 = result_4
                int32_t var_12c_11 = 0x20
                char* const result_23 = &data_801800
                
                if (result_17 != 0)
                    result_23 = result_17
                
                result_34 = result_23
                sub_63d960(&result_47, result_34)
                result_34 = &result_47
                sub_63d850(&result_56, result_34)
                int32_t var_12c_12 = 0
                var_8_1.b = 0x1c
                
                if (data_cf65bc != 0)
                    char* result_59 = result_47
                    
                    if (result_59 != 0 && *result_59 != 0)
                        char* eax_28 = sub_63d4e0(&result_47)
                        int32_t temp14_1 = *(eax_28 + 4)
                        *(eax_28 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                
                var_8_1.b = 0x1d
                
                if (data_cf65bc != 0 && result_17 != 0 && *result_17 != 0)
                    char* eax_29 = sub_63d4e0(&result_4)
                    int32_t temp15_1 = *(eax_29 + 4)
                    *(eax_29 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                
                var_8_1.b = 1
                sub_63d720(&result_4, "/sys")
                var_8_1.b = 0x1f
                result_48 = result_56
                result_47 = result_48
                
                if (result_48 != 0 && *result_48 != 0)
                    char* eax_30 = sub_63d4e0(&result_47)
                    *(eax_30 + 4) += 1
                
                char* result_10 = result_4
                char* result_30 = &data_801800
                int32_t var_12c_13 = 0x40
                
                if (result_10 != 0)
                    result_30 = result_10
                
                result_34 = result_30
                sub_63d960(&result_47, result_34)
                char* const result_38 = &data_801800
                char* result_52 = result_47
                
                if (result_52 != 0)
                    result_38 = result_52
                
                result_34 = result_38
                uint32_t var_128_2 = GetFileAttributesA(result_34)
                int32_t var_12c_14 = 0
                var_8_1.b = 0x20
                
                if (data_cf65bc != 0 && result_52 != 0 && *result_52 != 0)
                    result = sub_63d4e0(&result_47)
                    int32_t temp16_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp16_1 == 1)
                        sub_64c080(result, *(result + 0xc) + 0x10)
                
                var_8_1.b = 0x21
                
                if (data_cf65bc != 0)
                    result = result_4
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_4)
                        int32_t temp17_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp17_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                
                var_8_1.b = 1
                
                if (var_128_2 == 0xffffffff)
                    sub_63d720(&result_4, "trunk/Engine")
                    var_8_1.b = 0x23
                    result_47 = result_45
                    
                    if (result_45 != 0 && *result_45 != 0)
                        char* eax_31 = sub_63d4e0(&result_47)
                        *(eax_31 + 4) += 1
                    
                    char* result_18 = result_4
                    int32_t var_12c_15 = 0x80
                    char* const result_24 = &data_801800
                    
                    if (result_18 != 0)
                        result_24 = result_18
                    
                    result_34 = result_24
                    sub_63d960(&result_47, result_34)
                    result_34 = &result_47
                    sub_63d850(&result_56, result_34)
                    int32_t var_12c_16 = 0
                    var_8_1.b = 0x24
                    
                    if (data_cf65bc != 0)
                        char* result_60 = result_47
                        
                        if (result_60 != 0 && *result_60 != 0)
                            char* eax_32 = sub_63d4e0(&result_47)
                            int32_t temp18_1 = *(eax_32 + 4)
                            *(eax_32 + 4) -= 1
                            
                            if (temp18_1 == 1)
                                sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                    
                    var_8_1.b = 0x25
                    
                    if (data_cf65bc != 0 && result_18 != 0 && *result_18 != 0)
                        char* eax_33 = sub_63d4e0(&result_4)
                        int32_t temp19_1 = *(eax_33 + 4)
                        *(eax_33 + 4) -= 1
                        
                        if (temp19_1 == 1)
                            sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                    
                    var_8_1.b = 1
                    sub_63d720(&result_4, "/sys")
                    var_8_1.b = 0x27
                    result_48 = result_56
                    result_47 = result_48
                    
                    if (result_48 != 0 && *result_48 != 0)
                        char* eax_34 = sub_63d4e0(&result_47)
                        *(eax_34 + 4) += 1
                    
                    char* result_11 = result_4
                    char* result_31 = &data_801800
                    int32_t var_12c_17 = 0x100
                    
                    if (result_11 != 0)
                        result_31 = result_11
                    
                    result_34 = result_31
                    sub_63d960(&result_47, result_34)
                    char* const result_39 = &data_801800
                    char* result_53 = result_47
                    
                    if (result_53 != 0)
                        result_39 = result_53
                    
                    result_34 = result_39
                    void* result_44
                    result, result_44 = GetFileAttributesA(result_34)
                    uint32_t result_3 = result
                    int32_t var_12c_18 = 0
                    var_8_1.b = 0x28
                    
                    if (data_cf65bc != 0 && result_53 != 0 && *result_53 != 0)
                        result = sub_63d4e0(&result_47)
                        int32_t temp20_1 = *(result + 4)
                        *(result + 4) -= 1
                        result_44 = *(result + 4)
                        
                        if (temp20_1 == 1)
                            result, result_44 = sub_64c080(result, *(result + 0xc) + 0x10)
                    
                    var_8_1.b = 0x29
                    
                    if (data_cf65bc != 0)
                        result = result_4
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_4)
                            int32_t temp21_1 = *(result + 4)
                            *(result + 4) -= 1
                            result_44 = *(result + 4)
                            
                            if (temp21_1 == 1)
                                result, result_44 = sub_64c080(result, *(result + 0xc) + 0x10)
                    
                    var_8_1.b = 1
                    
                    if (result_3 == 0xffffffff)
                        result_34 = result_44
                        result_34 = result_45
                        
                        if (result_45 != 0 && *result_45 != 0)
                            char* eax_35 = sub_63d4e0(&result_34)
                            *(eax_35 + 4) += 1
                        
                        result_34 = sub_6c5380(&result_4)
                        var_8_1.b = 0x2a
                        sub_63d850(&result_46, result_34)
                        var_8_1.b = 0x2b
                        
                        if (data_cf65bc != 0)
                            char* result_12 = result_4
                            
                            if (result_12 != 0 && *result_12 != 0)
                                char* eax_37 = sub_63d4e0(&result_4)
                                int32_t temp22_1 = *(eax_37 + 4)
                                *(eax_37 + 4) -= 1
                                
                                if (temp22_1 == 1)
                                    sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                        
                        var_8_1.b = 1
                        sub_63d720(&result_4, "Engine")
                        var_8_1.b = 0x2d
                        result_45 = result_46
                        result_47 = result_45
                        
                        if (result_45 != 0 && *result_45 != 0)
                            char* eax_38 = sub_63d4e0(&result_47)
                            *(eax_38 + 4) += 1
                        
                        char* result_19 = result_4
                        int32_t var_12c_19 = 0x200
                        char* result_25 = &data_801800
                        
                        if (result_19 != 0)
                            result_25 = result_19
                        
                        result_34 = result_25
                        sub_63d960(&result_47, result_34)
                        result_34 = &result_47
                        sub_63d850(&result_56, result_34)
                        int32_t var_12c_20 = 0
                        var_8_1.b = 0x2e
                        
                        if (data_cf65bc != 0)
                            char* result_61 = result_47
                            
                            if (result_61 != 0 && *result_61 != 0)
                                char* eax_39 = sub_63d4e0(&result_47)
                                int32_t temp23_1 = *(eax_39 + 4)
                                *(eax_39 + 4) -= 1
                                
                                if (temp23_1 == 1)
                                    sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x2f
                        
                        if (data_cf65bc != 0 && result_19 != 0 && *result_19 != 0)
                            char* eax_40 = sub_63d4e0(&result_4)
                            int32_t temp24_1 = *(eax_40 + 4)
                            *(eax_40 + 4) -= 1
                            
                            if (temp24_1 == 1)
                                sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                        
                        var_8_1.b = 1
                        sub_63d720(&result_4, "/sys")
                        var_8_1.b = 0x31
                        result_48 = result_56
                        result_47 = result_48
                        
                        if (result_48 != 0 && *result_48 != 0)
                            char* eax_41 = sub_63d4e0(&result_47)
                            *(eax_41 + 4) += 1
                        
                        char* result_13 = result_4
                        char* result_32 = &data_801800
                        int32_t var_12c_21 = 0x400
                        
                        if (result_13 != 0)
                            result_32 = result_13
                        
                        result_34 = result_32
                        sub_63d960(&result_47, result_34)
                        char* result_40 = &data_801800
                        char* result_54 = result_47
                        
                        if (result_54 != 0)
                            result_40 = result_54
                        
                        result_34 = result_40
                        uint32_t var_128_3 = GetFileAttributesA(result_34)
                        int32_t var_12c_22 = 0
                        var_8_1.b = 0x32
                        
                        if (data_cf65bc != 0 && result_54 != 0 && *result_54 != 0)
                            result = sub_63d4e0(&result_47)
                            int32_t temp25_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp25_1 == 1)
                                sub_64c080(result, *(result + 0xc) + 0x10)
                        
                        var_8_1.b = 0x33
                        
                        if (data_cf65bc != 0)
                            result = result_4
                            
                            if (result != 0 && *result != 0)
                                result = sub_63d4e0(&result_4)
                                int32_t temp26_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp26_1 == 1)
                                    sub_64c080(result, *(result + 0xc) + 0x10)
                        
                        var_8_1.b = 1
                        
                        if (var_128_3 == 0xffffffff)
                            sub_63d720(&result_4, "trunk/Engine")
                            var_8_1.b = 0x35
                            result_47 = result_45
                            
                            if (result_45 != 0 && *result_45 != 0)
                                char* eax_42 = sub_63d4e0(&result_47)
                                *(eax_42 + 4) += 1
                            
                            char* result_20 = result_4
                            int32_t var_12c_23 = 0x1000
                            char* result_26 = &data_801800
                            
                            if (result_20 != 0)
                                result_26 = result_20
                            
                            result_34 = result_26
                            sub_63d960(&result_47, result_34)
                            result_34 = &result_47
                            sub_63d850(&result_56, result_34)
                            int32_t var_12c_24 = 0
                            var_8_1.b = 0x36
                            
                            if (data_cf65bc != 0)
                                char* result_62 = result_47
                                
                                if (result_62 != 0 && *result_62 != 0)
                                    char* eax_43 = sub_63d4e0(&result_47)
                                    int32_t temp27_1 = *(eax_43 + 4)
                                    *(eax_43 + 4) -= 1
                                    
                                    if (temp27_1 == 1)
                                        sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                            
                            var_8_1.b = 0x37
                            
                            if (data_cf65bc != 0 && result_20 != 0 && *result_20 != 0)
                                char* eax_44 = sub_63d4e0(&result_4)
                                int32_t temp28_1 = *(eax_44 + 4)
                                *(eax_44 + 4) -= 1
                                
                                if (temp28_1 == 1)
                                    sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                            
                            var_8_1.b = 1
                            sub_63d720(&result_4, "/sys")
                            var_8_1.b = 0x39
                            result_48 = result_56
                            result_47 = result_48
                            
                            if (result_48 != 0 && *result_48 != 0)
                                char* eax_45 = sub_63d4e0(&result_47)
                                *(eax_45 + 4) += 1
                            
                            char* result_14 = result_4
                            char* result_33 = &data_801800
                            int32_t var_12c_25 = 0x800
                            
                            if (result_14 != 0)
                                result_33 = result_14
                            
                            result_34 = result_33
                            sub_63d960(&result_47, result_34)
                            char* result_41 = &data_801800
                            char* result_55 = result_47
                            
                            if (result_55 != 0)
                                result_41 = result_55
                            
                            result_34 = result_41
                            uint32_t var_128_4 = GetFileAttributesA(result_34)
                            var_8_1.b = 0x3a
                            
                            if (data_cf65bc != 0 && result_55 != 0 && *result_55 != 0)
                                result = sub_63d4e0(&result_47)
                                int32_t temp29_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp29_1 == 1)
                                    sub_64c080(result, *(result + 0xc) + 0x10)
                            
                            var_8_1.b = 0x3b
                            
                            if (data_cf65bc != 0)
                                result = result_4
                                
                                if (result != 0 && *result != 0)
                                    result = sub_63d4e0(&result_4)
                                    int32_t temp30_1 = *(result + 4)
                                    *(result + 4) -= 1
                                    
                                    if (temp30_1 == 1)
                                        sub_64c080(result, *(result + 0xc) + 0x10)
                            
                            var_8_1.b = 1
                            
                            if (var_128_4 == 0xffffffff)
                                if (result_45 == 0 || result_45 != &data_147cf90)
                                    char* edi_1 = &data_147cf90
                                    
                                    do
                                        result.b = *edi_1
                                        edi_1 = &edi_1[1]
                                    while (result.b != 0)
                                    
                                    if (edi_1 != 0x147cf91)
                                        result_34 = nullptr
                                        sub_63d5e0(result, edi_1 - 0x147cf91, &result_46, 
                                            result_34.b)
                                        result_45 = result_46
                                        result_34 = edi_1 - 0x147cf90
                                        memcpy(result_45, &data_147cf90, result_34)
                                    else
                                        if (data_cf65bc != edi_1 - 0x147cf91 && result_45 != 0
                                                && *result_45 != result.b)
                                            char* eax_46 = sub_63d4e0(&result_46)
                                            int32_t temp32_1 = *(eax_46 + 4)
                                            *(eax_46 + 4) -= 1
                                            
                                            if (temp32_1 == 1)
                                                sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
                                        
                                        result_45 = &data_801800
                                        result_46 = &data_801800
                                
                                result_34 = &data_147cf90
                                sub_63b7f0("Can't find sys directory %s\n")
    
    char* result_63 = &data_801800
    
    if (result_48 != 0)
        result_63 = result_48
    
    void* edx_62 = 0x147d098 - result_63
    
    do
        result.b = *result_63
        result_63 = &result_63[1]
        *(result_63 + edx_62 - 1) = result.b
    while (result.b != 0)
    
    var_8_1.b = 0x3c
    
    if (data_cf65bc != 0 && result_48 != 0 && *result_48 != result.b)
        result = sub_63d4e0(&result_56)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_2 = 0x3d
    
    if (data_cf65bc != 0 && result_45 != 0 && *result_45 != 0)
        result = sub_63d4e0(&result_46)
        int32_t temp4_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp4_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
