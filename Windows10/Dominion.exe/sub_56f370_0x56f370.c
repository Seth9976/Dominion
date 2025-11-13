// 函数: sub_56f370
// 地址: 0x56f370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_767155
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x1948)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
void* edi
void* var_1c = edi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (ecx != 0)
    *(arg2 + 0xc80) = 0
    uint32_t ebx_1 = zx.d(ecx.w)
    void* ecx_4 = *(sub_573400() + 4)
    var_1c = ecx_4
    
    if (ebx_1 u>= 0x320)
        sub_591930()
        ecx_4 = var_1c
    
    int32_t eax_9 = ebx_1 * 0x64
    
    if (sub_5754f0(eax_9, *(eax_9 + ecx_4 + 0x1a4c), ecx_4, arg3, arg4) != 0)
        if (*(arg2 + 0xc80) s>= 0x320)
            sub_591930()
        
        *(arg2 + (*(arg2 + 0xc80) << 2)) = ecx
        *(arg2 + 0xc80) += 1
    
    result = arg2
else
    int32_t var_24 = arg4
    void var_1958
    uint32_t eax_4 = sub_5685f0(&var_1958, 0, 0x3e9, &var_1958, arg3)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_291a43d5d915fe4e48f0cdcb6db4a7eb>,bool,enum CardID>::VTable
        * const var_48 = &std::_Func_impl_no_alloc<class <lambda_291a43d5d915fe4e48f0cdcb6db4a7eb>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_cd0
    __builtin_memcpy(&var_cd0, eax_4, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_291a43d5d915fe4e48f0cdcb6db4a7eb>,bool,enum CardID>::VTable
        * const* var_24_1 = &var_48
    __builtin_memcpy(arg2, &var_cd0, 0xc84)
    int32_t* eax_5 = &var_1c
    int32_t var_8_1 = 0
    int32_t edi_3 = *(arg2 + 0xc80)
    int32_t* var_24_2 = &var_1c
    int32_t var_28_1 = 0
    void var_50
    var_1c = &var_50
    int32_t var_2c_2 = 0
    var_8_1.b = 2
    
    if (var_24_2 != 0)
        eax_5 = (**var_24_2)(&var_50)
        int32_t* var_2c_3 = eax_5
    
    var_8_1.b = 0
    *(arg2 + 0xc80) = GSI1::OffForSym(eax_5, edi_3, arg2)
    
    if (var_24_2 != 0)
        (*(*var_24_2 + 0x10))(var_24_2 != &var_48)
    
    result = arg2

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
