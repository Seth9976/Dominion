// 函数: sub_6d8660
// 地址: 0x6d8660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770d15
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result_4 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = arg2
struct _EXCEPTION_REGISTRATION_RECORD** result = result_1
int32_t* edi = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result_5

if (result_1 == 0)
    sub_69fd50(result_4, "!Null\Null", &result_5, 5)
    struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_1
    char* result_6 = result_5
    char* const result_7 = &data_801800
    
    if (result_6 != 0)
        result_7 = result_6
    
    result_4, arg1, arg2 = sub_69f030(result_7, result_1 + 5)
    result_1 = result_4
    result = result_1
    int32_t var_14_1 = 1
    
    if (data_cf65bc != 0)
        result_4 = result_5
        
        if (result_4 != 0 && *result_4 != 0)
            result_4 = sub_63d4e0(&result_5)
            int32_t temp0_1 = result_4[1]
            result_4[1] -= 1
            arg1 = result_4[1]
            
            if (temp0_1 == 1)
                result_4, arg1, arg2 = sub_64c080(result_4, &result_4[3][2])
                result_5 = &data_801800
    
    int32_t var_14_2 = 0xffffffff
else if (result_1[1] != 5)
    sub_63b870(result_4, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1

if (*result_1 == 0)
    arg2.b = 0
    arg1 = sub_69f4a0(result_4, arg2.b, result_1, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_3 = *result_1
result_1[7] = &result_1[7]->Next + 1
struct _EXCEPTION_REGISTRATION_RECORD* Next = eax_3->Next
int32_t var_14_3 = 2
int32_t var_4c
char* ecx_4

if (Next->Next == 1)
    Next = Next->__offset(0x8).d
    
    if (Next->Next == 1)
        void* eax_4 = Next->__offset(0x8).d
        int32_t* var_48_1 = arg1
        result_5 = eax_4 + 8
        sub_6d8320(edi, &result_5)
        __builtin_memcpy(&edi[0x391], eax_4 + 0x18, 0x80)
        *(edi + 0xec4) = *(eax_4 + 0x98)
        *(edi + 0xed4) = *(eax_4 + 0xa8)
        *(edi + 0xee4) = *(eax_4 + 0xb8)
        *(edi + 0xef4) = *(eax_4 + 0xc8)
        result[7] -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    char const* const var_48_2 = "MaterialSimpleStateBind"
    var_4c = 0x2e3
    ecx_4 = "materialPass.variationCount == 1"
else
    char const* const var_48 = "MaterialSimpleStateBind"
    var_4c = 0x2de
    ecx_4 = "pDefMaterial->passCount == 1"

sub_63b870(Next, &data_801800, ecx_4, "C:\x\ax2017\Engine\Material.cpp", var_4c, 
    "MaterialSimpleStateBind")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
