// 函数: sub_6ad700
// 地址: 0x6ad700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76fb51
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
(*(*data_147b070 + 0x98))(__security_cookie ^ &__saved_ebp)
void* eax_4 = data_147b06c
*(eax_4 + 0x2cc) = 0
*(eax_4 + 0x170) = 1
*(eax_4 + 0x174) = 1
sub_6ad680(1)
void* eax_5 = data_147abe8

if (eax_5 == 0)
    sub_63b870(eax_5, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float var_50
int128_t var_3c

if ((*(eax_5 + 0x1c) & 0x200) == 0)
    if (data_cc8ddf == 0 || data_147d218 == 0 || data_147d254 == 0)
        void* eax_17 = data_cf65b8
        
        if (*(eax_17 + 0x2b) == 0)
            if (*(eax_17 + 0x28) != 0)
                void* eax_19 = data_147b06c
                *(eax_19 + 4) = *(eax_19 + 0x34)
                *(eax_19 + 0x14) = *(eax_19 + 0x44)
                *(eax_19 + 0x24) = *(eax_19 + 0x54)
            
            (*(*data_147b070 + 0x90))(data_cf65f8, 0)
            sub_645e30()
            sub_6494f0(2)
        else
            sub_6e1520(1)
            int32_t* ecx_7 = data_cf65b8
            data_147abb4 = 2
            (*(*ecx_7 + 0x30))()
    else
        (*(*data_147b070 + 0x90))(data_cf65f8, 0)
        float xmm5_4 = (data_147d210 f- data_147d200) * 0.5f f+ data_147d200
        float xmm7_4 = (data_147d208 f- data_147d1f8) * 0.5f f+ data_147d1f8
        float xmm3_4 = (data_147d20c f- data_147d1fc) * 0.5f f+ data_147d1fc
        float xmm4_4 = (data_147d204 f- data_147d1f4) * 0.5f f+ data_147d1f4
        float xmm2_3 = (xmm5_4 + xmm7_4) * 0.5f
        float xmm0_16 = (xmm3_4 + xmm4_4) * 0.5f
        float xmm5_7 = (xmm5_4 - xmm2_3) * 0.800000012f + xmm2_3
        float xmm7_7 = (xmm7_4 - xmm2_3) * 0.800000012f + xmm2_3
        float xmm2_4[0x4] = data_cf65c8
        float var_44_3 = xmm5_7
        float var_4c_3 = xmm7_7
        var_50 = (xmm4_4 - xmm0_16) * 0.800000012f + xmm0_16
        float var_48_3 = (xmm3_4 - xmm0_16) * 0.800000012f + xmm0_16
        float xmm1_5 = (xmm5_7 + xmm7_7) * 0.5f
        int128_t var_34_3 = var_50.o
        var_34_3:4.d = (xmm7_7 - xmm1_5) * 0.600000024f + xmm1_5
        var_34_3:0xc.d = (xmm5_7 - xmm1_5) * 0.600000024f + xmm1_5
        int128_t xmm1_6 = var_34_3
        var_34_3:8.q = _mm_unpacklo_ps(xmm2_4, data_cf65cc)
        var_3c = xmm1_6
        sub_645a20(&var_3c)
        sub_6494f0(2)
    
    sub_6ad560()
else
    (*(*data_147b070 + 0x90))(0xff000000, 0)
    
    if (data_1a9a2a8 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_1a9a2a8)
        
        if (data_1a9a2a8 == 0xffffffff)
            int32_t var_14_1 = 0
            data_1a9a2ac = sub_69f030("sys/sprite_opaque.material", 5)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_1a9a2a8)
    
    int32_t eax_10 = data_147d2c4
    
    if (eax_10 != 3 && eax_10 == 5)
        int128_t var_34_1 = data_893580
        
        if (data_147b074 == 1)
            int128_t var_34_2 = data_891340
        
        int32_t eax_11 = data_147d1d4
        int32_t* ecx_3 = *((eax_11 << 2) + &data_147d1bc)
        
        if (ecx_3 != 0)
            void* eax_12 = data_cf65b8
            char* var_58_1 = data_1a9a2ac
            var_50 = 0f
            int32_t var_4c_1 = 0
            float var_48_1 = _mm_cvtepi32_ps(zx.o(*(eax_12 + 0x14))) * 0.5f
            int32_t var_44_1 = _mm_cvtepi32_ps(zx.o(*(eax_12 + 0x18)))
            var_50.o = var_50.o
            sub_682a60(&var_3c:8, &var_50, ecx_3, &var_3c:8, &data_bf23ac, var_58_1)
            eax_11 = data_147d1d4
        
        int32_t* ecx_4 = *((eax_11 << 2) + &data_147d1c0)
        
        if (ecx_4 != 0)
            void* eax_14 = data_cf65b8
            char* var_58_2 = data_1a9a2ac
            int32_t var_4c_2 = 0
            float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(eax_14 + 0x14)))
            float var_48_2 = xmm1_2
            var_50 = xmm1_2 * 0.5f
            int32_t var_44_2 = _mm_cvtepi32_ps(zx.o(*(eax_14 + 0x18)))
            var_50.o = var_50.o
            sub_682a60(&var_3c:8, &var_50, ecx_4, &var_3c:8, &data_bf23ac, var_58_2)
sub_6e1520(0)
(*(*data_147b070 + 0x9c))()
uint32_t result = (*(*data_147b070 + 0xa0))(1)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
