// 函数: sub_533a50
// 地址: 0x533a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765eeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x325c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = nullptr
void var_326c
int32_t var_191c[0x320]
__builtin_memcpy(&var_191c, sub_566240(&var_326c, edx, 2, &var_326c, &data_7bf9d0), 0xc84)
int32_t edi = 0
void* var_25a8 = nullptr
void* var_c9c
void* var_25ac = var_c9c

if (var_c9c s> 0)
    do
        uint32_t esi_2 = zx.d((var_191c[edi]).w)
        void* ebx_1 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t eax_7 = esi_2 * 0x64
        char eax_8 = sub_5754f0(eax_7, *(eax_7 + ebx_1 + 0x1a4c), ebx_1, 2, 0)
        void* edx_2 = var_25a8
        var_25ac = var_c9c
        ebx = edx_2 + 1
        
        if (eax_8 == 0)
            ebx = edx_2
        
        edi += 1
        var_25a8 = ebx
    while (edi s< var_c9c)

void* var_25b0 = nullptr
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a92867737f0bc671aa74725a75ad05c3>,bool,enum CardID>::VTable
    * const var_25e4 = &std::_Func_impl_no_alloc<class <lambda_a92867737f0bc671aa74725a75ad05c3>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_25a4
__builtin_memcpy(&var_25a4, &var_191c, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a92867737f0bc671aa74725a75ad05c3>,bool,enum CardID>::VTable
    * const* var_25c0 = &var_25e4
int32_t* eax_10 = &var_25a8
int32_t var_8_1 = 0
int32_t* var_24_2 = &var_25a8
int32_t var_28_2 = 0
void var_50
var_25a8 = &var_50
int32_t var_2c = 0
var_8_1.b = 2

if (var_25c0 != 0)
    eax_10 = (*var_25c0)->vFunc_0(&var_50)
    int32_t* var_2c_1 = eax_10

var_8_1.b = 0
int32_t eax_12 = GSI1::OffForSym(eax_10, var_25ac, &var_25a4)
int32_t var_8_2 = 0xffffffff

if (var_25c0 != 0)
    (*var_25c0)->vFunc_4(var_25c0 != &var_25e4)

int32_t var_25b8 = *(sub_573400() + 0xc)
int32_t* var_48

if (eax_12 == 0)
    sub_56e9c0(nullptr)
else
    sub_56e9c0(1)
    int32_t ecx_6 = **ecx
    var_48 = &std::_Func_impl_no_alloc<class <lambda_28949cb5f430cd754bea91e2240709f3>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t* var_44_1 = &var_25b0
    void* var_40_1 = &var_25a4
    int32_t* var_3c_1 = &var_25b8
    int32_t** var_24_4 = &var_48
    sub_5698b0(&var_48, &var_25b8, ecx_6, var_48)

void* esi_3 = var_25b0

if (esi_3 != 0)
    void* eax_19 = sub_573400()
    var_25ac = esi_3
    int32_t edi_1 = *(eax_19 + 4)
    var_25a8 = *(eax_19 + 0xc)
    
    if (esi_3 != 0 && sub_582de0(eax_19, esi_3, edi_1, 0x3ee) == 0)
        int32_t var_24_6 = 0
        int32_t var_28_3 = 0x13
        int32_t var_c94
        char var_2c_2 = &var_c94
        var_c94 = 0x3ee
        sub_590de0(&var_25ac, 1, var_2c_2, var_28_3, arg1, var_8_2)
        void* edi_2 = var_25b0
        void* esi_4 = ecx[1]
        
        if (*(esi_4 + 0xc80) s>= 0x320)
            sub_591930()
        
        *(esi_4 + (*(esi_4 + 0xc80) << 2)) = edi_2
        int32_t eax_23 = 0
        *(esi_4 + 0xc80) += 1
        
        if (var_c9c s> 0)
            do
                if (var_191c[eax_23] == var_25b0)
                    void* ecx_11 = var_c9c - 1
                    var_c9c = ecx_11
                    var_191c[eax_23] = var_191c[ecx_11]
                    break
                
                eax_23 += 1
            while (eax_23 s< var_c9c)

void* eax_25 = sub_573400()
void* var_24_7 = nullptr
void* var_28_4 = nullptr
*(eax_25 + 0xc)
int32_t var_2c_3 = 0
int32_t var_30_2 = 0
char var_34_2 = 0
int32_t var_38 = 7
int128_t* var_3c_2 = 0xb
int32_t var_40_2 = 0x3ee
var_48 = &var_191c
*(eax_25 + 4)
int32_t result = sub_582eb0(var_48, var_c9c, var_40_2, var_3c_2, var_38, var_34_2, var_30_2, 
    var_2c_3, var_28_4, var_24_7)

if (ebx == 0)
    result = sub_563590(0x104)
    
    if (result != 0)
        void* eax_26 = sub_573400()
        result = sub_583720(eax_26, *(eax_26 + 0xc), *(eax_26 + 4), result, 0x476, ebx, 0x476, ebx, 
            ebx, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
