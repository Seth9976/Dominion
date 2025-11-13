// 函数: sub_4aeb40
// 地址: 0x4aeb40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_cc8d5c
int32_t ebx
ebx.b = arg1

if (esi == 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_1 = *(esi + 0x14)
void* edx = data_147abf4

if (eax_1 != 0)
    uint32_t ecx = zx.d(eax_1.w)
    
    if (ecx u< *(edx + 4))
        int128_t* ecx_2 = ecx * 0x64 + *edx
        
        if (ecx_2[6].d == eax_1 && ecx_2 != 0)
            sub_6892c0(ecx_2)

*(esi + 0x18) = 0
int32_t result = sub_4bae80(esi + 0x507c)

if (ebx.b == 0)
    return result

return sub_4ae7a0() __tailcall
