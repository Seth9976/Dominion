// 函数: sub_51ee80
// 地址: 0x51ee80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *arg2
int32_t eax_2 = **(arg1 + 4)
int32_t result

if (eax_2 == 0)
label_51eefc:
    void* eax_12 = sub_571b30(esi, 0x18)
    
    if (((*(eax_12 + 0x98) & 0x7f000400) | (*(eax_12 + 0x9c) & 0x940)) != 0)
        result.b = 1
        return result
    
    result.b = 0
    return result

char const* const var_14
int32_t var_10
char const* const var_c
void* eax_5
char* ecx

if (eax_2 == 1)
    eax_5 = *(arg1 + 8)
    int32_t ecx_2 = *(eax_5 + 4)
    
    if (ecx_2 == 0)
    label_51ef23:
        var_c = "IsExpansion"
        var_10 = 0x1002
        ecx = "exp != DOM_EXP_NONE"
        var_14 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
        goto label_51ef3c
    
    int32_t eax_10
    char edx_3
    edx_3:eax_10 = sx.q(esi)
    
    if ((eax_10 + zx.d(edx_3)) s>> 8 == ecx_2)
        goto label_51eefc
    
    result.b = 0
    return result

eax_5 = eax_2 - 2

if (eax_2 == 2)
    eax_5 = *(arg1 + 8)
    int32_t ecx_1 = *(eax_5 + 4)
    
    if (ecx_1 == 0)
        goto label_51ef23
    
    int32_t eax_7
    char edx_1
    edx_1:eax_7 = sx.q(esi)
    
    if ((eax_7 + zx.d(edx_1)) s>> 8 != ecx_1)
        goto label_51eefc
    
    result.b = 0
    return result

var_c = "RollSubthemeLandscape::<lambda_4bedaaa65377915ef4fd1bf2fa28174a>::operator ()"
var_10 = 0x19df
var_14 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
ecx = "Halt"
label_51ef3c:
sub_63b870(eax_5, &data_801800, ecx, var_14, var_10, var_c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
