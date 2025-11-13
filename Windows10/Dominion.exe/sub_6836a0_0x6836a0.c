// 函数: sub_6836a0
// 地址: 0x6836a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76dc6d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_84 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *fsbase->ThreadLocalStoragePointer
float var_54
int128_t var_44

if (data_1a99fe4 s> *(esi + 8))
    sub_75970e(&data_1a99fe4)
    
    if (data_1a99fe4 == 0xffffffff)
        var_54 = -0f
        int32_t var_50_1 = 0xbf800000
        int32_t var_4c_1 = 0x80000000
        data_1a99fe8 =
            *sub_4ac840(&var_44:0xc, &var_54, &data_7fef74, &var_44:0xc, 0x7fef20, &data_7fef14)
        __Init_thread_footer(&data_1a99fe4)

if (data_1a99ff8 s> *(esi + 8))
    sub_75970e(&data_1a99ff8)
    
    if (data_1a99ff8 == 0xffffffff)
        data_1a99ffc = *
            sub_4ac840(&var_44:0xc, &data_7fef74, &data_7fef98, &var_44:0xc, 0x7fef20, &data_7fef14)
        __Init_thread_footer(&data_1a99ff8)

if (data_1a9a00c s> *(esi + 8))
    sub_75970e(&data_1a9a00c)
    
    if (data_1a9a00c == 0xffffffff)
        int128_t* ecx_1 = &data_1a99ffc
        
        if (*(data_cf65b8 + 0x31) == 0)
            ecx_1 = &data_1a99fe8
        
        data_1a9a010 = *ecx_1
        __Init_thread_footer(&data_1a9a00c)

if (data_1a9a020 s> *(esi + 8))
    sub_75970e(&data_1a9a020)
    
    if (data_1a9a020 == 0xffffffff)
        data_1a9a024 = 0xffffffff
        __Init_thread_footer(&data_1a9a020)

if (data_1a9a028 s> *(esi + 8))
    sub_75970e(&data_1a9a028)
    
    if (data_1a9a028 == 0xffffffff)
        int32_t ecx_2
        ecx_2.b = *(data_cf65b8 + 0x31) == 0
        data_1a9a02c = (ecx_2 << 1) + 0xffffffff
        __Init_thread_footer(&data_1a9a028)

float eax_16
int64_t xmm0_5
float xmm2_2
float xmm3_2

if (sub_646520() == 0)
    void* eax_17 = data_cf65b8
    uint128_t xmm3_3 = zx.o(*(eax_17 + 0x14))
    uint128_t xmm2_3 = zx.o(*(eax_17 + 0x18))
    eax_16 = data_cf6664
    var_44 = data_cf664c
    xmm0_5 = data_cf665c
    xmm3_2 = _mm_cvtepi32_ps(xmm3_3)
    xmm2_2 = _mm_cvtepi32_ps(xmm2_3)
else
    uint128_t xmm2 = zx.o(data_147d1e0)
    int128_t xmm0_4 = data_cf6668
    eax_16 = data_cf6680
    xmm3_2 = _mm_cvtepi32_ps(zx.o(data_147d1dc)) * 0.25f
    xmm2_2 = _mm_cvtepi32_ps(xmm2) * 0.25f
    var_44 = xmm0_4
    xmm0_5 = data_cf6678

float xmm6 = var_44:8.d
float xmm4_1 = data_cf65c0 / (xmm2_2 * 0.5f)
float xmm0_11 = _mm_cvtepi32_ps(zx.o(data_1a9a024)) * xmm3_2
float xmm3_4 = var_44:4.d
float xmm0_13 = xmm0_11 * 0.5f * xmm4_1
float xmm0_16 = _mm_cvtepi32_ps(zx.o(data_1a9a02c)) * xmm2_2
float xmm2_4 = var_44.d
float xmm5_1 = xmm3_4 * xmm2_4
float xmm0_18 = xmm0_16 * 0.5f * xmm4_1
float var_38
float xmm7_1 = xmm6 * var_38
float xmm0_20 = xmm2_4 * xmm2_4
float xmm1_1 = var_38 * var_38
float xmm0_22 = xmm3_4 * xmm3_4
float xmm0_24 = xmm6 * xmm6
float xmm0_26 = xmm5_1 - xmm7_1
float xmm7_3 = xmm6 * xmm2_4
float xmm2_6 = xmm1_1 - xmm0_20
float xmm3_6 = var_44:8.d f* var_44:4.d
float xmm6_2 = xmm3_4 * var_38
float xmm2_8 = var_44.d * var_38
float xmm4_4 = xmm2_8 + xmm3_6
float xmm4_8 = (xmm0_20 + xmm1_1 - xmm0_22 - xmm0_24) * xmm0_13
float var_5c_1 = xmm4_8

if (data_1a9a030 s> *(esi + 8))
    sub_75970e(&data_1a9a030)
    
    if (data_1a9a030 == 0xffffffff)
        int32_t var_14_1 = 0
        data_1a9a034 = sub_69f030("sys/sprite_3d_no_zread.material", 5)
        int32_t var_14_2 = 0xffffffff
        __Init_thread_footer(&data_1a9a030)

if (data_1a9a038 s> *(esi + 8))
    sub_75970e(&data_1a9a038)
    
    if (data_1a9a038 == 0xffffffff)
        int32_t var_14_3 = 1
        data_1a9a03c = sub_69f030("sys/SpineTint.material", 5)
        __Init_thread_footer(&data_1a9a038)

float xmm7_5 = var_44.d
*(data_147b06c + 0x2dc) = data_1a9a03c
float xmm5_2 = data_1a9a010:0xc
float xmm4_17 = data_1a9a010.d
float xmm3_8 = data_1a9a010:4
float xmm2_9 = data_1a9a010:8
float var_4c_2 = xmm5_2 * var_38 - xmm4_17 * xmm7_5 - xmm3_8 f* var_44:4.d - xmm2_9 f* var_44:8.d
float xmm1_23 = xmm5_2 * xmm7_5 + xmm4_17 * var_38 + xmm2_9 f* var_44:4.d - xmm3_8 f* var_44:8.d
float xmm4_18 = xmm4_17 f* var_44:4.d
int64_t var_34
var_34:4.d = (xmm7_1 + xmm5_1) * (xmm0_13 + xmm0_13) + xmm2_6 + xmm0_22 - xmm0_24
    + (xmm0_18 + xmm0_18) * (xmm3_6 - xmm2_8) f+ xmm0_5:4.d
float xmm5_5 = xmm5_2 f* var_44:8.d + xmm2_9 * var_38 + xmm3_8 * xmm7_5
var_54 = xmm5_2 f* var_44:4.d + xmm3_8 * var_38 + xmm4_17 f* var_44:8.d - xmm2_9 * xmm7_5
float var_2c_1 = (xmm0_13 + xmm0_13) * (xmm7_3 - xmm6_2) + xmm4_4 + xmm4_4
    + (xmm2_6 - xmm0_22 + xmm0_24) * xmm0_18 + eax_16
float var_50_2 = xmm5_5 - xmm4_18
var_44 = xmm1_23.o
var_34.d = xmm4_8 + xmm0_26 + xmm0_26 + (xmm6_2 + xmm7_3) * (xmm0_18 + xmm0_18) f+ xmm0_5.d
*arg1 = xmm4_1.o
arg1[1] = var_38.o
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg1)
return arg1
