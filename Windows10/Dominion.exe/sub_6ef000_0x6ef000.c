// 函数: sub_6ef000
// 地址: 0x6ef000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t* ecx = data_147ded0
int32_t* eax

if (ecx != 0 && ecx[1] == 0x19)
    eax = sub_5af880(ecx)

int32_t var_14
char* ecx_3

if (ecx == 0 || ecx[1] != 0x19 || eax == 0)
    char const* const var_10_1 = "EmitterSetIndent"
    var_14 = 0x337
    ecx_3 = "pParticleDef"
else
    if (arg1 s>= 0 && arg1 s< eax[2])
        int32_t result = *eax
        *(arg1 * 0x168 + result + 0x10) = arg2
        return result
    
    char const* const var_10 = "EmitterSetIndent"
    var_14 = 0x339
    ecx_3 = "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount"

sub_63b870(eax, &data_801800, ecx_3, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_14, 
    "EmitterSetIndent")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
