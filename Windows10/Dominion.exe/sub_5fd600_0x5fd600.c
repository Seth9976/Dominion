// 函数: sub_5fd600
// 地址: 0x5fd600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c
void* eax
char const* const ecx

if (arg1 s>= 0)
    eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    
    if (arg1 s<= *(eax + 0x71dc))
        return eax + 0x6edc + arg1 * 0xc
    
    char const* const var_8_1 = "DomSaveSetGet"
    var_c = 0x8d95
    ecx = "setIdx <= saveSets.numSets"
else
    char const* const var_8 = "DomSaveSetGet"
    var_c = 0x8d93
    ecx = "setIdx >= 0"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_c, 
    "DomSaveSetGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
