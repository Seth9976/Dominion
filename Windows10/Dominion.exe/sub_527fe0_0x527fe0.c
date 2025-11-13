// 函数: sub_527fe0
// 地址: 0x527fe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int128_t var_30
__builtin_memcpy(&var_30, 
    "\x2f\x09\x00\x00\x30\x09\x00\x00\x31\x09\x00\x00\x32\x09\x00\x00\x33\x09\x00\x00\x34\x09\x00\x00\x"
"35\x09\x00\x00\x36\x09\x00\x00\x37\x09\x00\x00\x38\x09\x00\x00", 
    0x28)

if (*(*(sub_573400() + 4) + 0xd40) == 0x73)
label_528078:
    void* result = sub_573400()
    void* result_1 = result
    int32_t var_c
    int32_t* esi_1 = &var_c
    int32_t i_2 = 0xa
    int32_t i
    
    do
        result = sub_5727e0(result, *esi_1, *(result_1 + 4), arg1, 0xffffffff, nullptr)
        esi_1 = &esi_1[-1]
        i = i_2
        i_2 -= 1
    while (i != 1)
    CookieCheckFunction(result)
    return result

void* eax_4 = sub_573400()
int32_t* ebx_1 = *(eax_4 + 4)
char const* const var_48_1
int32_t var_44
char const* const var_40
char* ecx_1

if (ebx_1 != 0)
    int32_t edi_1 = 0
    int32_t i_1 = 0xa
    
    while (i_1 u>= 1)
        uint32_t eax_5 = sub_63ed10(ebx_1, i_1)
        int32_t ecx_3 = *(&var_30 + (edi_1 << 2))
        i_1 -= 1
        int32_t edx_2 = edi_1 + eax_5
        eax_4 = *(&var_30 + (edx_2 << 2))
        *(&var_30 + (edi_1 << 2)) = eax_4
        edi_1 += 1
        *(&var_30 + (edx_2 << 2)) = ecx_3
        
        if (i_1 s<= 0)
            goto label_528078
    
    var_40 = "RandomPCGIntRange"
    var_44 = 0x120
    var_48_1 = "C:\x\ax2017\Engine\Random.cpp"
    ecx_1 = "mmin <= mmax"
else
    var_40 = "GameRNG"
    var_44 = 0x1577
    var_48_1 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_1 = &data_81ede8

sub_63b870(eax_4, &data_801800, ecx_1, var_48_1, var_44, var_40)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
