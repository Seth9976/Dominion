// 函数: sub_5bc6a0
// 地址: 0x5bc6a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7692aa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_38 = arg3
int32_t* var_98 = arg3
int32_t var_58 = 0
int32_t var_14_1 = 1
char* var_144
void* arg_c
char** eax_4
int32_t edx_1
eax_4, edx_1 = sub_5be8d0(&ExceptionList, &arg_c, &var_144, "/kernel")
float eax_5 = sub_5b0f90(eax_4, edx_1, arg2, var_144)
float var_24 = eax_5
char** eax_6
int32_t edx_3
eax_6, edx_3 = sub_5be8d0(eax_5.b, &arg_c, &var_144, "/bias")
int32_t* eax_7 = sub_5b10e0(eax_6, edx_3, arg2)
*arg3 = 0
arg3[1] = 0
int32_t var_58_1 = 1
int32_t* var_2c = arg3
void* var_4c = nullptr
int32_t* var_38_1 = &var_4c
float edi_1 = var_24
void* var_48
int32_t* var_28 = &var_48
void* eax_8 = nullptr
int32_t* esi_1 = *(edi_1 i+ 8)
var_48 = nullptr
int32_t var_44 = 0
var_14_1.b = 4
struct std::exception::std::bad_alloc::VTable* exceptionObject_1

if (esi_1 != 0)
    if (divs.dp.d(0x7fffffff, esi_1) s< 1)
        sub_5c8e10(&exceptionObject_1)
        _CxxThrowException(&exceptionObject_1, &data_8c059c)
        noreturn
    
    if (esi_1 s<= 0)
        eax_8 = nullptr
    else
        eax_8 = sub_5c0320(esi_1)
    
    var_48 = eax_8

var_14_1.b = 5
var_4c = eax_8
int32_t** var_130 = &var_28
int32_t var_138 = 1
var_28 = nullptr
sub_5c0390(&exceptionObject_1, var_138, esi_1)
int32_t* edx_6 = esi_1
var_28 = free
int32_t* var_74
void* eax_14

if (edx_6 == var_74)
    eax_14 = var_48
else
    if (var_74 != 0 && divs.dp.d(0x7fffffff, var_74) s< 1)
        struct std::exception::std::bad_alloc::VTable* exceptionObject
        sub_5c8e10(&exceptionObject)
        _CxxThrowException(&exceptionObject, &data_8c059c)
        noreturn
    
    void* eax_13 = var_48
    
    if (eax_13 != 0)
        free(*(eax_13 - 4))
    
    if (var_74 s<= 0)
        edi_1 = var_24
        eax_14 = nullptr
        var_48 = nullptr
        edx_6 = var_74
        int32_t* var_44_3 = var_74
    else
        eax_14 = sub_5c0320(var_74)
        edi_1 = var_24
        edx_6 = var_74
        var_48 = eax_14
        int32_t* var_44_2 = var_74

int32_t* var_130_2 = &var_24
float var_70
var_24 = var_70
sub_5c3cd0(eax_14, edx_6, eax_14, var_130_2)
bool cond:1 = *(edi_1 i+ 8) != 1
var_24 = 1f

if (cond:1)
    sub_5c03d0(&var_48, edi_1, arg4, &var_48, &var_24)
