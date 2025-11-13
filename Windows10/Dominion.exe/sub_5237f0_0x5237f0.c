// 函数: sub_5237f0
// 地址: 0x5237f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int128_t var_1c
__builtin_memcpy(&var_1c, 
    "\x12\x07\x00\x00\x11\x07\x00\x00\x10\x07\x00\x00\x0f\x07\x00\x00\x0e\x07\x00\x00", 0x14)
void* eax_2 = sub_573400()
int32_t* ebx = *(eax_2 + 4)
char const* const var_34_1
int32_t var_30
char const* const var_2c
char* ecx_1

if (ebx != 0)
    int32_t edi_1 = 0
    int32_t i = 5
    
    while (i u>= 1)
        uint32_t eax_3 = sub_63ed10(ebx, i)
        int32_t ecx_3 = *(&var_1c + (edi_1 << 2))
        i -= 1
        int32_t edx_2 = edi_1 + eax_3
        eax_2 = *(&var_1c + (edx_2 << 2))
        *(&var_1c + (edi_1 << 2)) = eax_2
        edi_1 += 1
        *(&var_1c + (edx_2 << 2)) = ecx_3
        
        if (i s<= 0)
            void* result = sub_573400()
            void* result_1 = result
            int32_t var_c
            int32_t* esi_1 = &var_c
            int32_t j_1 = 5
            int32_t j
            
            do
                result = sub_5727e0(result, *esi_1, *(result_1 + 4), arg1, 0xffffffff, nullptr)
                esi_1 = &esi_1[-1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            CookieCheckFunction(result)
            return result
    
    var_2c = "RandomPCGIntRange"
    var_30 = 0x120
    var_34_1 = "C:\x\ax2017\Engine\Random.cpp"
    ecx_1 = "mmin <= mmax"
else
    var_2c = "GameRNG"
    var_30 = 0x1577
    var_34_1 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_1 = &data_81ede8

sub_63b870(eax_2, &data_801800, ecx_1, var_34_1, var_30, var_2c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
