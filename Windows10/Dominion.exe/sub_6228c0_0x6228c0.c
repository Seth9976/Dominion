// 函数: sub_6228c0
// 地址: 0x6228c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t* var_8 = ecx
void* eax = data_cc8d5c

if (eax == 0)
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax + 0x5068) == 2)
    arg1[0x1a] = 1
    return sub_5e97a0(eax, arg1[0x14], ecx, arg1, 1)

void* result = sub_5cb070()

if (result != 0)
    return result

arg1[0x1a] = 1
return sub_5ee590(arg1[0x14], arg1)
