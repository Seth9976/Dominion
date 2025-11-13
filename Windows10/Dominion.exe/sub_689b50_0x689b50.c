// 函数: sub_689b50
// 地址: 0x689b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t** var_8 = arg1
char const* const var_18
int32_t var_14
char const* const var_10_1
void** eax
char* ecx

if (arg2 s<= 0xfde8)
    if (arg1[2] == 0)
        var_8 = sub_688f10()
        return sub_68b830(arg1, &var_8)
    
    eax = arg1[1]
    
    if (eax != 0)
        void* result = *eax
        
        if (0xfde8 - *(result + 0xfdec) - *(result + 0xfde8) s>= arg2)
            return result
        
        var_8 = sub_688f10()
        return sub_68b830(arg1, &var_8)
    
    var_10_1 = "XList<struct NetBuffer *>::GetTail"
    var_14 = 0x5a
    var_18 = "C:\x\ax2017\Engine\xList.h"
    ecx = "mpTail != NULL"
else
    var_10_1 = "NetBufferMakeRoom"
    var_14 = 0x239
    var_18 = "C:\x\ax2017\Engine\Network.cpp"
    ecx = "roomNeeded <= NETWORK_BUFFER_SIZE"

sub_63b870(eax, &data_801800, ecx, var_18, var_14, var_10_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
