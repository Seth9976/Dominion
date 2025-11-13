// 函数: sub_4b2bd0
// 地址: 0x4b2bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAAVios_base@2@GO@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_84 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_8db72c == 0x1d)
    result = data_8db730
label_4b2c20:
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    
    if (result != 0)
        uint32_t eax_3 = sub_64e7a0(result)
        void* eax_4 = sub_64c870(eax_3, nullptr)
        char const* const var_90
        int32_t var_8c_1
        char const* const var_88_2
        uint32_t _String_2
        uint32_t _String_3
        char* ecx_4
        
        if (eax_4 != 0)
            _String_3 = sub_64e7a0(eax_4)
            _String_2 = _String_3
            
            if (*(_String_3 + 0x1718) != eax_3)
                var_88_2 = "UI2GetChild"
                var_8c_1 = 0x1845
                var_90 = "C:\x\ax2017\Engine\UI2.cpp"
                ecx_4 = "child.parent == &ui"
            label_4b3035:
                sub_63b870(_String_3, &data_801800, ecx_4, var_90, var_8c_1, var_88_2)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        else
            _String_3 = sub_64e7a0(sub_64c870(eax_3, eax_4))
            _String_2 = _String_3
        
        int32_t esi_2 = 0
        
        if (*(_String_3 + 0x170c) s> 0)
            int32_t edi_1 = 0
            
            while (true)
                if (edi_1 s>= 0)
                    int32_t ebx_1 = *(_String_3 + 0x170c)
                    
                    if (esi_2 s< ebx_1)
                        int32_t* edx_1 = *(_String_3 + 0x1708)
                        int32_t eax_6 = *(edx_1 + edi_1)
                        
                        if (eax_6 == 0)
                            void* eax_8 = *(edx_1 + edi_1 + 4)
                            char const* const ecx_6 = "notification"
                            
                            while (true)
                                edx_1.b = *eax_8
                                char const temp3_1 = *ecx_6
                                bool c_1 = edx_1.b u< temp3_1
                                
                                if (edx_1.b == temp3_1)
                                    if (edx_1.b == 0)
                                        result = nullptr
                                        break
                                    
                                    edx_1.b = *(eax_8 + 1)
                                    char temp6_1 = ecx_6[1]
                                    c_1 = edx_1.b u< temp6_1
                                    
                                    if (edx_1.b == temp6_1)
                                        eax_8 += 2
                                        ecx_6 = &ecx_6[2]
                                        
                                        if (edx_1.b != 0)
                                            continue
                                        
                                        result = nullptr
                                        break
                                
                                result = sbb.d(eax_8, eax_8, c_1) | 1
                                break
                            
                            if (result == 0)
                                goto label_4b2fc1
                        else
                            _String_3 = eax_6 - 1
                            
                            if (eax_6 != 1)
                                var_88_2 = "UI2IsStateEffectActive"
                                var_8c_1 = 0x5d28
                                var_90 = "C:\x\ax2017\Engine\UI2.cpp"
                                ecx_4 = "Halt"
                                goto label_4b3035
                        
                        esi_2 += 1
                        edi_1 += 0x18
                        
                        if (esi_2 s>= ebx_1)
                            break
                        
                        _String_3 = _String_2
                        continue
                
                var_88_2 = "XArray<struct UI2StateEffect>::operator []"
                var_8c_1 = 0xb5
                var_90 = "C:\x\ax2017\Engine\xArray.h"
                ecx_4 = "index >= 0 && index < mSize"
                goto label_4b3035
        
        char* const result_2 = &data_801800
        int32_t var_8_1 = 0
        char* const result_3 = &data_801800
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_88_3)(struct 
            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
        var_8_1.b = 1
        int32_t var_58[0x8]
        `eh vector constructor iterator'(&var_58, 4, 8, 0x5a0be0)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_88_4)(struct 
            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
        var_8_1.b = 2
        void var_38
        `eh vector constructor iterator'(&var_38, 4, 8, 0x5a0be0)
        int32_t var_8_2 = 3
        EnterCriticalSection(data_147ac20 + 0x902c)
        void* ecx_7 = data_147ac20
        int32_t eax_12 = *(ecx_7 + 0x9024)
        
        if (*(ecx_7 + 0x9020) != eax_12)
            int32_t eax_14 = eax_12 & 0x80000007
            
            if (eax_14 s< 0)
                eax_14 = ((eax_14 - 1) | 0xfffffff8) + 1
            
            void* ebx_3 = eax_14 * 0x1204 + ecx_7
            sub_63d8d0(&result_2, ebx_3)
            sub_63d8d0(&result_3, ebx_3 + 0x100)
            int32_t eax_18 = *(ebx_3 + 0x1200)
            int32_t edi_2 = 0
            
            if (eax_18 s> 0)
                char** esi_3 = &var_38
                
                do
                    sub_63d8d0(&esi_3[-8], ebx_3 + ((edi_2 + 0x40) << 3))
                    sub_63d8d0(esi_3, ebx_3 + ((edi_2 + 0x140) << 3))
                    eax_18 = *(ebx_3 + 0x1200)
                    edi_2 += 1
                    esi_3 = &esi_3[1]
                while (edi_2 s< eax_18)
            
            void* eax_23 = data_147ac20
            *(eax_23 + 0x9024) += 1
            LeaveCriticalSection(eax_23 + 0x902c)
            uint32_t _String_1 = &data_801800
            _String_2 = &data_801800
            var_8_2.b = 4
            int32_t edi_3 = 0
            char* const result_5 = &data_801800
            int32_t var_70_1 = 0
            char edi_4
            
            if (eax_18 s<= 0)
            label_4b2ea7:
                edi_4 = result_1.b
            label_4b2eaa:
                char* const result_4 = result_3
                
                if (result_4 != 0)
                    result_5 = result_4
                
                char* const result_6 = result_5
                uint32_t eax_30
                int32_t ecx_12
                eax_30, ecx_12 = sub_63b5f0("show! %s")
                int32_t var_88_12 = 0
                int32_t var_8c_2 = ecx_12
                sub_67cd20(eax_30, "notification", edi_4)
                sub_63d850(&data_8dc8c4, &result_3)
                data_171e6ac
                data_8dc8c8 = var_70_1
                sub_6889d0()
            else
                while (true)
                    char* result_7 = var_58[edi_3]
                    
                    if (result_7 != 0)
                        result_5 = result_7
                    
                    char const* const eax_27 = "tgg.gameDBID"
                    int32_t eax_29
                    
                    while (true)
                        char edx_2 = *result_5
                        char const temp5_1 = *eax_27
                        bool c_2 = edx_2 u< temp5_1
                        
                        if (edx_2 == temp5_1)
                            if (edx_2 == 0)
                                eax_29 = 0
                                break
                            
                            edx_2 = result_5[1]
                            char temp7_1 = eax_27[1]
                            c_2 = edx_2 u< temp7_1
                            
                            if (edx_2 == temp7_1)
                                result_5 = &result_5[2]
                                eax_27 = &eax_27[2]
                                
                                if (edx_2 != 0)
                                    continue
                                
                                eax_29 = 0
                                break
                        
                        eax_29 = sbb.d(eax_27, eax_27, c_2) | 1
                        break
                    
                    if (eax_29 == 0)
                        break
                    
                    edi_3 += 1
                    result_5 = &data_801800
                    
                    if (edi_3 s>= eax_18)
                        goto label_4b2ea7
                
                sub_63d850(&_String_2, (edi_3 << 2) + &var_38)
                _String_1 = _String_2
                uint32_t _String = &data_801800
                
                if (_String_1 != 0)
                    _String = _String_1
                
                edi_4 = result_1.b
                var_70_1 = atoi(_String)
                
                if (arg1 == 0)
                    result_5 = &data_801800
                    goto label_4b2eaa
            var_8_2.b = 5
            
            if (data_cf65bc != 0 && _String_1 != 0 && *_String_1 != 0)
                char* eax_32 = sub_63d4e0(&_String_2)
                int32_t temp8_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
        else
            LeaveCriticalSection(ecx_7 + 0x902c)
        
        int32_t var_8_3 = 6
        `eh vector vbase constructor iterator'(&var_38, 4, 8, sub_63d770)
        result = `eh vector vbase constructor iterator'(&var_58, 4, 8, sub_63d770)
        var_8_3.b = 7
        
        if (data_cf65bc != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_3)
                int32_t temp2_1 = result[1]
                result[1] -= 1
                
                if (temp2_1 == 1)
                    result = sub_64c080(result, &result[3][2])
                    result_3 = &data_801800
        
        var_8_3.b = 8
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_2)
                int32_t temp4_1 = result[1]
                result[1] -= 1
                
                if (temp4_1 == 1)
                    result = sub_64c080(result, &result[3][2])
else if (data_8db73c == 0x1d)
    result = data_8db740
    goto label_4b2c20

label_4b2fc1:
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
