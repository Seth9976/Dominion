// 函数: sub_636850
// 地址: 0x636850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg1[3]

if (esi s>= 0)
    int32_t ebx_1 = arg1[1]
    
    if (esi s< ebx_1)
        int32_t eax_1 = *arg1
        int32_t ecx_1 = esi * 7
        *arg2 = *(eax_1 + (ecx_1 << 3))
        arg2[1] = *(eax_1 + (ecx_1 << 3) + 0x10)
        arg2[2] = *(eax_1 + (ecx_1 << 3) + 0x20)
        arg2[3].q = *(eax_1 + (ecx_1 << 3) + 0x30)
        arg1[3] = esi + 1
        
        if (esi + 1 == ebx_1)
            arg1[1] = 0
            arg1[3] = 0
        
        return arg2

int32_t eax
sub_63b870(eax, &data_801800, "index >= 0 && index < mSize", "C:\x\ax2017\Engine\xDynArray.h", 
    0xcd, "XDynArray<struct DomEffectData>::GetAt")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