else
    int32_t esi_3 = arg4[1]
    var_14_1.b = 7
    sub_5bbe40(arg4)
    int32_t var_130_3 = esi_3
    var_14_1.b = 5
    int32_t var_94
    sub_5bc1c0(&var_94, *arg4, 1)
    int32_t var_80_1 = 0
    var_14_1.b = 8
    int32_t eax_15 = sub_5bbe40(arg4)
    int32_t esi_5 = *(edi_1 i+ 4)
    var_14_1.b = 9
    sub_5bbe40(edi_1)
    int32_t var_130_4 = 1
    var_14_1.b = 5
    int128_t var_b4
    sub_5c03b0(&var_b4, *edi_1, esi_5)
    float var_a8_1 = edi_1
    int32_t var_a4_1 = 0
    int32_t var_a0_1 = 0
    var_14_1.b = 0xa
    int32_t eax_16 = sub_5bbe40(edi_1)
    int128_t xmm0_1 = var_b4
    int32_t eax_17 = var_94
    int32_t var_90
    int32_t var_ec_1 = var_90
    int32_t var_84
    int32_t var_e0_1 = var_84
    int32_t var_8c
    int32_t var_e8_1 = var_8c
    int32_t var_dc_1 = var_80_1
    int32_t var_9c_1 = eax_16
    int32_t var_d8_1 = eax_15
    int64_t var_c4_1 = var_a4_1.q
    int32_t var_bc_1 = eax_16
    void var_f4
    float xmm0_3
    
    if (sub_5c3ca0(&var_f4) != 0)
        int32_t var_10c_1 = eax_17
        var_14_1.b = 0xc
        int32_t var_104_1 = sub_5bbe40(arg4)
        int32_t var_100_1 = xmm0_1.d
        var_14_1.b = 0xe
        int32_t var_f8_1 = sub_5bbe40(xmm0_1:0xc.d)
        var_14_1.b = 0xf
        void var_110
        void var_2d
        xmm0_3 = sub_5c5e90(&var_f4, &var_2d, &var_110, &var_f4)
    else
        xmm0_3 = (zx.o(0)).d
    
    void* eax_29 = var_48
    *eax_29 = xmm0_3 * var_24 f+ *eax_29

int32_t var_40 = *eax_7
var_14_1.b = 0x11
int32_t* esi_6 = var_2c
int32_t edi_4 = eax_7[1]

if (esi_6[1] != edi_4)
    void* eax_32 = *esi_6
    
    if (eax_32 != 0)
        var_28(*(eax_32 - 4), eax_2)
    
    void* eax_33
    
    if (edi_4 s<= 0)
        eax_33 = nullptr
    else
        eax_33 = sub_5c0320(edi_4)
    
    *esi_6 = eax_33
    esi_6[1] = edi_4
    esi_6 = var_2c

int32_t var_5c = *esi_6
var_14_1.b = 0x13
int32_t* var_6c = &var_5c
void var_50
void* var_68 = &var_50
void var_2e
void* var_64 = &var_2e
int32_t** var_60 = &var_2c
int32_t eax_35 = sub_5c1b00(&var_2c)
int32_t edi_5 = 0
int32_t eax_36
int32_t edx_12
edx_12:eax_36 = sx.q(eax_35)
int32_t eax_38 = (eax_36 + (edx_12 & 3)) & 0xfffffffc
int32_t var_34_1 = eax_38

if (eax_38 s> 0)
    float ecx_22 = 0f
    var_24 = 0f
    
    do
        int32_t ecx_23 = edi_5 << 2
        edi_5 += 4
        *(*var_6c + ecx_23) =
            __addps_xmmps_memps(*(*(var_68 + 4) + ecx_23), *(*(var_68 + 0x10) i+ ecx_22))
        eax_38 = var_34_1
        ecx_22 = var_24 i+ 0x10
        var_24 = ecx_22
    while (edi_5 s< eax_38)

sub_5c3020(eax_38, eax_38, &var_6c, eax_35)
var_14_1.b = 1
sub_5b0e50(&var_48)

if (arg5 != 0)
    void* var_3c
    int32_t* eax_41 = sub_5be9f0(&var_3c, arg3)
    int32_t ecx_28 = *arg3
    *arg3 = *eax_41
    int32_t eax_43 = eax_41[1]
    *eax_41 = ecx_28
    int32_t ecx_29 = arg3[1]
    arg3[1] = eax_43
    eax_41[1] = ecx_29
    void* eax_44 = var_3c
    
    if (eax_44 != 0)
        var_28(*(eax_44 - 4), eax_2)

if (arg6 u> 0xf)
    void* edx_19 = arg_c
    int32_t ecx_31 = arg6 + 1
    void* eax_45 = edx_19
    
    if (ecx_31 u>= 0x1000)
        edx_19 = *(eax_45 - 4)
        ecx_31 += 0x23
        
        if (eax_45 - edx_19 - 4 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    int32_t var_130_10 = ecx_31
    operator new(edx_19)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
