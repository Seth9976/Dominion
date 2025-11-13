// 函数: sub_552170
// 地址: 0x552170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7669eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19b8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_19d8
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19d8, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e526870c9f0b19951e850c16e7ec29b1>,bool,enum CardID>::VTable
    * const var_d20 = &std::_Func_impl_no_alloc<class <lambda_e526870c9f0b19951e850c16e7ec29b1>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0
__builtin_memcpy(&var_cb0, &var_19d8, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e526870c9f0b19951e850c16e7ec29b1>,bool,enum CardID>::VTable
    * const* var_cfc = &var_d20
int32_t var_14_1 = 0
int32_t** var_cc4
int32_t* var_30_1 = &var_cc4
int32_t var_34_1 = 0
int32_t* var_5c
var_cc4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cfc != 0)
    int32_t var_38_1 = (*var_cfc)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_58
int32_t* var_54
int32_t var_30_2 = GSI1::OffForSym(eax_4, eax_4, &var_cb0, var_5c, var_58, var_54)

if (var_cfc != 0)
    (*var_cfc)->vFunc_4(var_cfc != &var_d20)

int64_t var_cf4
__builtin_memset(&var_cf4, 0, 0x2c)
int128_t var_d50 = 0x104.o
int32_t var_ce8
int128_t var_d40 = var_ce8.o
int64_t var_cd8
int128_t var_d30 = var_cd8.o
uint32_t result = sub_563c40(&var_d50, 0xc, 0)
uint32_t result_3 = result

if (result_3 != 0)
    void* eax_11 = sub_573400()
    sub_583720(eax_11, *(eax_11 + 0xc), *(eax_11 + 4), result_3, 0x476, nullptr, 0x476, 0, 0, 4)
    uint32_t edi_1 = zx.d(result_3.w)
    int32_t eax_13 = *(sub_573400() + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    int32_t edi_2 = edi_1 * 0x64
    uint32_t result_2 = *(edi_2 + eax_13 + 0x1a58)
    uint32_t result_1 = *(edi_2 + eax_13 + 0x1a5c)
    int32_t ecx_5 = *(sub_573400() + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    result = result_2
    
    if (result == *(edi_2 + ecx_5 + 0x1a50))
        result = result_1
        
        if (result == *(edi_2 + ecx_5 + 0x1a54))
            int32_t eax_16 = *(sub_573400() + 4)
            void* var_cc0_2
            void* var_cb8_2
            int32_t var_cb4_3
            void* eax_21
            int32_t** edx_5
            
            if (edi_1 u< 0x320)
                var_cb4_3 = *(edi_2 + eax_16 + 0x1a58)
                var_cc0_2 = nullptr
                var_cb8_2 = nullptr
                eax_21 = sub_573400()
                edx_5 = *(eax_21 + 4)
            else
                sub_591930()
                var_cb4_3 = *(edi_2 + eax_16 + 0x1a58)
                var_cc0_2 = nullptr
                var_cb8_2 = nullptr
                void* eax_19 = sub_573400()
                var_cc4 = *(eax_19 + 4)
                sub_591930()
                eax_21 = eax_19
                edx_5 = var_cc4
            
            uint32_t edx_6 = edx_5[edi_1 * 0x19 + 0x69c]
            int32_t* ecx_6 = *(eax_21 + 4)
            int32_t var_38_4 = 0
            char* var_3c_2 = nullptr
            int32_t var_40_2 = 0
            int32_t var_44_2 = 0
            int32_t var_48_2 = *(eax_21 + 0x30)
            int32_t var_4c_1 = *(eax_21 + 0x2c)
            int32_t var_50_1 = *(eax_21 + 0x28)
            void* var_54_1 = nullptr
            int32_t var_58_1 = 0x45e
            var_5c = 0xb
            result = sub_582d10(eax_21, edx_6, ecx_6, result_3, var_cb4_3, var_5c, var_58_1, 
                var_54_1, var_50_1, var_4c_1, var_48_2, var_44_2, var_40_2, var_3c_2, var_38_4, 
                var_cc0_2, var_cb8_2)
            
            if (result.b != 0)
                int32_t var_30_7 = 2
                var_cb0 = 1
                uint32_t result_4 = result_3
                int32_t var_2c_1 = 1
                result = sub_56bba0(&var_cb0, 0, sub_4ffce0, &var_cb0, 1, var_30_7)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
