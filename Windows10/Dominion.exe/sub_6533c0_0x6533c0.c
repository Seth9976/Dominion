// 函数: sub_6533c0
// 地址: 0x6533c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76cee1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_cc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_d4_1
char const* const var_d0_1
char* eax_4
char* ecx

if (arg5 == 0 || *(arg3 + 0x14e0) == 0)
label_653458:
    void* esi_1 = *fsbase->ThreadLocalStoragePointer
    int128_t var_c0
    
    if (data_1a98fcc s> *(esi_1 + 8))
        sub_75970e(&data_1a98fcc)
        
        if (data_1a98fcc == 0xffffffff)
            memset(&var_c0, 0, 0x88)
            __builtin_memcpy(0x1a98fd0, &var_c0, 0x88)
            __Init_thread_footer(&data_1a98fcc)
    
    if (data_1a99058 s> *(esi_1 + 8))
        sub_75970e(&data_1a99058)
        
        if (data_1a99058 == 0xffffffff)
            int32_t var_14_1 = 0
            sub_653220()
            _atexit(sub_774160)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_1a99058)
    
    void* edx_2 = arg4
    __builtin_memcpy(arg2, 0x1a98fd0, 0x88)
    __builtin_memcpy(edx_2, 0x1a99060, 0x1e0)
    eax_4 = *(edx_2 + 0x1e0)
    void* esi_2 = edx_2 + 0x1e0
    
    if (eax_4 != 0 && eax_4 != &data_801800)
        if (data_cf65bc != 0 && *eax_4 != 0)
            eax_4 = sub_63d4e0(esi_2)
            int32_t temp1_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp1_1 == 1)
                eax_4 = sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
            
            edx_2 = arg4
        
        *esi_2 = &data_801800
    
    if (*(edx_2 + 0xc) != 0)
        int32_t var_78 = 0x3f800000
        int64_t var_74 = 0
        int64_t var_6c
        __builtin_memset(&var_6c, 0, 0x24)
        int32_t var_4c = 0
        int32_t var_44 = 0xffffffff
        *(arg3 + 0xc14) = var_78.o
        int32_t var_48 = 1
        int32_t var_78_1 = 0x3f800000
        uint32_t count = 0x68
        *(arg3 + 0xc24) = var_6c:4.o
        int32_t c = 0
        void var_b0
        void* var_d8_2 = &var_b0
        int64_t var_5c
        *(arg3 + 0xc34) = var_5c:4.o
        *(arg3 + 0xc44) = var_48.q
        int64_t var_74_1
        __builtin_memset(&var_74_1, 0, 0x2c)
        int32_t var_44_1 = 0xffffffff
        int32_t var_48_1 = 1
        *(arg3 + 0xe3c) = var_78_1.o
        int32_t var_78_2 = 0x3f800000
        *(arg3 + 0xc4c) = 0
        int64_t var_6c_1
        *(arg3 + 0xe4c) = var_6c_1:4.o
        int64_t var_5c_1
        *(arg3 + 0xe5c) = var_5c_1:4.o
        *(arg3 + 0xe6c) = var_48_1.q
        int64_t var_74_2
        __builtin_memset(&var_74_2, 0, 0x2c)
        int32_t var_44_2 = 0xffffffff
        int32_t var_48_2 = 1
        *(arg3 + 0xdc4) = var_78_2.o
        *(arg3 + 0xe74) = 0
        int64_t var_6c_2
        *(arg3 + 0xdd4) = var_6c_2:4.o
        int64_t var_5c_2
        *(arg3 + 0xde4) = var_5c_2:4.o
        *(arg3 + 0xdf4) = var_48_2.q
        *(arg3 + 0xdfc) = 0
        int32_t edx_3 = memset(var_d8_2, c, count)
        int32_t var_40 = 0
        int32_t var_44_3 = 0xffffffff
        int32_t var_48_3 = 1
        var_c0 = data_7ff520
        __builtin_memcpy(arg3 + 0xd40, &var_c0, 0x84)
        int128_t var_80
        int32_t* eax_8 = sub_67db20(&var_80:8, 0xffffffff)
        int128_t xmm1 = *(eax_8 + 0x10)
        int128_t xmm2 = *(eax_8 + 0x20)
        int64_t xmm3 = *(eax_8 + 0x30)
        int32_t eax_9 = eax_8[0xe]
        *(arg3 + 0xfbc) = *eax_8
        *(arg3 + 0xfcc) = xmm1
        *(arg3 + 0xfdc) = xmm2
        *(arg3 + 0xfec) = xmm3
        *(arg3 + 0xff4) = eax_9
        int32_t* eax_10 = sub_67db20(&var_80:8, 0xffffffff)
        int128_t xmm1_1 = *(eax_10 + 0x10)
        int128_t xmm2_1 = *(eax_10 + 0x20)
        int64_t xmm3_1 = *(eax_10 + 0x30)
        int32_t eax_11 = eax_10[0xe]
        *(arg3 + 0xff8) = *eax_10
        *(arg3 + 0x1008) = xmm1_1
        *(arg3 + 0x1018) = xmm2_1
        *(arg3 + 0x1028) = xmm3_1
        *(arg3 + 0x1030) = eax_11
        int32_t* eax_12 = sub_67db20(&var_80:8, 0xffffffff)
        int128_t xmm1_2 = *(eax_12 + 0x10)
        int128_t xmm2_2 = *(eax_12 + 0x20)
        int64_t xmm3_2 = *(eax_12 + 0x30)
        int32_t eax_13 = eax_12[0xe]
        *(arg3 + 0x1034) = *eax_12
        *(arg3 + 0x1044) = xmm1_2
        *(arg3 + 0x1054) = xmm2_2
        *(arg3 + 0x1064) = xmm3_2
        *(arg3 + 0x106c) = eax_13
        int32_t* eax_14 = sub_67db20(&var_80:8, 0xffffffff)
        int128_t xmm1_3 = *(eax_14 + 0x10)
        int128_t xmm2_3 = *(eax_14 + 0x20)
        int64_t xmm3_3 = *(eax_14 + 0x30)
        int32_t eax_15 = eax_14[0xe]
        *(arg3 + 0x1070) = *eax_14
        *(arg3 + 0x1080) = xmm1_3
        *(arg3 + 0x1090) = xmm2_3
        *(arg3 + 0x10a0) = xmm3_3
        *(arg3 + 0x10a8) = eax_15
        int32_t* eax_16 = sub_67db20(&var_80:8, 0xffffffff)
        int128_t xmm1_4 = *(eax_16 + 0x10)
        int128_t xmm2_4 = *(eax_16 + 0x20)
        int64_t xmm3_4 = *(eax_16 + 0x30)
        int32_t eax_17 = eax_16[0xe]
        *(arg3 + 0x10ac) = *eax_16
        *(arg3 + 0x10bc) = xmm1_4
        *(arg3 + 0x10cc) = xmm2_4
        *(arg3 + 0x10dc) = xmm3_4
        *(arg3 + 0x10e4) = eax_17
        int32_t* eax_18 = sub_67db20(&var_80:8, 0)
        int128_t xmm1_5 = *(eax_18 + 0x10)
        int128_t xmm2_5 = *(eax_18 + 0x20)
        int64_t xmm3_5 = *(eax_18 + 0x30)
        int32_t eax_19 = eax_18[0xe]
        *(arg3 + 0x10e8) = *eax_18
        *(arg3 + 0x10f8) = xmm1_5
        *(arg3 + 0x1108) = xmm2_5
        *(arg3 + 0x1118) = xmm3_5
        *(arg3 + 0x1120) = eax_19
        int32_t* eax_21 = sub_67dc00(&var_80:8, edx_3, 0, &var_80:8)
        int128_t xmm1_6 = *(eax_21 + 0x10)
        int128_t xmm2_6 = *(eax_21 + 0x20)
        int64_t xmm3_6 = *(eax_21 + 0x30)
        int32_t eax_22 = eax_21[0xe]
        *(arg3 + 0xe78) = *eax_21
        *(arg3 + 0xe88) = xmm1_6
        *(arg3 + 0xe98) = xmm2_6
        *(arg3 + 0xea8) = xmm3_6
        *(arg3 + 0xeb0) = eax_22
        int32_t* eax_24 = sub_67dc00(&var_80:8, edx_3, 0, &var_80:8)
        uint32_t count_1 = 0x40
        int128_t xmm1_7 = *(eax_24 + 0x10)
        int32_t c_1 = 0
        int128_t xmm2_7 = *(eax_24 + 0x20)
        int64_t xmm3_7 = *(eax_24 + 0x30)
        int32_t eax_25 = eax_24[0xe]
        *(arg3 + 0xeb4) = *eax_24
        *(arg3 + 0xec4) = xmm1_7
        *(arg3 + 0xed4) = xmm2_7
        *(arg3 + 0xee4) = xmm3_7
        *(arg3 + 0xeec) = eax_25
        void var_88
        uint32_t result = memset(&var_88, c_1, count_1)
        int32_t var_8c = 0x3f000000
        int32_t var_44_4 = 0xffffffff
        int32_t var_48_4 = 1
        *(arg3 + 0xef0) = 0x3f000000.o
        *(arg3 + 0x1484) = 0x3f800000
        int128_t xmm0_22 = var_80
        *(arg3 + 0x14a4) = 0x3f800000
        *(arg3 + 0x1444) = 0x42480000
        *(arg3 + 0xf00) = xmm0_22
        *(arg3 + 0x144c) = 0x3f800000
        int128_t xmm0_23 = var_74_2:4.o
        *(arg3 + 0x15b0) = 0
        *(arg3 + 0xf10) = xmm0_23
        int64_t var_64
        *(arg3 + 0xf20) = var_64:4.o
        int64_t var_54
        *(arg3 + 0xf30) = var_54:4.o
        *(arg3 + 0xf40) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    var_d0_1 = "UI2ItemReset"
    var_d4_1 = 0x162f
    ecx = "propsStatic.itemAlignment != TA_NONE"
else
    eax_4 = *(arg3 + 0x189c)
    
    if (eax_4 s>= 0)
        if (eax_4 == 0)
            goto label_653458
        
        var_d0_1 = "UI2ItemReset"
        var_d4_1 = 0x1622
        ecx = "ui.countChildren() == 0"
    else
        var_d0_1 = "UI2::countChildren"
        var_d4_1 = 0xba8
        ecx = "numChildren >= 0"

sub_63b870(eax_4, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_d4_1, var_d0_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
