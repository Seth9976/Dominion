// 函数: sub_742470
// 地址: 0x742470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_773139
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_646220(&data_14ff3a4)
int32_t var_ac
char const* const var_a8_1

if (data_147aba1 != 0)
    int128_t xmm0_1 = data_7fefb0
    __builtin_strncpy(&data_cf6aa0, "333?", 4)
    data_cf6a90 = xmm0_1
    int32_t var_48_1 = 0xbf800000
    int32_t var_50 = 0x80000000
    int32_t var_4c_1 = 0x80000000
    eax_3 = sub_645840(eax_3, &data_7fefb0, &var_50, 0)
    
    if (data_147aba1 != 0)
        int32_t ecx_2 = data_14ff3dc
        data_cf6b14 = 0x3e8
        sub_6cf680(ecx_2, 0)
        int32_t ecx_3 = data_14ff3e4
        
        if (ecx_3 != 0)
            sub_6cf680(ecx_3, 0)
        
        int32_t i = 0
        int32_t var_98
        int128_t var_94
        int128_t var_84
        void var_6c
        
        if (data_15003ec s> 0)
            var_98 = 0xff7f7f7f
            
            do
                int128_t* eax_5 =
                    sub_6d0bc0(&var_6c, *((i << 2) + &data_14ff3ec), data_14ff3dc, &var_6c)
                var_94 = *eax_5
                var_84 = eax_5[1]
                int64_t var_74_1 = eax_5[2].q
                sub_64b040(&var_94, &var_98)
                i += 1
            while (i s< data_15003ec)
        
        int32_t edx_3 = data_14ff3e0
        
        if (edx_3 != 0xffffffff)
            int128_t* eax_7 = sub_6d0bc0(&var_6c, edx_3, data_14ff3dc, &var_6c)
            var_98 = 0xff7f7f7f
            var_94 = *eax_7
            var_84 = eax_7[1]
            int64_t var_74_2 = eax_7[2].q
            sub_64b040(&var_94, &var_98)
        
        int32_t edx_5 = data_14ff3e8
        
        if (edx_5 != 0xffffffff)
            int128_t* eax_9 = sub_6d0bc0(&var_6c, edx_5, data_14ff3e4, &var_6c)
            var_98 = 0xff7f7f7f
            var_94 = *eax_9
            var_84 = eax_9[1]
            int64_t var_74_3 = eax_9[2].q
            sub_64b040(&var_94, &var_98)
        
        int32_t i_1 = 0
        
        if (data_1512420 == 0)
            if (data_147ef94 s> 0)
                do
                    int128_t* eax_13 =
                        sub_6d0bc0(&var_6c, (&data_147df94)[i_1], data_14ff3dc, &var_6c)
                    var_94 = *eax_13
                    var_84 = eax_13[1]
                    int64_t var_74_5 = eax_13[2].q
                    sub_64b040(&var_94, &data_7e5d1c)
                    i_1 += 1
                while (i_1 s< data_147ef94)
        else if (data_147ef94 s> 0)
            do
                int128_t* eax_11 = sub_6d0bc0(&var_6c, (&data_147df94)[i_1], data_14ff3dc, &var_6c)
                var_94 = *eax_11
                var_84 = eax_11[1]
                int64_t var_74_4 = eax_11[2].q
                sub_64b040(&var_94, &data_7dc5cc)
                i_1 += 1
            while (i_1 s< data_147ef94)
        
        int128_t var_60
        
        if (data_1512424 == 1)
            sub_683cc0()
            float xmm2_1 = data_1512410
            float xmm3_1 = data_1512418
            int32_t xmm0_17 = data_1512414
            int32_t xmm1_1 = data_151241c
            float var_54_1
            
            if (xmm3_1 <= xmm2_1)
                var_54_1 = xmm3_1
                float var_4c_3 = xmm2_1
            else
                var_54_1 = xmm2_1
                float var_4c_2 = xmm3_1
            
            if (xmm1_1 f<= xmm0_17)
                var_50 = xmm1_1
                int32_t var_48_3 = xmm0_17
            else
                var_50 = xmm0_17
                int32_t var_48_2 = xmm1_1
            
            var_54_1.o = var_54_1.o
            sub_682fe0(&var_60:0xc, &data_7dc5cc, 1f)
            void* eax_14 = data_147b06c
            *(eax_14 + 0x2dc) = 0
            __builtin_memcpy(eax_14 + 0x124, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x
                    00", 
                0x41)
            sub_649d30()
        
        void* esi = *fsbase->ThreadLocalStoragePointer
        
        if (data_1a9a458 s> *(esi + 8))
            sub_75970e(&data_1a9a458)
            
            if (data_1a9a458 == 0xffffffff)
                int32_t var_8_1 = 0
                data_1a9a45c = sub_69f030("sys/particle_3d.material", 5)
                int32_t var_8_2 = 0xffffffff
                __Init_thread_footer(&data_1a9a458)
        
        if (data_1a9a460 s> *(esi + 8))
            sub_75970e(&data_1a9a460)
            
            if (data_1a9a460 == 0xffffffff)
                int32_t var_8_3 = 1
                data_1a9a464 = sub_69f030("sys/holodeck.texture", 3)
                int32_t var_8_4 = 0xffffffff
                __Init_thread_footer(&data_1a9a460)
        
        int128_t var_44
        __builtin_memcpy(&var_44, 
            "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x"
        "00\x00\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
        "00\x00\x00", 
            0x30)
        float var_64 = 4f
        int32_t var_48_4 = 0
        __builtin_memcpy(&var_94:8, 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x80\x3f\x00\x00\x00\x00", 
            0x20)
        var_60 = data_800248
        var_50.q = 0
        sub_646bb0(sub_648a50(0, &var_44, &var_64, 4), &var_94:8, &var_44, &data_bf23ac, 
            data_1a9a464, data_1a9a45c)
        sub_683cc0()
        char* const edi = &data_801800
        char* eax_22 = *(data_147df90 + 0x20)
        
        if (eax_22 != 0)
            edi = eax_22
        
        if (data_1a9a468 s> *(esi + 8))
            sub_75970e(&data_1a9a468)
            
            if (data_1a9a468 == 0xffffffff)
                int32_t var_8_5 = 2
                data_1a9a46c = sub_69f030("sys/debugfont.font", 0x12)
                int32_t var_8_6 = 0xffffffff
                __Init_thread_footer(&data_1a9a468)
        
        void* eax_25 = data_cf65b8
        struct _EXCEPTION_REGISTRATION_RECORD*** edx_11 = data_1a9a46c
        int32_t var_54_2 = 0
        var_50 = 0
        int32_t var_ac_2 = 0x3fc00000
        int32_t var_4c_4 = _mm_cvtepi32_ps(zx.o(*(eax_25 + 0x14)))
        int32_t var_48_5 = _mm_cvtepi32_ps(zx.o(*(eax_25 + 0x18)))
        var_54_2.o = var_54_2.o
        sub_6b4060(&var_60:0xc, edx_11, edi, &var_60:0xc)
        uint32_t result = data_147b06c
        *(result + 0x2dc) = 0
        __builtin_memcpy(result + 0x124, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        sub_649d30()
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    var_a8_1 = "Draw3DLayer"
    var_ac = 0x32c
else
    var_a8_1 = "Draw3DAmbientLight"
    var_ac = 0x336

sub_63b870(eax_3, &data_801800, "gDraw3DData.submittingRenderItems", 
    "C:\x\ax2017\Engine\Draw3d.cpp", var_ac, var_a8_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
