// 函数: sub_6eef80
// 地址: 0x6eef80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_147ded0
int32_t* eax

if (ecx != 0 && ecx[1] == 0x19)
    eax = sub_5af880(ecx)

int32_t var_c
char* ecx_2

if (ecx == 0 || ecx[1] != 0x19 || eax == 0)
    char const* const var_8_1 = "EmitterGetIndent"
    var_c = 0x32d
    ecx_2 = "pParticleDef"
else
    if (arg1 s>= 0 && arg1 s< eax[2])
        return *(arg1 * 0x168 + *eax + 0x10)
    
    char const* const var_8 = "EmitterGetIndent"
    var_c = 0x32f
    ecx_2 = "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount"

sub_63b870(eax, &data_801800, ecx_2, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_c, 
    "EmitterGetIndent")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
