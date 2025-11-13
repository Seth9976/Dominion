// 函数: sub_6eb5e0
// 地址: 0x6eb5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7717f7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_838 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg2
struct _EXCEPTION_REGISTRATION_RECORD** esi = arg4

if (esi == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** var_81c
    sub_69fd50(eax_3, "!Null\Null", &var_81c, 0x1d)
    struct _EXCEPTION_REGISTRATION_RECORD** var_8_1 = esi
    char* eax_4 = var_81c
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3, arg2 = sub_69f030(ecx_1, esi + 0x1d)
    esi = eax_3
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_81c
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_81c)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                eax_3, arg2 = sub_64c080(eax_3, &eax_3[3][2])
                var_81c = &data_801800
    
    int32_t var_8_3 = 0xffffffff
else if (esi[1] != 0x1d)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

struct _EXCEPTION_REGISTRATION_RECORD** var_820 = esi

if (*esi == 0)
    arg2.b = 0
    sub_69f4a0(eax_3, arg2.b, esi, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_5 = *esi
esi[7] = &esi[7]->Next + 1
struct _EXCEPTION_REGISTRATION_RECORD* Next = eax_5->Next
int32_t var_8_4 = 2
int32_t var_818[0x200]
int32_t eax_6 = sub_6eb500(Next, &var_818)

if (ebx s>= eax_6)
    sub_63b870(eax_6, &data_801800, "item < numLayers", "C:\x\ax2017\Engine\MaterialFnDef.cpp", 
        0x143, "MaterialFn_ItemClicked")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ebx_1 = ebx * 2

if (data_1a9a340 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a9a340)
    
    if (data_1a9a340 == 0xffffffff)
        var_8_4.b = 3
        data_1a9a344 = sub_697540(data_1777584, "imgVisible")
        __Init_thread_footer(&data_1a9a340)

uint32_t result = arg3

if (result == data_1a9a344 && var_818[ebx_1 * 2] == 0)
    var_814
    void* ecx_9 = &Next->Next[*(&var_814 + (ebx_1 << 3)) * 0xb]
    result.b = *(ecx_9 + 4) == 0
    *(ecx_9 + 4) = result.b

Next->__offset(0x10).d = 0

if (esi != 0)
    esi[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
