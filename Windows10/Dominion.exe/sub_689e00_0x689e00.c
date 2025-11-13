// 函数: sub_689e00
// 地址: 0x689e00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_20
char const* const ecx_1

if (arg3 s>= 0x3e8)
    if (arg2 s<= 0xed30)
        int32_t var_c = arg3
        int32_t var_10 = arg2
        int32_t var_14 = 0xfeedface
        int32_t** ecx
        void* result = sub_689be0(&var_14, 0xc, ecx, &var_14)
        CookieCheckFunction(result)
        return result
    
    char const* const var_1c_2 = "NetBufferStartMessage"
    var_20 = 0x2ac
    ecx_1 = "length <= MAX_NET_MESSAGE_SIZE"
else
    char const* const var_1c = "NetBufferStartMessage"
    var_20 = 0x2ab
    ecx_1 = "messageId >= NETMSG_MIN_VALUE"

sub_63b870(arg3, &data_801800, ecx_1, "C:\x\ax2017\Engine\Network.cpp", var_20, 
    "NetBufferStartMessage")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
