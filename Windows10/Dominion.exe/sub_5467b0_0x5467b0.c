// 函数: sub_5467b0
// 地址: 0x5467b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_38[0xb]

for (int32_t i = 0; i s< 0xc; i += 4)
    *(&var_38 + (i << 2)) = _mm_unpacklo_epi32(
        _mm_unpacklo_epi32(zx.o(i + 0xd3e), zx.q(i + 0xd40)), 
        _mm_unpacklo_epi32(zx.o(i + 0xd3f), zx.q(i + 0xd41)))

void* eax_3 = sub_573400()
int32_t* ebx = *(eax_3 + 4)
char const* const var_50_1
int32_t var_4c
char const* const var_48
char* ecx_2

if (ebx != 0)
    int32_t edi = 0
    int32_t i_1 = 0xc
    
    while (i_1 u>= 1)
        uint32_t eax_4 = sub_63ed10(ebx, i_1)
        int32_t ecx_4 = var_38[edi]
        i_1 -= 1
        int32_t edx_3 = edi + eax_4
        eax_3 = var_38[edx_3]
        var_38[edi] = eax_3
        edi += 1
        var_38[edx_3] = ecx_4
        
        if (i_1 s<= 0)
            void* result = sub_573400()
            void* result_1 = result
            void var_c
            void* esi_2 = &var_c
            int32_t j_1 = 0xc
            int32_t j
            
            do
                result = sub_5727e0(result, *esi_2, *(result_1 + 4), arg1, 0xffffffff, nullptr)
                esi_2 -= 4
                j = j_1
                j_1 -= 1
            while (j != 1)
            CookieCheckFunction(result)
            return result
    
    var_48 = "RandomPCGIntRange"
    var_4c = 0x120
    var_50_1 = "C:\x\ax2017\Engine\Random.cpp"
    ecx_2 = "mmin <= mmax"
else
    var_48 = "GameRNG"
    var_4c = 0x1577
    var_50_1 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_2 = &data_81ede8

sub_63b870(eax_3, &data_801800, ecx_2, var_50_1, var_4c, var_48)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
