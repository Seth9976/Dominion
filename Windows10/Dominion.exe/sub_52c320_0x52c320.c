// 函数: sub_52c320
// 地址: 0x52c320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_d18
int32_t* eax_1 = __security_cookie ^ &var_d18
int32_t* var_14 = eax_1
int32_t var_d28
char const* const ecx

if (*(arg1 + 0xc80) s> 0)
    sub_566140(eax_1, 0x474, arg1, 0x3ee, 5, 0, 0xb, nullptr, nullptr)
    int32_t var_cf4_1 = 0
    int64_t var_cfc_1 = 0
    int64_t var_cec
    __builtin_memset(&var_cec, 0, 0x1c)
    int128_t var_cd0 = 0x1c.o
    int128_t var_cc0_1 = 1.o
    int64_t var_ce0
    int128_t var_cb0_1 = var_ce0.o
    eax_1 = sub_563c40(&var_cd0, 0xa, 0)
    
    if (eax_1 != 0)
        void* var_d08 = nullptr
        void* var_d0c = nullptr
        void* eax_2 = sub_573400()
        int32_t ecx_2 = *(eax_2 + 4)
        uint32_t ecx_3 = zx.d(eax_1.w)
        
        if (ecx_3 u>= 0x320)
            sub_591930()
        
        int32_t ecx_6 = sub_582d10(eax_2, *(ecx_3 * 0x64 + ecx_2 + 0x1a70), *(eax_2 + 4), eax_1, 
            0x3ee, 0xb, 0x3ea, 3, *(eax_2 + 0x28), *(eax_2 + 0x2c), *(eax_2 + 0x30), 0, 0, nullptr, 
            0, var_d08, var_d0c)
        int32_t var_d24_2 = 1
        uint32_t eax_3 = sub_56b800()
        sub_5661e0(eax_3, 0x3ee, arg1, eax_3, ecx_6)
        int32_t edx_4 = *(arg1 + 0xc80)
        uint32_t result = 0
        
        if (edx_4 s> 0)
            do
                void* ecx_8 = arg1 + (result << 2)
                
                if (*(arg1 + (result << 2)) == eax_1)
                    *(arg1 + 0xc80) = edx_4 - 1
                    result = *(arg1 + ((edx_4 - 1) << 2))
                    *ecx_8 = result
                    break
                
                result += 1
            while (result s< edx_4)
        
        int32_t edi_2 = *(arg1 + 0xc80)
        
        if (edi_2 s> 0)
            int32_t var_ca0 = 4
            void var_c9c
            memcpy(&var_c9c, arg1, edi_2 << 2)
            int32_t var_1c_1 = edi_2
            result = sub_56bba0(&var_ca0, 0, sub_52c560, &var_ca0, 1, 0)
        
        CookieCheckFunction(result)
        return result
    
    char const* const var_d24_4 = "Archive_GetCard"
    var_d28 = 0x1d0
    ecx = "card != CARDID_NULL"
else
    char const* const var_d24 = "Archive_GetCard"
    var_d28 = 0x1cc
    ecx = "cards.numCards > 0"

sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Empires.cpp", 
    var_d28, "Archive_GetCard")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
