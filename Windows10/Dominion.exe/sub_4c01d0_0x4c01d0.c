// 函数: sub_4c01d0
// 地址: 0x4c01d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cc8d5c

if (eax == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*(eax + 0x5028) = 0
*(eax + 0x5030) = 0xffffffff
*(eax + 0x5034) = 0xffffffff
*(eax + 0x5038) = 0xffffffff
*(eax + 0x503c) = 0xffffffff
int32_t* var_10
sub_4bad70(eax + 0x507c, &var_10)
void* i_1

for (void* i = i_1; i != 0xffffffff; i = i_1)
    sub_4d61a0(i)
    sub_4baf10(var_10, &i_1)

return sub_4bae80(eax + 0x507c)
