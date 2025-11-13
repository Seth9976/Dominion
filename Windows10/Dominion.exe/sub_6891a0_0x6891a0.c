// 函数: sub_6891a0
// 地址: 0x6891a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_688ff0()
int32_t* var_8 = eax
eax[1] = arg2
*eax = arg1[6].d
eax[2] = 0
*(eax + 0xed44) = *arg1
*(eax + 0xed54) = arg1[1]

if (eax[1] s> 0x3e8)
    return sub_68b830(data_147abf4 + 0x38, &var_8)

sub_63b870(eax, &data_801800, "netMessage->messageType > NETMSG_MIN_VALUE", 
    "C:\x\ax2017\Engine\Network.cpp", 0x14f, "MessageQueueAppendSimpleMessage")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
