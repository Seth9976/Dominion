// 函数: sub_5cca10
// 地址: 0x5cca10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* result = __security_cookie ^ &__saved_ebp
void* result_1 = result
int32_t var_1cc_1
char const* const var_1c8_1
char* ecx

if (*(arg1 + 0x2c) == 0)
    result = sub_5cba00(*(arg1 + 0x9c))
    
    if (*(result + 0x5c) == 6)
        CookieCheckFunction(result)
        return result
    
    if (*(result + 0x2c) == 3)
        int32_t ecx_2 = 6
        char var_96_1 = 1
        
        if (*(result + 0x1c28) == data_b7fcf4)
            ecx_2 = 0x15
        
        int32_t var_174
        int32_t* eax_3 = sub_5cc540(&var_174, *(arg1 + 0xa4), ecx_2, &var_174, *(arg1 + 0xc8), 
            *(arg1 + 0xcc), *(arg1 + 0xa0), *(arg1 + 0xb0), arg1)
        uint128_t xmm1_1 = *eax_3
        uint128_t xmm2_1 = *(eax_3 + 0x10)
        int128_t var_cc_1 = *(eax_3 + 0x20)
        uint128_t var_ac_1 = xmm1_1
        int128_t var_dc_1 = *(eax_3 + 0x30)
        int64_t var_6c_1 = xmm1_1.q
        int128_t var_ec_1 = *(eax_3 + 0x40)
        int32_t eax_4 = *(arg1 + 0xa4)
        uint128_t var_bc_1 = xmm2_1
        int128_t var_fc_1 = *(eax_3 + 0x50)
        uint128_t var_164
        int128_t var_124
        
        if (eax_4 == 0x474)
            memset(&var_174, 0, 0x60)
            int32_t var_170_1 = *(result + 0x68)
            int32_t var_16c_1 = *(arg1 + 0xa0)
            int32_t eax_7 = *(arg1 + 0xb0)
            var_174 = 0x1d
            int32_t var_168_1 = eax_7
        label_5ccbe4:
            int32_t var_15c_1 = 0
            xmm1_1 = var_174.o
            xmm2_1 = var_164
            int128_t var_154
            var_cc_1 = var_154
            int128_t var_144
            var_dc_1 = var_144
            var_bc_1 = xmm2_1
            int128_t var_134
            var_ec_1 = var_134
            var_6c_1 = xmm1_1.q
            var_fc_1 = var_124
            var_ac_1 = xmm1_1
        else if (eax_4 == 6)
            uint32_t esi_3 = zx.d((*(arg1 + 0x98)).w)
            
            if (esi_3 u>= 0x320)
                sub_591930()
            
            void* eax_9 = sub_5cc6c0(*(esi_3 * 0x64 + &data_b82524))
            int32_t edi_1 = *(arg1 + 0xb0)
            int32_t esi_4 = *(eax_9 + 0x5c)
            void var_158
            memset(&var_158, 0, 0x40)
            var_174 = 7
            int32_t var_170_2 = esi_4
            int32_t var_16c_2 = 0xffffffff
            int32_t var_168_2 = edi_1
            var_164.q = 0
            var_124:0xc.d = arg1
            var_96_1 = 0
            goto label_5ccbe4
        result = *(arg1 + 0x1a18)
        char ecx_3
        
        if (result == 0)
            if (*(arg1 + 0x370) == 1 && *(arg1 + 0x378) == xmm1_1)
                void* xmm0_10 = _mm_bsrli_si128(xmm1_1, 8)
                
                if (*(arg1 + 0x380) == xmm0_10)
                    void* xmm0_12 = _mm_bsrli_si128(xmm1_1, 0xc)
                    
                    if (*(arg1 + 0x384) == xmm0_12 && *(arg1 + 0x388) == xmm2_1)
                        void* xmm0_14 = _mm_bsrli_si128(xmm2_1, 4)
                        
                        if (*(arg1 + 0x38c) == xmm0_14)
                            result = _mm_bsrli_si128(xmm1_1, 4)
                            
                            if (*(arg1 + 0x37c) == result)
                                CookieCheckFunction(result)
                                return result
            
            if (arg2 == 0 && (*(arg1 + 0x2c) != 0 || *(arg1 + 0x128) == 0))
                float xmm0_17 = *(arg1 + 0xc)
                xmm0_17 f- 0
                result:1.b = (xmm0_17 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_17, 0f) ? 1 : 0) << 2 | (xmm0_17 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    sub_5cb6e0(arg1 + 0x258, arg1 + 0xc)
            
            ecx_3 = arg2
        else
            ecx_3 = arg2
            
            if (ecx_3 == 0)
                int32_t i = 0
                
                if (result s<= 0)
                    CookieCheckFunction(result)
                    return result
                
                int32_t* ecx_5 = arg1 + 0x420
                
                do
                    if (ecx_5[-2] == 1 && *ecx_5 == var_6c_1.d && ecx_5[1] == var_6c_1:4.d)
                        result = *(arg1 + 0xb0)
                        ecx_5[3] = result
                    
                    i += 1
                    ecx_5 = &ecx_5[0x2c]
                while (i s< *(arg1 + 0x1a18))
                
                CookieCheckFunction(result)
                return result
        
        int64_t var_10c_1 = 0
        result = arg1 + 0x258
        int32_t var_110_1 = 0
        int32_t var_104_1 = 0
        int32_t var_100_1 = 0x100
        int32_t var_94 = 1
        int128_t var_1b4 = arg1.o
        int64_t var_1a4_1 = var_104_1.q
        uint128_t var_8c_1 = var_ac_1
        uint128_t var_7c_1 = var_bc_1
        int128_t var_6c_2 = var_cc_1
        int128_t var_5c_1 = var_dc_1
        int128_t var_4c_1 = var_ec_1
        int128_t var_3c_1 = var_fc_1
        
        if (ecx_3 == 0)
            int32_t var_19c[0xa]
            __builtin_memcpy(&var_19c, &var_94, 0x88)
            result = sub_6371b0(result, &var_19c, 0xa, 0, &var_1b4)
            CookieCheckFunction(result)
            return result
        
        if (*(result + 0x17c0) != 0)
            sub_633aa0(result + 0x250, 1)
            result = arg1 + 0x258
        
        *(result + 0x17c0) = 0
        __builtin_memcpy(result + 8, &var_94, 0x88)
        __builtin_memcpy(result + 0x90, &var_94, 0x88)
        __builtin_memcpy(result + 0x118, &var_94, 0x88)
        
        if (var_96_1 == 0)
            CookieCheckFunction(result)
            return result
        
        result = *(arg1 + 0x384)
        
        if (result == *(arg1 + 0xb0))
            CookieCheckFunction(result)
            return result
        
        var_1c8_1 = "DomMove_Adjust"
        var_1cc_1 = 0xbd8
        ecx = "gfx.move.locCurrent.loc.slot == gfx.card.slot"
    else
        var_1c8_1 = "PileIsOpen"
        var_1cc_1 = 0xaf0
        ecx = "gfx.type == DOMGFX_PILE"
else
    var_1c8_1 = "DomMove_Adjust"
    var_1cc_1 = 0xb8c
    ecx = "gfx.type == DOMGFX_CARD"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_1cc_1, 
    var_1c8_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
