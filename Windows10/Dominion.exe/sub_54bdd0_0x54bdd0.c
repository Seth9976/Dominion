// 函数: sub_54bdd0
// 地址: 0x54bdd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_c88[0x1d]
int32_t (* eax_2)[0x1d] = &var_c88
int32_t i_2 = 2
int32_t i

do
    eax_2 = &(*eax_2)[0xf]
    __builtin_memcpy(&(*eax_2)[-0xf], 
        "\x29\x11\x00\x00\x2a\x11\x00\x00\x2b\x11\x00\x00\x2c\x11\x00\x00\x2d\x11\x00\x00\x2e\x11\x00\x"
    "00\x2f\x11\x00\x00\x30\x11\x00\x00\x31\x11\x00\x00\x32\x11\x00\x00\x33\x11\x00\x00\x34\x11\x00"
    "00\x35\x11\x00\x00\x36\x11\x00\x00\x37\x11\x00\x00", 
        0x3c)
    i = i_2
    i_2 -= 1
while (i != 1)
void* eax_3 = sub_573400()
int32_t* ebx = *(eax_3 + 4)
char const* const var_ca0_1
int32_t var_c9c
char const* const var_c98
char* ecx

if (ebx != 0)
    int32_t edi_1 = 0
    int32_t i_1 = 0x1e
    
    while (i_1 u>= 1)
        uint32_t eax_4 = sub_63ed10(ebx, i_1)
        int32_t ecx_2 = var_c88[edi_1]
        i_1 -= 1
        int32_t edx_2 = edi_1 + eax_4
        eax_3 = var_c88[edx_2]
        var_c88[edi_1] = eax_3
        edi_1 += 1
        var_c88[edx_2] = ecx_2
        
        if (i_1 s<= 0)
            void* result = sub_573400()
            void* result_1 = result
            void var_c14
            void* esi_1 = &var_c14
            int32_t j_1 = 0x1e
            int32_t j
            
            do
                result = sub_5727e0(result, *esi_1, *(result_1 + 4), arg1, 0xffffffff, nullptr)
                esi_1 -= 4
                j = j_1
                j_1 -= 1
            while (j != 1)
            CookieCheckFunction(result)
            return result
    
    var_c98 = "RandomPCGIntRange"
    var_c9c = 0x120
    var_ca0_1 = "C:\x\ax2017\Engine\Random.cpp"
    ecx = "mmin <= mmax"
else
    var_c98 = "GameRNG"
    var_c9c = 0x1577
    var_ca0_1 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx = &data_81ede8

sub_63b870(eax_3, &data_801800, ecx, var_ca0_1, var_c9c, var_c98)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
