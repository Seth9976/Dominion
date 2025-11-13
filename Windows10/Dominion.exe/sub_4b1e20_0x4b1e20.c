// 函数: sub_4b1e20
// 地址: 0x4b1e20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_cc8d5c

if (esi == 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* ebx = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x10
void* var_30
void* var_24
uint32_t eax_2
int32_t ecx_3
eax_2, ecx_3 = sub_4daf40(&var_30, &var_24)
int32_t var_44 = ecx_3
sub_4dbef0(eax_2)
*(ebx + 0x28) = 0x17
int32_t eax_3
int32_t ecx_5
eax_3, ecx_5 = sub_4b1070()
int32_t edx
int32_t var_44_1 = edx
*(esi + 0x5068) = 1
*(esi + 0x506c) = eax_3
*(esi + 0x5098) = eax_3
sub_4d5e20(esi, esi + 0x5098, ebx, 6, ecx_5)
sub_4b11c0(esi + 0x5098)
void var_20
sub_624070(&var_20, 0x77f0a0, esi + 0x5098, &var_20, arg1)
sub_4da580(esi + 0x5098, eax_3)
*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42c0) = eax_3
data_cc8dc8
sub_4d8ad0(eax_3)
*(esi + 0x50b8) = (sub_4d6320(ebx) + 1) << 0x1c | (*(esi + 0x50b8) & 0xfffffff)
return sub_4da3a0(esi + 0x5098, *(esi + 0x5098))
