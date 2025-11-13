// 函数: sub_65e9d0
// 地址: 0x65e9d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d0dd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = arg2
void* esi = arg3
void* var_14 = esi
int32_t* arg_8
int32_t* edi = arg_8
char const* const var_40_1
int32_t var_3c_1
char const* const var_38_1
char* ecx

if (edi[2] == 0xffffffff)
    float xmm0_1 = edi[7]
    xmm0_1 f- 0
    eax_3:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        int32_t xmm0_2
        eax_3, arg2, xmm0_2 = sub_65e2e0(arg4)
        edi[7] = xmm0_2
    
    float xmm0_3 = edi[8]
    xmm0_3 f- 0
    eax_3:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
        | (xmm0_3 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        goto label_65eb34
    
    eax_3 = *(arg4 + 0x60)
    struct _EXCEPTION_REGISTRATION_RECORD* ecx_2
    
    if (eax_3 != 0)
        ecx_2 = *eax_3
    
    float xmm0_5
    
    if (eax_3 == 0 || ecx_2 == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** esi_2 = **(arg4 + 4)
        
        if (esi_2 == 0)
            sub_69fd50(eax_3, "!Null\Null", &arg_8, 0x12)
            struct _EXCEPTION_REGISTRATION_RECORD** var_8_1 = esi_2
            int32_t* eax_4 = arg_8
            int32_t* ecx_4 = &data_801800
            
            if (eax_4 != 0)
                ecx_4 = eax_4
            
            eax_3, arg2 = sub_69f030(ecx_4, esi_2 + 0x12)
            esi_2 = eax_3
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0)
                eax_3 = arg_8
                
                if (eax_3 != 0 && *eax_3 != 0)
                    eax_3 = sub_63d4e0(&arg_8)
                    int32_t temp0_1 = eax_3[1]
                    eax_3[1] -= 1
                    
                    if (temp0_1 == 1)
                        eax_3, arg2 = sub_64c080(eax_3, &eax_3[3][2])
                        arg_8 = &data_801800
            
            int32_t var_8_3 = 0xffffffff
            goto label_65eafd
        
        if (esi_2[1] == 0x12)
        label_65eafd:
            
            if (*esi_2 == 0)
                arg2.b = 0
                sub_69f4a0(eax_3, arg2.b, esi_2, 1)
            
            int32_t ecx_8 = esi_2[7]
            esi_2[7] = ecx_8 + 1
            xmm0_5 = _mm_cvtepi32_ps(zx.o(*(*esi_2)->Next)) f* *(arg4 + 0x20)
            esi_2[7] = ecx_8
            esi = var_14
            goto label_65eb2c
        
        var_38_1 = "DefAutoLock::DefAutoLock"
        var_3c_1 = 0x19
        var_40_1 = "C:\x\ax2017\Engine\DefLoad.h"
        ecx = "assetPtr && assetPtr->assetType == assetType"
    else
        float xmm0_4
        eax_3, xmm0_4 = sub_641a40(ecx_2, *(arg4 + 0x64))
        xmm0_5 = xmm0_4 f* *(arg4 + 0x20)
    label_65eb2c:
        edi[8] = xmm0_5
    label_65eb34:
        float xmm0_8 = edi[9]
        xmm0_8 f- 0
        eax_3:1.b = (xmm0_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2
            | (xmm0_8 < 0f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (not(p_6))
            int32_t xmm0_9
            eax_3, xmm0_9 = sub_65e4e0(arg4)
            edi[9] = xmm0_9
        
        float xmm0_10 = edi[6]
        xmm0_10 f- 0
        eax_3:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
            | (xmm0_10 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (not(p_8))
            float xmm0_11 = edi[0xa]
            xmm0_11 f- 0
            eax_3:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
                | (xmm0_11 < 0f ? 1 : 0)
            bool p_10 = unimplemented  {test ah, 0x44}
            float xmm0_12
            
            if (p_10)
                xmm0_12 = xmm0_11 f+ edi[7] f+ edi[0xe]
            else
                xmm0_12 = sub_65e4e0(arg4)
            
            edi[6] = xmm0_12
            edi[0xe] = 0
        
        int32_t eax_7 = *(esi + 0x18)
        int32_t ecx_11 = *(esi + 0x1c)
        void* edx_6
        
        if (eax_7 s< ecx_11)
            edx_6 = esi + 0x14
        else
            int32_t eax_8 = 0x10
            int32_t var_18_1 = 0x10
            
            if (ecx_11 != 0)
                eax_8 = ecx_11 * 2
                var_18_1 = eax_8
            
            int32_t* eax_9 = sub_64c020(eax_8 * 0x34)
            int32_t edx_3 = *(esi + 0x14)
            
            if (edx_3 != 0)
                memcpy(eax_9, edx_3, eax_7 * 0x34)
                sub_64c080(*(esi + 0x14), *(esi + 0x1c) * 0x34)
            
            *(esi + 0x14) = eax_9
            edx_6 = var_14 + 0x14
            *(esi + 0x1c) = var_18_1
        
        *(esi + 0x18) += 1
        void* ecx_15 = *(esi + 0x18) * 0x34
        int32_t eax_11 = *(esi + 0x14)
        __builtin_memset(ecx_15 + eax_11 - 0x30, 0, 0x30)
        void* esi_3 = ecx_15 + eax_11
        *(esi_3 - 0x2c) = edi[4]
        int32_t eax_13 = edi[5]
        *(esi_3 - 0x28) = eax_13
        edi[5] = eax_13 + 1
        *(esi_3 - 0x34) = var_24
        *(esi_3 - 0x20) = edi[6]
        eax_3 = edi[1]
        int32_t xmm0_14
        
        if (eax_3 == 0xffffffff)
            xmm0_14 = (zx.o(0)).d
        label_65ecbc:
            int32_t eax_18 = edi[8]
            *(esi_3 - 0x24) = xmm0_14
            *(esi_3 - 0x1c) = 0
            *(esi_3 - 0x18) = eax_18
            *(esi_3 - 0x30) = 0
            
            if (*(arg4 + 0x58) == 4)
                *(esi_3 - 0x30) = 1
            
            int32_t eax_19
            int32_t edx_8
            edx_8:eax_19 = muls.dp.d(0x4ec4ec4f, esi_3 - 0x34 - *edx_6)
            int32_t edx_9 = edx_8 s>> 4
            int32_t ecx_21 = (edx_9 u>> 0x1f) + edx_9
            
            if (*edi == 0xffffffff)
                *edi = ecx_21
            
            edi[1] = ecx_21
            edi[2] = ecx_21
            fsbase->NtTib.ExceptionList = ExceptionList
            return esi_3 - 0x34
        
        if (eax_3 s>= 0 && eax_3 s< *(var_14 + 0x18))
            int32_t ecx_16 = eax_3 * 0x34
            int32_t eax_17 = *(var_14 + 0x14)
            edx_6 = var_14 + 0x14
            xmm0_14 = *(ecx_16 + eax_17 + 0x18) f+ *(ecx_16 + eax_17 + 0x10)
            goto label_65ecbc
        
        var_38_1 = "XDynArray<struct TextEntry>::operator []"
        var_3c_1 = 0xd4
        var_40_1 = "C:\x\ax2017\Engine\xDynArray.h"
        ecx = "index >= 0 && index < mSize"
else
    var_38_1 = "TextEntryAlloc"
    var_3c_1 = 0x29d9
    var_40_1 = "C:\x\ax2017\Engine\UI2.cpp"
    ecx = "lineParams.currentEntryIdx == -1"

sub_63b870(eax_3, &data_801800, ecx, var_40_1, var_3c_1, var_38_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
