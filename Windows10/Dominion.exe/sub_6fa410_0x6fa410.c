// 函数: sub_6fa410
// 地址: 0x6fa410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_77229e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_5cc = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_42 = data_147ded0

if (result_42 != 0)
    char const* const result_22
    char* result_2
    char* var_55c
    char** ecx
    
    if (*(data_147ac2c + 0x24) == 0)
        char* result_36 = result_42[8]
        int32_t esi_1 = result_42[1]
        result_22 = arg1
        result_22 = result_36
        
        if (result_36 != 0 && *result_36 != 0)
            char* eax_7 = sub_63d4e0(&result_22)
            *(eax_7 + 4) += 1
        
        char* result_1
        sub_6c4b90(&result_1, esi_1)
        int32_t var_14_2 = 1
        int32_t eax_8 = result_42[1]
        int32_t var_5c0
        char* var_564
        char* result_3
        char** ecx_16
        
        if (eax_8 == 0x19)
            char* result_4 = result_1
            char* const result_23 = &data_801800
            
            if (result_4 != 0)
                result_23 = result_4
            
            void var_130
            int32_t edx_4 = &var_130 - result_23
            
            do
                result_4.b = *result_23
                result_23 = &result_23[1]
                result_23[edx_4 - 1] = result_4.b
            while (result_4.b != 0)
            
            result_22 = 0x58
            memset(&var_5c0, 0, result_22)
            int32_t var_5bc_1 = data_147d46c
            void* var_5a4_1 = &var_130
            var_5c0 = 0x58
            result_22 = &var_5c0
            int32_t var_5a0_1 = 0x104
            char const* const var_5b4_1 = "Particle (*.particle)"
            int32_t var_5a8_1 = 0
            int32_t var_59c_1 = 0
            int32_t var_598_1 = 0
            int32_t var_594_1 = 0
            char const* const var_590_1 = "Save Particle As"
            char const* const var_584_1 = "particle"
            int32_t var_58c_1 = 0x200000a
            result = GetSaveFileNameA(result_22)
            
            if (result != 0)
                sub_63d720(&var_55c, &var_130)
                var_14_2.b = 2
                char* edx_6 = &data_801800
                char* esi_2 = var_55c
                
                if (esi_2 != 0)
                    edx_6 = esi_2
                
                sub_6c4220(&result_3, edx_6)
                var_14_2.b = 3
                int32_t** edi = *result_42
                result_2 = *(data_147b07c + 0x33c)
                char* eax_12 = sub_687730(0x10)
                char* result_20 = result_2
                var_564 = eax_12
                *eax_12 = zx.o(0)
                int32_t* eax_13 = sub_69d4c0(*edi, result_20)
                int32_t** edi_1 = var_564
                char* const result_24 = &data_801800
                *edi_1 = eax_13
                edi_1[3] = result_2
                char* result_5 = result_3
                
                if (result_5 != 0)
                    result_24 = result_5
                
                int32_t result_6
                int32_t* result_41
                result_6, result_41 = sub_69f030(result_24, 0x19)
                result_2 = result_6
                
                if (result_42 == result_6)
                    void* edi_2 = data_147ded0
                    
                    if (edi_2 != 0)
                        int32_t ecx_10 = *(edi_2 + 4)
                        
                        if (ecx_10 == 0x22 || ecx_10 == 0x1d || ecx_10 == 0x19 || ecx_10 == 0x1b
                                || ecx_10 == 0x1e || ecx_10 == 0x20)
                            *(edi_2 + 0x1c) -= 1
                        
                        data_147ded0 = 0
                    
                    result_41 = result_42
                    sub_69ec60(result_41)
                    edi_1 = var_564
                
                char* result_7 = result_3
                result_22 = result_41
                result_22 = result_7
                
                if (result_7 != 0 && *result_7 != 0)
                    char* eax_15 = sub_63d4e0(&result_22)
                    *(eax_15 + 4) += 1
                
                sub_69faf0(0x19, edi_1)
                sub_73d740()
                result = sub_6f9e80(sub_6fdb00(result_2))
                
                if (data_ccf6e5 == 0)
                    result = sub_73d5c0()
                
                var_14_2.b = 4
                
                if (data_cf65bc != 0)
                    result = result_3
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_3)
                        int32_t temp3_1 = result[1]
                        result[1] -= 1
                        
                        if (temp3_1 == 1)
                            result = sub_64c080(result, &result[3][2])
                            result_3 = &data_801800
                
                var_14_2.b = 5
                
                if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                    ecx_16 = &var_55c
                    goto label_6fb049
        else if (eax_8 == 0x1b)
            char* result_8 = result_1
            char* const result_25 = &data_801800
            
            if (result_8 != 0)
                result_25 = result_8
            
            void var_238
            int32_t edx_11 = &var_238 - result_25
            
            do
                result_8.b = *result_25
                result_25 = &result_25[1]
                result_25[edx_11 - 1] = result_8.b
            while (result_8.b != 0)
            
            result_22 = 0x58
            memset(&var_5c0, 0, result_22)
            int32_t var_5bc_2 = data_147d46c
            void* var_5a4_2 = &var_238
            var_5c0 = 0x58
            result_22 = &var_5c0
            int32_t var_5a0_2 = 0x104
            char const* const var_5b4_2 = "Graph (*.graph)"
            int32_t var_5a8_2 = 0
            int32_t var_59c_2 = 0
            int32_t var_598_2 = 0
            int32_t var_594_2 = 0
            char const* const var_590_2 = "Save GRaph As"
            char const* const var_584_2 = "graph"
            int32_t var_58c_2 = 0x200000a
            result = GetSaveFileNameA(result_22)
            
            if (result != 0)
                sub_63d720(&var_564, &var_238)
                var_14_2.b = 6
                char* edx_13 = &data_801800
                char* esi_3 = var_564
                
                if (esi_3 != 0)
                    edx_13 = esi_3
                
                sub_6c4220(&result_3, edx_13)
                var_14_2.b = 7
                int32_t** edi_3 = *result_42
                var_55c = *(data_147b07c + 0x37c)
                int128_t* eax_19 = sub_687730(0x10)
                char* edx_14 = var_55c
                int32_t** var_558_1 = eax_19
                *eax_19 = zx.o(0)
                char* const result_26 = &data_801800
                *var_558_1 = sub_69d4c0(*edi_3, edx_14)
                var_558_1[3] = var_55c
                char* result_9 = result_3
                
                if (result_9 != 0)
                    result_26 = result_9
                
                int32_t result_37 = sub_69f030(result_26, 0x1b)
                sub_69ec60(result_37)
                result_22 = result_37
                char* result_16 = result_3
                result_22 = result_16
                
                if (result_16 != 0 && *result_16 != 0)
                    char* eax_22 = sub_63d4e0(&result_22)
                    *(eax_22 + 4) += 1
                
                sub_69faf0(0x1b, var_558_1)
                sub_73d740()
                sub_6f9e80(sub_6fdb00(result_37))
                result = sub_73d5c0()
                var_14_2.b = 8
                
                if (data_cf65bc != 0)
                    result = result_3
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_3)
                        int32_t temp1_1 = result[1]
                        result[1] -= 1
                        
                        if (temp1_1 == 1)
                            result = sub_64c080(result, &result[3][2])
                            result_3 = &data_801800
                
                var_14_2.b = 9
                
                if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                    ecx_16 = &var_564
                label_6fb049:
                    result = sub_63d4e0(ecx_16)
                    int32_t temp5_1 = result[1]
                    result[1] -= 1
                    
                    if (temp5_1 == 1)
                        result = sub_64c080(result, &result[3][2])
        else
            char* result_21
            
            if (eax_8 == 0x1e)
                char* result_10 = result_1
                char* const result_27 = &data_801800
                
                if (result_10 != 0)
                    result_27 = result_10
                
                void var_340
                int32_t edx_18 = &var_340 - result_27
                
                do
                    result_10.b = *result_27
                    result_27 = &result_27[1]
                    result_27[edx_18 - 1] = result_10.b
                while (result_10.b != 0)
                
                result_22 = 0x58
                memset(&var_5c0, 0, result_22)
                int32_t var_5bc_3 = data_147d46c
                void* var_5a4_3 = &var_340
                var_5c0 = 0x58
                result_22 = &var_5c0
                int32_t var_5a0_3 = 0x104
                char const* const var_5b4_3 = "UI (*.ui)"
                int32_t var_5a8_3 = 0
                int32_t var_59c_3 = 0
                int32_t var_598_3 = 0
                char const* const var_594_3 = "res/ui2"
                char const* const var_590_3 = "Save UI As"
                void* const var_584_3 = &data_87cca0
                int32_t var_58c_3 = 0x200000a
                result = GetSaveFileNameA(result_22)
                
                if (result != 0)
                    sub_63d720(&result_2, &var_340)
                    var_14_2.b = 0xa
                    char* result_33 = &data_801800
                    result_21 = result_2
                    
                    if (result_21 != 0)
                        result_33 = result_21
                    
                    sub_6c4220(&result_3, result_33)
                    var_14_2.b = 0xb
                    int32_t** edi_5 = *result_42
                    var_55c = *(data_147b07c + 0x3dc)
                    char* eax_26 = sub_687730(0x10)
                    char* edx_20 = var_55c
                    var_564 = eax_26
                    *eax_26 = zx.o(0)
                    int32_t* eax_27 = sub_69d4c0(*edi_5, edx_20)
                    int32_t** ecx_29 = var_564
                    *ecx_29 = eax_27
                    ecx_29[3] = var_55c
                    char* result_28 = &data_801800
                    char* result_11 = result_3
                    
                    if (result_11 != 0)
                        result_28 = result_11
                    
                    int32_t result_38 = sub_69f030(result_28, 0x1e)
                    sub_69ec60(result_38)
                    result_22 = result_38
                    char* result_17 = result_3
                    result_22 = result_17
                    
                    if (result_17 != 0 && *result_17 != 0)
                        char* eax_29 = sub_63d4e0(&result_22)
                        *(eax_29 + 4) += 1
                    
                    sub_69faf0(0x1e, var_564)
                    sub_73d740()
                    sub_6fdb00(result_38)
                    sub_6f9e80(sub_744940(result_38))
                    result = sub_73d5c0()
                    var_14_2.b = 0xc
                    
                    if (data_cf65bc != 0)
                        result = result_3
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_3)
                            int32_t temp2_1 = result[1]
                            result[1] -= 1
                            
                            if (temp2_1 == 1)
                                result = sub_64c080(result, &result[3][2])
                                result_3 = &data_801800
                    
                    var_14_2.b = 0xd
                label_6fb031:
                    
                    if (data_cf65bc != 0 && result_21 != 0 && *result_21 != 0)
                        ecx_16 = &result_2
                        goto label_6fb049
            else if (eax_8 != 0x22)
                if (eax_8 != 0x20)
                    result_22 = "EditorSaveAs"
                    sub_63b870(eax_8, &data_801800, "Halt", 
                        "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x166f, result_22)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                char* result_14 = result_1
                char* const result_31 = &data_801800
                
                if (result_14 != 0)
                    result_31 = result_14
                
                void var_550
                int32_t edx_30 = &var_550 - result_31
                
                do
                    result_14.b = *result_31
                    result_31 = &result_31[1]
                    result_31[edx_30 - 1] = result_14.b
                while (result_14.b != 0)
                
                result_22 = 0x58
                memset(&var_5c0, 0, result_22)
                int32_t var_5bc_5 = data_147d46c
                void* var_5a4_5 = &var_550
                var_5c0 = 0x58
                result_22 = &var_5c0
                int32_t var_5a0_5 = 0x104
                char const* const var_5b4_5 = "Fab (*.fab)"
                int32_t var_5a8_5 = 0
                int32_t var_59c_5 = 0
                int32_t var_598_5 = 0
                int32_t var_594_5 = 0
                char const* const var_590_5 = "Save Fab As"
                void* const var_584_5 = &data_87cca0
                int32_t var_58c_5 = 0x200000a
                result = GetSaveFileNameA(result_22)
                
                if (result != 0)
                    sub_63d720(&result_2, &var_550)
                    var_14_2.b = 0x12
                    char* result_35 = &data_801800
                    result_21 = result_2
                    
                    if (result_21 != 0)
                        result_35 = result_21
                    
                    sub_6c4220(&result_3, result_35)
                    var_14_2.b = 0x13
                    int32_t** edi_9 = *result_42
                    var_55c = *(data_147b07c + 0x41c)
                    char* eax_40 = sub_687730(0x10)
                    char* edx_32 = var_55c
                    var_564 = eax_40
                    *eax_40 = zx.o(0)
                    int32_t* eax_41 = sub_69d4c0(*edi_9, edx_32)
                    int32_t** ecx_51 = var_564
                    *ecx_51 = eax_41
                    ecx_51[3] = var_55c
                    char* result_32 = &data_801800
                    char* result_15 = result_3
                    
                    if (result_15 != 0)
                        result_32 = result_15
                    
                    int32_t result_40 = sub_69f030(result_32, 0x20)
                    sub_69ec60(result_40)
                    result_22 = result_40
                    char* result_19 = result_3
                    result_22 = result_19
                    
                    if (result_19 != 0 && *result_19 != 0)
                        char* eax_43 = sub_63d4e0(&result_22)
                        *(eax_43 + 4) += 1
                    
                    sub_69faf0(0x20, var_564)
                    sub_73d740()
                    sub_6fdb00(result_40)
                    sub_6f9e80(sub_73e2e0(result_40))
                    result = sub_73d5c0()
                    var_14_2.b = 0x14
                    
                    if (data_cf65bc != 0)
                        result = result_3
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_3)
                            int32_t temp6_1 = result[1]
                            result[1] -= 1
                            
                            if (temp6_1 == 1)
                                result = sub_64c080(result, &result[3][2])
                                result_3 = &data_801800
                    
                    var_14_2.b = 0x15
                    goto label_6fb031
            else
                char* result_12 = result_1
                char* const result_29 = &data_801800
                
                if (result_12 != 0)
                    result_29 = result_12
                
                void var_448
                int32_t edx_24 = &var_448 - result_29
                
                do
                    result_12.b = *result_29
                    result_29 = &result_29[1]
                    result_29[edx_24 - 1] = result_12.b
                while (result_12.b != 0)
                
                result_22 = 0x58
                memset(&var_5c0, 0, result_22)
                int32_t var_5bc_4 = data_147d46c
                void* var_5a4_4 = &var_448
                var_5c0 = 0x58
                result_22 = &var_5c0
                int32_t var_5a0_4 = 0x104
                char const* const var_5b4_4 = "UI2 (*.ui2)"
                int32_t var_5a8_4 = 0
                int32_t var_59c_4 = 0
                int32_t var_598_4 = 0
                int32_t var_594_4 = 0
                char const* const var_590_4 = "Save UI2 As"
                void* const var_584_4 = &data_87cca0
                int32_t var_58c_4 = 0x200000a
                result = GetSaveFileNameA(result_22)
                
                if (result != 0)
                    sub_63d720(&result_2, &var_448)
                    var_14_2.b = 0xe
                    char* result_34 = &data_801800
                    result_21 = result_2
                    
                    if (result_21 != 0)
                        result_34 = result_21
                    
                    sub_6c4220(&result_3, result_34)
                    var_14_2.b = 0xf
                    int32_t** edi_7 = *result_42
                    var_55c = *(data_147b07c + 0x45c)
                    char* eax_33 = sub_687730(0x10)
                    char* edx_26 = var_55c
                    var_564 = eax_33
                    *eax_33 = zx.o(0)
                    int32_t* eax_34 = sub_69d4c0(*edi_7, edx_26)
                    int32_t** ecx_40 = var_564
                    *ecx_40 = eax_34
                    ecx_40[3] = var_55c
                    char* result_30 = &data_801800
                    char* result_13 = result_3
                    
                    if (result_13 != 0)
                        result_30 = result_13
                    
                    int32_t result_39 = sub_69f030(result_30, 0x22)
                    sub_69ec60(result_39)
                    result_22 = result_39
                    char* result_18 = result_3
                    result_22 = result_18
                    
                    if (result_18 != 0 && *result_18 != 0)
                        char* eax_36 = sub_63d4e0(&result_22)
                        *(eax_36 + 4) += 1
                    
                    sub_69faf0(0x22, var_564)
                    sub_73d740()
                    sub_6fdb00(result_39)
                    sub_6f9e80(sub_67a0e0(result_39))
                    result = sub_73d5c0()
                    var_14_2.b = 0x10
                    
                    if (data_cf65bc != 0)
                        result = result_3
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_3)
                            int32_t temp4_1 = result[1]
                            result[1] -= 1
                            
                            if (temp4_1 == 1)
                                result = sub_64c080(result, &result[3][2])
                                result_3 = &data_801800
                    
                    var_14_2.b = 0x11
                    goto label_6fb031
        int32_t var_14_3 = 0x16
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                ecx = &result_1
                goto label_6fa4ee
    else
        result_22 = "Can't save, current build settings elide data labels."
        char* const lpText = &data_801800
        char* lpText_1 = *sub_63df30(&result_2, result_22)
        
        if (lpText_1 != 0)
            lpText = lpText_1
        
        HWND hWnd = GetForegroundWindow()
        result_22 = &var_55c
        GetWindowThreadProcessId(hWnd, result_22)
        uint32_t eax_6 = GetCurrentProcessId()
        bool cond:0_1 = var_55c != eax_6
        result_22 = nullptr
        
        if (cond:0_1)
            hWnd = nullptr
        
        result = MessageBoxA(hWnd, lpText, "Can't save", result_22)
        int32_t var_14_1 = 0
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                ecx = &result_2
            label_6fa4ee:
                result = sub_63d4e0(ecx)
                int32_t temp0_1 = result[1]
                result[1] -= 1
                
                if (temp0_1 == 1)
                    result = sub_64c080(result, &result[3][2])

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
