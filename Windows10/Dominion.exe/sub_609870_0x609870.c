// 函数: sub_609870
// 地址: 0x609870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = 0
int32_t ecx = data_ccf6c0
int32_t esi = 1
int32_t ebx
ebx.b = 0
int32_t var_54[0x13]

for (int128_t* const i = &data_77fea0; i != &data_77fee8; )
    if ((ecx & esi) != 0)
        int32_t ecx_1 = *i
        
        if (ecx_1 != 0x13)
            var_54[eax_2] = ecx_1
            eax_2 += 1
        else
            ebx.b = 1
        
        ecx = data_ccf6c0
    
    i += 4
    esi *= 2

if (ebx.b != 0)
    var_54[eax_2] = 0x13
    eax_2 += 1

int32_t var_6c
char const* const ecx_2

if (arg1 s< 0)
    char const* const var_68 = "MissingContentIndexToDlc"
    var_6c = 0xa7ff
    ecx_2 = "index >= 0"
else if (arg1 s< eax_2)
    int32_t ecx_3 = var_54[arg1]
    
    if (ecx_3 != 0x13)
        *sub_609800(ecx_3)
        CookieCheckFunction(0)
        return 0
    
    char const* const var_68_2 = "MissingContentIndexToDlc"
    var_6c = 0xa804
    ecx_2 = "Halt"
else
    char const* const var_68_1 = "MissingContentIndexToDlc"
    var_6c = 0xa800
    ecx_2 = "index < numExpansions"

sub_63b870(eax_2, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_6c, 
    "MissingContentIndexToDlc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
