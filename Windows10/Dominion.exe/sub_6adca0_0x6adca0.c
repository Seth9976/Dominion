// 函数: sub_6adca0
// 地址: 0x6adca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76fb91
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_147b070

if (ecx != 0)
    int32_t __saved_ebp
    result = (*(*ecx + 0x58))(__security_cookie ^ &__saved_ebp)
    
    if (result.b != 0)
        uint32_t eax_5 = sub_64b440()
        int32_t edx_1 = data_19e3bac
        int32_t ecx_1 = data_19e3ba8
        *((edx_1 << 2) + &data_1a9a098) = eax_5
        int32_t edx_3
        
        if (ecx_1 s<= edx_1)
            edx_3 = edx_1 - ecx_1
        else
            edx_3 = edx_1 - ecx_1 + 0x80
        
        if (*((ecx_1 << 2) + &data_1a9a098) s< eax_5 - 0xc8)
            do
                ecx_1 = (ecx_1 + 1) & 0x8000007f
                
                if (ecx_1 s< 0)
                    ecx_1 = ((ecx_1 - 1) | 0xffffff80) + 1
                
                edx_3 -= 1
                
                if (edx_3 s<= 2)
                    break
            while (*((ecx_1 << 2) + &data_1a9a098) s< eax_5 - 0xc8)
            
            data_19e3ba8 = ecx_1
        
        void* eax_7 = data_147abe8
        char const* const var_c0_1
        int32_t var_bc
        char const* const var_b8_1
        char* ecx_5
        
        if (eax_7 == 0)
        label_6ae0e6:
            var_b8_1 = "GetGameData"
            var_bc = 0x45
            var_c0_1 = "C:\x\ax2017\Engine\Game.h"
            ecx_5 = "gpGameData"
        label_6ae0fc:
            sub_63b870(eax_7, &data_801800, ecx_5, var_c0_1, var_bc, var_b8_1)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t xmm1_1
        
        if (edx_3 != 0)
            xmm1_1 = _mm_cvtepi32_ps(zx.o(edx_3))
                / _mm_cvtepi32_ps(zx.o(eax_5 - *((ecx_1 << 2) + &data_1a9a098))) * 1000f
        else
            xmm1_1 = (zx.o(0)).d
        
        *(eax_7 + 0x30) = xmm1_1
        eax_7 = (data_19e3bac + 1) & 0x8000007f
        
        if (eax_7 s< 0)
            eax_7 = ((eax_7 - 1) | 0xffffff80) + 1
        
        int32_t esi_3 = data_147d2c4
        data_19e3bac = eax_7
        
        if (esi_3 == 4)
            var_b8_1 = "RendererDrawFrame"
            var_bc = 0x3e8
            var_c0_1 = "C:\x\ax2017\Engine\Renderer.cpp"
            ecx_5 = "appType != VRAPP_CARDBOARD"
            goto label_6ae0fc
        
        char var_85_1 = 0
        
        if (esi_3 != 0)
            int32_t* ecx_6 = data_147d1b0
            
            if (ecx_6 != 0)
                char eax_14 = (*(*ecx_6 + 0x10))(&data_147d1dc)
                var_85_1 = eax_14
                
                if (eax_14 != 0)
                    esi_3 = sub_6cc6d0()
                else
                    data_147d218 = 0
            else
                var_85_1 = ecx_6.b
        
        memset(data_147b06c + 4, 0, 0x30)
        (*(*data_cf65b8 + 0x40))()
        void* ecx_8 = data_cf65b8
        
        if (*(ecx_8 + 0x28) != 0 || *(ecx_8 + 0x29) != 0)
            int128_t var_ac
            __builtin_memcpy(&var_ac, 
                "\x00\x02\x00\x00\xea\x03\x00\x00\x20\x00\x00\x00\xea\x03\x00\x00\x80\x00\x00\x00\xea\x"
            "03\x00\x00\x05\x00\x00\x00\x00\x02\x00\x00\x01\x00\x00\x00", 
                0x24)
            sub_730c10(&var_ac)
            ecx_8 = data_cf65b8
        
        void* eax_18 = data_147b06c
        *(eax_18 + 0x34) = *(eax_18 + 4)
        *(eax_18 + 0x44) = *(eax_18 + 0x14)
        *(eax_18 + 0x54) = *(eax_18 + 0x24)
        
        if (*(ecx_8 + 0x2b) != 0)
            goto label_6ae06f
        
        sub_649ab0()
        (*(*data_cf65b8 + 0x30))()
        
        if (data_147d2c4 == 0)
            goto label_6ae061
        
        void* ecx_11 = data_147abe8
        
        if (ecx_11 == 0)
            goto label_6ae061
        
        int32_t ecx_12 = *(ecx_11 + 0x1c)
        
        if (((ecx_12 u>> 6).b & 1) == 0 && ((ecx_12 u>> 7).b & 1) == 0
                && ((ecx_12 u>> 5).b & 1) == 0)
            goto label_6ae061
        
        int32_t eax_24 = data_cf6680
        int64_t xmm1_5 = data_cf6678
        void var_84
        float* ecx_14 = &var_84
        int128_t var_40
        __builtin_memcpy(&var_40, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\xc0\x00\x00\x"
        "00\x41\x00\x00\x00\x40", 
            0x1c)
        int32_t var_48_1 = eax_24
        int128_t xmm0_6 = data_cf6668
        float var_44 = 0.0250000004f
        float var_64 = 1f
        int128_t var_60_1 = xmm0_6
        int64_t var_50_1 = xmm1_5
        sub_4eb600(&var_64, &var_44, ecx_14, &var_64)
        sub_6830d0(ecx_14)
        
        if (data_1a9a2e8 s> *(*fsbase->ThreadLocalStoragePointer + 8))
            sub_75970e(&data_1a9a2e8)
            
            if (data_1a9a2e8 == 0xffffffff)
                int32_t var_14_1 = 0
                data_1a9a2ec = sub_69f030("sys/sprite_3d_no_zread.material", 5)
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer(&data_1a9a2e8)
        
        eax_7 = data_1a9a2ec
        *(data_147b06c + 0x2dc) = eax_7
        
        if (data_147aba1 == 0)
            var_b8_1 = "Draw3DSetDrawEyeMask"
            var_bc = 0x324
            var_c0_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
            ecx_5 = "gDraw3DData.submittingRenderItems"
            goto label_6ae0fc
        
        data_cf6b38 = 3
        eax_7 = sub_6ad560()
        
        if (data_147aba1 == 0)
            var_b8_1 = "Draw3DSetDrawEyeMask"
            var_bc = 0x324
            var_c0_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
            ecx_5 = "gDraw3DData.submittingRenderItems"
            goto label_6ae0fc
        
        void* eax_29 = data_147b06c
        data_cf6b38 = 7
        *(eax_29 + 0x2dc) = 0
        __builtin_memcpy(eax_29 + 0x124, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        sub_649d30()
    label_6ae061:
        sub_649c00()
        sub_649120()
    label_6ae06f:
        
        if (var_85_1 != 0)
            sub_6cccf0()
        
        if (esi_3 == 3 || esi_3 == 5 || esi_3 == 0)
            sub_6ad700()
        
        eax_7 = sub_649c60()
        void* ecx_17 = data_147abe8
        
        if (ecx_17 == 0)
            goto label_6ae0e6
        
        result = *(ecx_17 + 0x1c) u>> 6
        
        if ((result.b & 1) != 0)
            result = data_147b06c
            *(result + 0x64) = *(result + 4)
            *(result + 0x74) = *(result + 0x14)
            *(result + 0x84) = *(result + 0x24)
        
        *(ecx_17 + 0x1c) &= 0xfffffeff

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
