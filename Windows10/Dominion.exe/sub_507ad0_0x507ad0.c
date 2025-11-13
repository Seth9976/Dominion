// 函数: sub_507ad0
// 地址: 0x507ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76537b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t edx = __chkstk(0x2630)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_2650
uint32_t eax_4 = sub_566240(&var_2650, edx, 2, &var_2650, &data_78de88)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_64f25524bf62cd0aa18f6bade8a9f3d6>,bool,enum CardID>::VTable
    * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_64f25524bf62cd0aa18f6bade8a9f3d6>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0[0x314]
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_64f25524bf62cd0aa18f6bade8a9f3d6>,bool,enum CardID>::VTable
    * const* var_1974 = &var_1998
int32_t var_14_1 = 0
void* var_cb8
int32_t* var_30_1 = &var_cb8
void var_1938
void* eax_5 = &var_1938
void* var_34_1 = &var_1938
void var_5c
void* var_193c = &var_5c
int32_t var_38 = 0
var_14_1.b = 1

if (var_1974 != 0)
    eax_5 = (*var_1974)->vFunc_0(&var_5c)
    void* var_38_1 = eax_5

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_58
int32_t* var_54
int32_t esi_1 = GSI1::OffForSym(eax_5, var_30_1, &var_cb0, var_5c, var_58, var_54)
int32_t var_30_2 = esi_1

if (var_1974 != 0)
    (*var_1974)->vFunc_4(var_1974 != &var_1998)

int32_t eax_13 = *(*(sub_573400() + 4) + 0x1504)

if (eax_13 != 3 && eax_13 != 5 && eax_13 != 4 && eax_13 != 6)
    void* var_4c
    __builtin_memset(&var_4c, 0, 0x20)
    void* var_48
    int128_t* var_44
    int32_t var_40
    int32_t var_3c
    int32_t var_38_2
    int32_t var_34_2
    int32_t var_30_4
    sub_61b1b0(eax_13, 7, eax_13 == 2, 0xffffffff, 0, 1, var_4c, var_48, var_44, var_40, var_3c, 
        var_38_2, var_34_2, var_30_4)

if (esi_1 != 0)
    sub_56e9c0(1)
    int64_t var_196c
    __builtin_memset(&var_196c, 0, 0x2c)
    int128_t var_19c8 = 0x23.o
    int32_t var_1960
    int128_t var_19b8_1 = var_1960.o
    int64_t var_1950
    int128_t var_19a8_1 = var_1950.o
    int32_t* eax_14 = sub_563c40(&var_19c8, 7, 0)
    sub_562400(eax_14, 0x3ee, eax_14, 0)
    int32_t ecx_5 = 0
    
    if (esi_1 s> 0)
        do
            if (var_cb0[ecx_5] == eax_14)
                var_cb0[ecx_5] = var_cb0[esi_1 - 1]
                esi_1 -= 1
                break
            
            ecx_5 += 1
        while (ecx_5 s< esi_1)
    
    int32_t edx_5 = 0
    
    if (esi_1 s> 0)
        void* ecx_6 = var_cb8
        
        do
            int32_t eax_16 = var_cb0[edx_5]
            edx_5 += 1
            *(&var_1938 + (ecx_6 << 2)) = eax_16
            ecx_6 = var_cb8 + 1
            var_cb8 = ecx_6
        while (edx_5 s< esi_1)

void* eax_17 = sub_573400()
*(eax_17 + 0xc)
*(eax_17 + 4)
uint32_t result = sub_582eb0(&var_1938, var_cb8, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
