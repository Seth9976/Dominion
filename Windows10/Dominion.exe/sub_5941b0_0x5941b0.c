// 函数: sub_5941b0
// 地址: 0x5941b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg2[1]
int32_t var_c
char const* const ecx

if (arg1[1] == 0)
    if (eax == 0)
        goto label_5941de
    
    char const* const var_8 = "operator =="
    var_c = 0x53e4
    ecx = "c1.moveIdx == MOVEIDX_NONE"
    goto label_594201

if (eax != 0)
label_5941de:
    int32_t result
    
    if (*arg1 == *arg2 && arg1[1] == eax)
        result.b = 1
        return result
    
    result.b = 0
    return result

char const* const var_8_1 = "operator =="
var_c = 0x53e9
ecx = "c1.moveIdx != MOVEIDX_NONE"
label_594201:
sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_c, 
    "operator ==")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
