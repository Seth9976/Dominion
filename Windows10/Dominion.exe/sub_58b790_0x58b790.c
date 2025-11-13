// 函数: sub_58b790
// 地址: 0x58b790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg4.w)

if (esi u>= 0x320)
    sub_591930()

void* eax_1 = esi * 0x64 + arg3
void* eax_2 = sub_571b30(*(eax_1 + 0x1a4c), *(arg3 + 0xd48))
int32_t var_30
char const* const var_2c
char* ecx_1

if (*(eax_2 + 0xa4) != 0)
    if (esi u>= 0x320)
        sub_591930()
    
    void* var_18 = arg4
    int32_t var_14_1 = *(eax_1 + 0x1a54)
    sub_573050(&var_18, arg2, arg3, &var_18)
    int32_t result = (*(eax_2 + 0xa4))()
    TEB* fsbase
    void* ecx_4 = *fsbase->ThreadLocalStoragePointer
    eax_2 = *(ecx_4 + 0xf010)
    
    if (eax_2 s> 0)
        *(ecx_4 + 0xf010) = eax_2 - 1
        return result
    
    var_2c = "DomPopContext"
    var_30 = 0x792
    ecx_1 = "cs.numContexts > 0"
else
    var_2c = "CalcOwnedIndivScore"
    var_30 = 0x3a6f
    ecx_1 = "def.vpFn"

sub_63b870(eax_2, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_30, var_2c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
