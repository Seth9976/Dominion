// 函数: sub_6b43a0
// 地址: 0x6b43a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76fe35
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** Next_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = arg2
struct _EXCEPTION_REGISTRATION_RECORD** Next_6 = arg1
float var_20 = 0f
struct _EXCEPTION_REGISTRATION_RECORD** Next_2
struct _EXCEPTION_REGISTRATION_RECORD** Next_9

if (Next_6 != 0)
    if (Next_6[1] != 0x12)
        sub_63b870(Next_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    Next_9 = arg1
else
    sub_69fd50(Next_3, "!Null\Null", &Next_2, 0x12)
    struct _EXCEPTION_REGISTRATION_RECORD** Next_8 = Next_6
    char* Next_4 = Next_2
    char* const Next_5 = &data_801800
    
    if (Next_4 != 0)
        Next_5 = Next_4
    
    Next_3, arg1, arg2 = sub_69f030(Next_5, Next_6 + 0x12)
    Next_6 = Next_3
    int32_t var_8_1 = 1
    
    if (data_cf65bc != 0)
        Next_3 = Next_2
        
        if (Next_3 != 0 && *Next_3 != 0)
            Next_3 = sub_63d4e0(&Next_2)
            int32_t temp0_1 = Next_3[1]
            Next_3[1] -= 1
            
            if (temp0_1 == 1)
                Next_3, arg1, arg2 = sub_64c080(Next_3, &Next_3[3][2])
                Next_2 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    Next_9 = Next_6

struct _EXCEPTION_REGISTRATION_RECORD** Next_7 = Next_6

if (*Next_9 == 0)
    arg2.b = 0
    sub_69f4a0(Next_3, arg2.b, Next_9, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_3 = *Next_9
Next_9[7] = &Next_9[7]->Next + 1
struct _EXCEPTION_REGISTRATION_RECORD** Next = eax_3->Next
Next_2 = Next
int32_t var_8_3 = 2

if (Next[7] != 0)
    arg1.b = *ebx
    Next = Next[8]
    struct _EXCEPTION_REGISTRATION_RECORD** Next_1 = Next
    
    if (arg1.b != 0)
        while (true)
            int32_t var_54
            char const* const var_50_6
            
            if (arg1.b u< 0x80)
            label_6b44cc:
                char* var_28 = ebx
                void* ecx_4
                Next, ecx_4 = sub_5a0d00(&var_28)
                struct _EXCEPTION_REGISTRATION_RECORD** _C = Next
                float var_24_1 = 1f
                float xmm0_2 = arg3
                xmm0_2 - 0f
                Next:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
                    | (xmm0_2 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    if (&_C[-0x38] u<= 0x1d)
                        _C = &_C[-8]
                        var_24_1 = xmm0_2
                    else if (_C == 0x171)
                        _C = 0x170
                        var_24_1 = xmm0_2
                    else if (_C == 0x151)
                        _C = 0x150
                        var_24_1 = xmm0_2
                    else if (_C s< 0xff)
                        Next, ecx_4 = islower(_C)
                        
                        if (Next != 0 || _C == 0x20)
                            Next, ecx_4 = toupper(_C.b)
                            xmm0_2 = arg3
                            _C = Next
                            var_24_1 = xmm0_2
                        else
                            xmm0_2 = arg3
                
                ecx_4.b = *ebx
                struct _EXCEPTION_REGISTRATION_RECORD*** var_1c = ebx
                
                if (ecx_4.b u< 0x80)
                label_6b4593:
                    sub_5a0d00(&var_1c)
                    char* edx_3 = var_1c
                    var_28 = edx_3
                    char ecx_6 = *edx_3
                    
                    if (ecx_6 u< 0x80)
                    label_6b45c4:
                        var_1c = edx_3
                        xmm0_2 - 0f
                        uint32_t ebx_1 = sub_5a0d00(&var_1c)
                        uint32_t eax_4
                        eax_4:1.b = (xmm0_2 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2 | (xmm0_2 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            if (&_C[-0x38] u<= 0x1d || _C == 0x171 || _C == 0x151)
                            label_6b4611:
                                eax_4 = ebx_1 - 0xe0
                                
                                if (eax_4 u<= 0x1d)
                                    ebx_1 -= 0x20
                                else if (ebx_1 == 0x171)
                                    ebx_1 = 0x170
                                else if (ebx_1 != 0x151)
                                    eax_4 = toupper(ebx_1.b)
                                    ebx_1 = eax_4
                                else
                                    ebx_1 = 0x150
                            else if (_C s< 0xff)
                                eax_4 = islower(_C)
                                
                                if (eax_4 != 0 || _C == 0x20)
                                    goto label_6b4611
                        
                        Next, arg1 = sub_6b3320(eax_4, Next_1, Next_2, _C)
                        
                        if (Next == 0)
                            ebx = var_28
                        else
                            var_1c = Next[7]
                            
                            if (ebx_1 == 0)
                                Next = Next_2
                            else
                                int32_t edx_5 = Next[8]
                                Next = Next_2
                                
                                if (edx_5 != 0xffffffff)
                                    struct _EXCEPTION_REGISTRATION_RECORD*** eax_5 = Next[0xa]
                                    Next = Next_2
                                    
                                    if (edx_5 s< Next[0xa])
                                        void* eax_7 = Next[0xc] + edx_5 * 0xc
                                        
                                        while (*eax_7 == _C)
                                            if (*(eax_7 + 4) == ebx_1)
                                                var_1c += *(eax_7 + 8)
                                                break
                                            
                                            edx_5 += 1
                                            eax_7 += 0xc
                                            
                                            if (edx_5 s>= eax_5)
                                                break
                                        
                                        Next = Next_2
                            
                            ebx = var_28
                            float xmm1_2 = _mm_cvtepi32_ps(zx.o(var_1c))
                            
                            if (*ebx != 0)
                                xmm1_2 = xmm1_2 + arg4 f+ Next[4]
                            
                            var_20 = xmm1_2 * var_24_1 + var_20
                        
                        arg1.b = *ebx
                        
                        if (arg1.b == 0)
                            break
                        
                        continue
                    else
                        Next.b = ecx_6
                        Next.b &= 0xe0
                        
                        if (Next.b == 0xc0)
                            goto label_6b45c4
                        
                        Next.b = ecx_6
                        Next.b &= 0xf0
                        
                        if (Next.b == 0xe0 || (ecx_6 & 0xf8) == 0xf0)
                            goto label_6b45c4
                    
                    var_50_6 = "Xutf8_peek_next"
                    var_54 = 0x21c
                else
                    Next.b = ecx_4.b
                    Next.b &= 0xe0
                    
                    if (Next.b == 0xc0)
                        goto label_6b4593
                    
                    Next.b = ecx_4.b
                    Next.b &= 0xf0
                    
                    if (Next.b == 0xe0)
                        goto label_6b4593
                    
                    ecx_4.b &= 0xf8
                    
                    if (ecx_4.b == 0xf0)
                        goto label_6b4593
                    
                    var_50_6 = "Xutf8_next"
                    var_54 = 0x222
            else
                Next.b = arg1.b
                Next.b &= 0xe0
                
                if (Next.b == 0xc0)
                    goto label_6b44cc
                
                Next.b = arg1.b
                Next.b &= 0xf0
                
                if (Next.b == 0xe0)
                    goto label_6b44cc
                
                arg1.b &= 0xf8
                
                if (arg1.b == 0xf0)
                    goto label_6b44cc
                
                var_50_6 = "Xutf8_peek_next"
                var_54 = 0x21c
            
            sub_63b870(Next, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                "C:\x\ax2017\Engine\Xutf8.cpp", var_54, var_50_6)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn

if (Next_6 != 0)
    Next_6[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
return Next
