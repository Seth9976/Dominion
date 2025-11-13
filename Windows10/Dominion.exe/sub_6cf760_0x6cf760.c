// 函数: sub_6cf760
// 地址: 0x6cf760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770c29
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_b0 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5
uint128_t xmm0
uint128_t xmm1

if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
    xmm0 = *(arg3 + 0x10)
    eax_5 = *(arg3 + 0x30)
    xmm1 = *(arg3 + 0x20)
else
    xmm0 = *(arg2 + 0x484)
    eax_5 = *(arg2 + 0x4a4)
    xmm1 = *(arg2 + 0x494)

int32_t var_38 = eax_5
uint128_t var_24 = xmm0
uint128_t var_58 = xmm0
uint128_t var_48 = xmm1
uint128_t var_94
int128_t var_80 = *sub_4eb2f0(&var_94, arg2, &var_58:0xc, &var_94)
uint128_t xmm0_3 = var_24
uint128_t var_74
var_74:4.q = xmm0_3
var_74:0xc.d = _mm_bsrli_si128(xmm0_3, 8)
float var_34[0x4] = xmm1:8.d.o
var_24 = var_74
float var_a4[0x4]
sub_4eb600(arg2 + 0x3c, &var_34, &var_a4, arg2 + 0x3c)
float xmm0_7[0x4] = var_a4
int32_t* result = *(arg3 + 0xb4)
uint128_t xmm6 = var_94
var_34 = xmm0_7
var_24 = xmm6
char const* const var_bc
int32_t var_b8_1
char const* const var_b4_4
char* ecx_12

if (result u> 3)
    var_b4_4 = "FabLightDraw"
    var_b8_1 = 0x53c
label_6cfc77:
    var_bc = "C:\x\ax2017\Engine\FabDef.cpp"
    ecx_12 = "Halt"
label_6cfc86:
    sub_63b870(result, &data_801800, ecx_12, var_bc, var_b8_1, var_b4_4)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float var_60

switch (result)
    case nullptr
        var_b4_4 = "FabLightDraw"
        var_b8_1 = 0x539
        goto label_6cfc77
    case 1
        int32_t ecx_8 = *arg4
        
        if (ecx_8 s< 4)
            float xmm5_2 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xaa)
            float xmm1_2 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xff)
            float xmm4_2 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0x55)
            *arg4 = ecx_8 + 1
            float xmm2_3 = xmm5_2 * xmm4_2 - xmm1_2 f* xmm6
            float xmm3_3 = xmm1_2 * xmm5_2 + xmm6.d * xmm4_2
            float var_64 = xmm2_3 + xmm2_3
            float var_5c_2 = xmm3_3 + xmm3_3
            var_60 = xmm5_2 * xmm5_2 - xmm1_2 * xmm1_2 + xmm6.d f* xmm6 - xmm4_2 * xmm4_2
            sub_645840(ecx_8 + 1, arg3 + 0xb8, &var_64, ecx_8)
        
        result = data_cf65b8
        
        if (*(result + 0x39) == 0)
            goto label_6cf996
        
        sub_6830d0(&var_34)
        void* eax_16 = data_147b06c
        var_60 = 0.5f
        int32_t var_5c_3 = 0x3f000000
        *(eax_16 + 0x2dc) = 0
        uint128_t xmm0_16 = *sub_5af7f0(&var_80:0xc, &var_60, &data_7ffb14, &var_80:0xc)
        void* ThreadLocalStoragePointer_1 = fsbase->ThreadLocalStoragePointer
        var_24 = xmm0_16
        void* esi_1 = *ThreadLocalStoragePointer_1
        int32_t eax_19 = data_1a9a318
        
        if (eax_19 s> *(esi_1 + 8))
            eax_19 = sub_75970e(&data_1a9a318)
            
            if (data_1a9a318 == 0xffffffff)
                int32_t var_8_3 = 1
                data_1a9a31c = sub_69f030("sys/editor/light.texture", 3)
                int32_t var_8_4 = 0xffffffff
                eax_19 = __Init_thread_footer(&data_1a9a318)
        
        sub_682a60(eax_19, &var_24, data_1a9a31c, &data_7ff520, &data_bf23ac, nullptr)
        void* eax_21 = data_147b06c
        *(eax_21 + 0x2dc) = 0
        __builtin_memcpy(eax_21 + 0x124, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        sub_649d30()
        result = data_1a9a320
        
        if (result s> *(esi_1 + 8))
            result = sub_75970e(&data_1a9a320)
            
            if (data_1a9a320 == 0xffffffff)
                int32_t var_8_5 = 2
                data_1a9a324 = sub_69f030("sys/editor/arrow_widget.structure", 2)
                int32_t var_8_6 = 0xffffffff
                result = __Init_thread_footer(&data_1a9a320)
        
        if (data_147aba1 == 0)
            var_b4_4 = "Draw3DSetMaterialColor"
            var_b8_1 = 0x304
            var_bc = "C:\x\ax2017\Engine\Draw3d.cpp"
            ecx_12 = "gDraw3DData.submittingRenderItems"
            goto label_6cfc86
        
        uint128_t xmm1_4 = var_94
        int32_t* ecx_13 = data_1a9a324
        data_cf6a70 = data_893570
        float xmm0_18[0x4] = var_a4
        var_34 = xmm0_18
        var_24 = xmm1_4
        var_34[0] = fconvert.s(fconvert.d(xmm0_18) * 0.5)
        result = sub_648920(result, &var_34, ecx_13, 0, 0, 0)
        
        if (data_147aba1 != 0)
            data_cf6a70 = data_7fefb0
        label_6cf996:
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        
        var_b4_4 = "Draw3DSetMaterialColor"
        var_b8_1 = 0x304
        var_bc = "C:\x\ax2017\Engine\Draw3d.cpp"
        ecx_12 = "gDraw3DData.submittingRenderItems"
        goto label_6cfc86
    case 2
        var_b4_4 = "FabLightDraw"
        var_b8_1 = 0x536
        goto label_6cfc77
    case 3
        data_cf6a40.d = *(arg3 + 0xc8)
        result = data_cf65b8
        data_cf6a40:4.o = *(arg3 + 0xb8)
        
        if (*(result + 0x39) != 0)
            sub_6830d0(&var_34)
            void* eax_10 = data_147b06c
            var_60 = 0.5f
            int32_t var_5c_1 = 0x3f000000
            *(eax_10 + 0x2dc) = 0
            uint128_t xmm0_9 = *sub_5af7f0(&var_94, &var_60, &data_7ffb14, &var_94)
            void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
            var_24 = xmm0_9
            int32_t eax_13 = data_1a9a310
            
            if (eax_13 s> *(*ThreadLocalStoragePointer + 8))
                eax_13 = sub_75970e(&data_1a9a310)
                
                if (data_1a9a310 == 0xffffffff)
                    int32_t var_8_1 = 0
                    data_1a9a314 = sub_69f030("sys/editor/env_probe.texture", 3)
                    int32_t var_8_2 = 0xffffffff
                    eax_13 = __Init_thread_footer(&data_1a9a310)
            
            sub_682a60(eax_13, &var_24, data_1a9a314, &data_7ff520, &data_bf23ac, nullptr)
            result = data_147b06c
            result[0xb7] = 0
            __builtin_memcpy(&result[0x49], 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x
                    00", 
                0x41)
            sub_649d30()
        
        goto label_6cf996
