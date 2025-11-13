// 函数: sub_730c10
// 地址: 0x730c10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7728d2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_a4 = esi
int32_t edi
int32_t var_a8 = edi
int32_t __saved_ebp
int32_t var_ac = __security_cookie ^ &__saved_ebp
int32_t* esp = &var_ac
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0
uint32_t result = data_19e2774

if (result == 0)
    sub_649ab0()
    char* xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c)))
    char* var_60 = xmm0_2
    char* var_5c = xmm0_2
    int32_t var_a0 = sub_4acb60(&__saved_ebp, 0.785398185f)
    int32_t var_9c_1 = 0x3f800000
    int32_t var_98_1 = 0x3dcccccd
    int128_t var_90 = data_bf21e8
    int32_t var_94_1 = 0x42c80000
    char var_70_1 = 0
    int32_t var_6c_1 = 0x3f800000
    int128_t var_80_1 = data_bf21f8
    int32_t edx_1 = sub_646220(&var_a0)
    void* ThreadLocalStoragePointer_1 = fsbase->ThreadLocalStoragePointer
    data_cf65f8 = 0xff00ffff
    void* esi_2 = *ThreadLocalStoragePointer_1
    int32_t* var_b0
    
    if (data_1a9a3d0 s> *(esi_2 + 8))
        var_b0 = &data_1a9a3d0
        edx_1 = sub_75970e(var_b0)
        
        if (data_1a9a3d0 == 0xffffffff)
            int32_t var_14_1 = 0
            int32_t eax_4 = sub_69f030("sys/white_pixel.texture", 3)
            var_b0 = &data_1a9a3d0
            data_1a9a3d4 = eax_4
            int32_t var_14_2 = 0xffffffff
            edx_1 = __Init_thread_footer(var_b0)
    
    if (data_1a9a3d8 s> *(esi_2 + 8))
        var_b0 = &data_1a9a3d8
        edx_1 = sub_75970e(var_b0)
        
        if (data_1a9a3d8 == 0xffffffff)
            int32_t var_14_3 = 1
            int32_t eax_6 = sub_69f030("sys/pbr/ibl_brdf_lut.material", 5)
            var_b0 = &data_1a9a3d8
            data_1a9a3dc = eax_6
            int32_t var_14_4 = 0xffffffff
            edx_1 = __Init_thread_footer(var_b0)
    
    var_b0 = &var_90:8
    int128_t* eax_8 = sub_683290(&var_90:8, edx_1, &var_60, var_b0)
    int128_t var_48 = *eax_8
    int128_t var_38 = eax_8[1]
    int32_t eax_9 = sub_683220(&var_48)
    char* xmm0_8 = var_60
    var_b0 = data_1a9a3dc
    int32_t* ecx_3 = data_1a9a3d4
    var_38.d = 0
    var_38:4.d = 0
    var_38:8.d = xmm0_8
    var_38:0xc.d = xmm0_8
    var_38 = var_38
    sub_682a60(eax_9, &var_38, ecx_3, &data_7ff520, &data_bf23ac, var_b0)
    void* eax_10 = data_147b06c
    *(eax_10 + 0x2dc) = 0
    __builtin_memcpy(eax_10 + 0x124, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
        0x41)
    sub_649d30()
    sub_649c00()
    int32_t* eax_12 = *(data_147b07c + 0x7c)
    char* edx_3 = *eax_12
    
    if (edx_3 == 0)
        var_b0 = "XString::XString"
        sub_63b870(eax_12, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, var_b0)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    char* const var_54
    sub_63d720(&var_54, edx_3)
    int32_t var_14_5 = 2
    sub_63d720(&var_5c, U".")
    var_14_5.b = 3
    char* const var_58
    sub_63d720(&var_58, "sys/pbr/brdf_lut")
    var_14_5.b = 5
    char* esi_3 = var_58
    char* const var_4c = esi_3
    
    if (esi_3 != 0 && *esi_3 != 0)
        char* eax_13 = sub_63d4e0(&var_4c)
        *(eax_13 + 4) += 1
    
    char* edi_1 = var_5c
    int32_t var_50_1 = 1
    char* const eax_14 = &data_801800
    
    if (edi_1 != 0)
        eax_14 = edi_1
    
    var_b0 = eax_14
    sub_63d960(&var_4c, var_b0)
    var_b0 = &var_54
    char* var_64
    sub_63dde0(&var_4c, &var_64, var_b0)
    int32_t var_50_2 = 0
    var_14_5.b = 8
    
    if (data_cf65bc != 0)
        char* eax_15 = var_4c
        
        if (eax_15 != 0 && *eax_15 != 0)
            char* eax_16 = sub_63d4e0(&var_4c)
            int32_t temp0_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                var_4c = &data_801800
    
    var_14_5.b = 0xa
    
    if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
        char* eax_17 = sub_63d4e0(&var_58)
        int32_t temp1_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
            var_58 = &data_801800
    
    var_14_5.b = 0xc
    
    if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
        char* eax_18 = sub_63d4e0(&var_5c)
        int32_t temp2_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
            var_5c = &data_801800
    
    var_14_5.b = 0xe
    
    if (data_cf65bc != 0)
        char* eax_19 = var_54
        
        if (eax_19 != 0 && *eax_19 != 0)
            char* eax_20 = sub_63d4e0(&var_54)
            int32_t temp3_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                var_54 = &data_801800
    
    char* const edx_12 = &data_801800
    var_14_5.b = 0xd
    char* eax_21 = var_64
    int32_t ecx_18 = *(arg1 + 0x1c)
    
    if (eax_21 != 0)
        edx_12 = eax_21
    
    var_b0 = edx_12
    int32_t eax_22 = sub_6a1230(eax_21, ecx_18, ecx_18, *(arg1 + 0x20), 3, var_b0)
    int32_t ecx_19 = data_1a9a3e0
    int32_t esi_4 = eax_22
    void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
    data_19e2774 = esi_4
    
    if (ecx_19 s> *(*ThreadLocalStoragePointer + 8))
        var_b0 = &data_1a9a3e0
        int32_t eax_23 = sub_75970e(var_b0)
        
        if (data_1a9a3e0 == 0xffffffff)
            var_b0 = nullptr
            var_14_5.b = 0xf
            int32_t ecx_20 = *(arg1 + 0x1c)
            data_1a9a3e4 = sub_6a1230(eax_23, ecx_20, ecx_20, 0x50, 4, var_b0)
            var_14_5.b = 0xd
            var_b0 = &data_1a9a3e0
            __Init_thread_footer(var_b0)
        
        esi_4 = data_19e2774
    
    void* eax_25 = data_cf65b8
    
    if (*(eax_25 + 0x1c) != 0)
        var_b0 = "HDRMakeBRDFLUT"
        sub_63b870(eax_25, &data_801800, "gAppInterface->mMultisamples == 0", 
            "C:\x\ax2017\Engine\IBLImport.cpp", 0x2a0, var_b0)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* ecx_21 = data_147b06c
    int32_t edx_16 = data_1a9a3e4
    var_b0 = nullptr
    *(ecx_21 + 0x2cc) += 1
    int32_t eax_27 = *(ecx_21 + 0x2cc) * 5
    *(ecx_21 + (eax_27 << 2) + 0x18c) = 2
    *(ecx_21 + (eax_27 << 2) + 0x194) = esi_4
    *(ecx_21 + (eax_27 << 2) + 0x198) = edx_16
    *(ecx_21 + (eax_27 << 2) + 0x19c) = 0
    sub_6ad5d0(eax_27, edx_16, esi_4, var_b0.b)
    int32_t eax_28 = *data_147b070
    var_b0 = nullptr
    (*(eax_28 + 0x90))(data_cf65f8)
    esp = &var_b0
    sub_645e30()
    sub_649120()
    sub_6494f0(2)
    sub_649c60()
    glFlush()
    sub_6adb80()
    uint32_t result_1 = data_19e2774
    int32_t var_14_6 = 0x10
    
    if (data_cf65bc != 0)
        char* eax_29 = var_64
        
        if (eax_29 != 0 && *eax_29 != 0)
            char* eax_30 = sub_63d4e0(&var_64)
            int32_t temp4_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
CookieCheckFunction(result)
return result
