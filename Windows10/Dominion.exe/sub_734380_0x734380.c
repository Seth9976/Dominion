// 函数: sub_734380
// 地址: 0x734380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0ThreadProxyFactoryManager@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* eax_3 = _aligned_malloc(0x20, 0x10)

if (eax_3 == 0)
    sub_63b870(eax_3, &data_801800, "pBuffer", "C:\x\ax2017\Engine\xMemory.cpp", 0x57, "XMalloc")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_69ca80(eax_3, data_177754c)
int32_t* result_1
int32_t* result_2 = result_1
char* const result_5 = &data_801800
char* const result_4 = &data_801800

if (result_2 != 0)
    result_4 = result_2

int32_t ebx

if (sub_733c00(result_4, eax_3) != 0)
    ebx.b = 1
    (*arg1)[6] = eax_3
else
    int32_t* result_3 = result_1
    
    if (result_3 != 0)
        result_5 = result_3
    
    char* const result_6 = result_5
    sub_63b5f0("anim reimport reading xan '%s'")
    _aligned_free(eax_3)
    ebx.b = 0

int32_t var_8_2 = 1
int32_t* result

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, result[3] + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
