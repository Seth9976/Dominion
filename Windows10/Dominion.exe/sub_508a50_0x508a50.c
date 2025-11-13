// 函数: sub_508a50
// 地址: 0x508a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7653d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19c8
int32_t var_cb0[0x314]
__builtin_memcpy(&var_cb0, sub_566240(&var_19c8, edx, 2, &var_19c8, &data_78de88), 0xc84)
void* esi_1 = *ecx
void* eax_6 = sub_573400()
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7a5adf18795e65a82be799b5329638eb>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_7a5adf18795e65a82be799b5329638eb>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t eax_7 = *(eax_6 + 0xc) * 0xc84
void* esi_2 = esi_1 + eax_7
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7a5adf18795e65a82be799b5329638eb>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
int32_t var_14_1 = 0
void var_5c
void** var_30_1
int32_t (* eax_9)[0x314]
void* var_cb8

if (esi_1 == neg.d(eax_7))
    var_30_1 = &var_cb8
    int32_t var_34_2 = 0
    eax_9 = &var_cb0
    var_cb8 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
else
    var_30_1 = esi_2 + 0xc80
    void* var_34_1 = esi_2
    eax_9 = &var_cb0
    var_cb8 = &var_5c
    int32_t var_38 = 0
    var_14_1.b = 1

if (var_cec != 0)
    int32_t var_38_2 = (*var_cec)->vFunc_0(&var_5c)
    eax_9 = &var_cb0

var_14_1.b = 0
int32_t var_58
int32_t* var_54
int32_t eax_13 = GSI1::OffForSym(eax_9, var_30_1, &var_cb0, var_5c, var_58, var_54)
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = eax_13

if (var_cec != 0)
    (*var_cec)->vFunc_4(var_cec != &var_d10)

void* result = *(*(sub_573400() + 4) + 0x1504)

if (result != 3 && result != 5 && result != 4 && result != 6)
    void* var_4c
    __builtin_memset(&var_4c, 0, 0x20)
    void* var_48
    int128_t* var_44
    int32_t var_40
    int32_t var_3c
    int32_t var_38_3
    int32_t var_34_3
    int32_t var_30_4
    result = sub_61b1b0(result, 7, result == 2, 0xffffffff, 0, 1, var_4c, var_48, var_44, var_40, 
        var_3c, var_38_3, var_34_3, var_30_4)

if (eax_13 != 0)
    void* eax_18
    int32_t ecx_5
    eax_18, ecx_5 = sub_573400()
    int64_t var_ce4_1 = 0
    int64_t var_cd4
    __builtin_memset(&var_cd4, 0, 0x1c)
    int32_t eax_19 = *(eax_18 + 0xc)
    int32_t var_cdc_1 = 0
    int32_t var_34_4 = 8
    int128_t var_d40 = 0x2a.o
    int32_t* eax_20 = ecx[1]
    int128_t var_d30_1 = eax_19.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    uint32_t eax_21 = sub_563b20(eax_20, 9, &var_cb0, *eax_20, &var_d40, var_34_4)
    sub_562400(eax_21, 0x3ee, eax_21, 0)
    void* edi_2 = ecx[2]
    
    if (*(edi_2 + 0xc80) s>= 0x320)
        sub_591930()
    
    *(edi_2 + (*(edi_2 + 0xc80) << 2)) = eax_21
    result = nullptr
    *(edi_2 + 0xc80) += 1
    int32_t edi_3 = ecx_5
    
    if (edi_3 s> 0)
        do
            void** ecx_8 = &var_cb0[result]
            
            if (var_cb0[result] == eax_21)
                result = var_cb0[edi_3 - 1]
                *ecx_8 = result
                edi_3 -= 1
                break
            
            result += 1
        while (result s< edi_3)
    
    int32_t edx_4 = 0
    
    if (edi_3 s> 0)
        do
            result = var_cb0[edx_4]
            edx_4 += 1
            *(esi_2 + (*(esi_2 + 0xc80) << 2)) = result
            *(esi_2 + 0xc80) += 1
        while (edx_4 s< edi_3)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
