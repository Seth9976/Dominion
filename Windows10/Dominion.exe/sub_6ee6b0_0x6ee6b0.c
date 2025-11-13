// 函数: sub_6ee6b0
// 地址: 0x6ee6b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

LRESULT eax_1 = SendMessageA(GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
LRESULT esi = eax_1

if (esi == 0xffffffff)
    return 0

int32_t* ecx = data_147ded0

if (ecx != 0 && ecx[1] == 0x19)
    eax_1 = sub_5af880(ecx)
    
    if (eax_1 != 0 && esi s>= 0 && esi s< *(eax_1 + 8))
        return esi * 0x168 + *eax_1

sub_63b870(eax_1, &data_801800, 
    "pParticleDef && currentSelection >= 0 && currentSelection < pParticleDef->mEmitterCount", 
    "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x1c6, "EditorGetSelectedEmitter")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
