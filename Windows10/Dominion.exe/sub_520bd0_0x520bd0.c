// 函数: sub_520bd0
// 地址: 0x520bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7656db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t* ecx = __chkstk(0x2630)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t edi
int32_t var_28 = edi
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
int32_t* edx = *ecx
uint32_t result
int128_t var_d18

if (*(eax_3 + 0xc) != *edx)
    int64_t var_ce4_1
    __builtin_memset(&var_ce4_1, 0, 0x2c)
    var_d18 = 0x50.o
    int32_t var_cd8_1
    int128_t var_d08_2 = var_cd8_1.o
    int64_t var_cc8_1
    int128_t var_cf8_2 = var_cc8_1.o
    result = sub_566540(edi)
    
    if (result != 0)
        result = ecx[1]
        *result &= 0xfffffffd
else
    void* var_19c8
    int32_t eax_6 = sub_568780(&var_19c8, edx, 0x3ea, &var_19c8)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_1cc471ff3364cd52ebe2083b2c4450b1>,bool,enum CardID>::VTable
        * const var_d40 = &std::_Func_impl_no_alloc<class <lambda_1cc471ff3364cd52ebe2083b2c4450b1>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void* var_cb0
    __builtin_memcpy(&var_cb0, eax_6, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_1cc471ff3364cd52ebe2083b2c4450b1>,bool,enum CardID>::VTable
        * const* var_d1c_1 = &var_d40
    void* var_cb4
    int32_t* eax_7 = &var_cb4
    int32_t var_14_1 = 0
    int32_t* var_30_2 = &var_cb4
    int32_t var_34_1 = 0
    void var_5c
    var_cb4 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_d1c_1 != 0)
        eax_7 = (*var_d1c_1)->vFunc_0(&var_5c)
        int32_t* var_38_2 = eax_7
    
    var_14_1.b = 0
    result = GSI1::OffForSym(eax_7, var_30_2, &var_cb0)
    int32_t var_14_2 = 0xffffffff
    uint32_t result_1 = result
    uint32_t result_2 = result_1
    
    if (var_d1c_1 != 0)
        result = (*var_d1c_1)->vFunc_4(var_d1c_1 != &var_d40)
    
    if (result_1 != 0)
        int64_t var_ce4
        __builtin_memset(&var_ce4, 0, 0x2c)
        int32_t var_30_4 = 0
        char var_34_2 = 0
        int32_t var_38_3 = 5
        var_d18 = 0x4f.o
        int32_t var_cd8
        int128_t var_d08_1 = var_cd8.o
        int64_t var_cc8
        int128_t var_cf8_1 = var_cc8.o
        void var_2650
        result = sub_563960(&var_2650, 0, &var_cb0, &var_2650, 1, 0x17, &var_d18, var_38_3, 
            var_34_2, var_30_4)
        __builtin_memcpy(&var_19c8, result, 0xc84)
        int32_t var_d48
        
        if (var_d48 != 0)
            uint32_t count = 0xc80
            void var_cac
            int32_t eax_13 = memset(&var_cac, 0, count)
            void* esi_3 = var_19c8
            int32_t var_30_5 = count + 1
            var_cb0 = esi_3
            result = sub_566370(eax_13, 0x3ea, &var_cb0, 0)
            var_cb4 = esi_3
            
            if (esi_3 != 0)
                void* eax_14 = sub_573400()
                void* var_30_7 = nullptr
                void* var_34_4 = nullptr
                *(eax_14 + 0xc)
                int32_t var_38_5 = 0
                int32_t var_3c_2 = 0
                void* var_50
                __builtin_memcpy(&var_50, 
                    "\x01\x00\x00\x00\xea\x03\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
                *(eax_14 + 4)
                int32_t var_4c
                int128_t* var_48_2
                int32_t var_44_2
                char var_40_2
                result = sub_582eb0(&var_cb4, var_50, var_4c, var_48_2, var_44_2, var_40_2, 
                    var_3c_2, var_38_5, var_34_4, var_30_7)
                
                if (result != 0)
                    result = ecx[1]
                    *result |= 1
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
