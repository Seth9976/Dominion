// 函数: sub_734a20
// 地址: 0x734a20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
SOCKET s = __security_cookie ^ &__saved_ebp
SOCKET s_1 = s
int32_t var_34
char const* const ecx

if (arg1 != 0)
    s = sub_734530(1, 2)
    *arg2 = 2
    
    if (s != 0)
        int32_t var_20
        __builtin_memset(&var_20, 0, 0x18)
        int16_t name = 0x17
        uint16_t var_22 = htons(arg1)
        
        if (bind(s, &name, 0x1c) != 0)
            sub_63b5f0("tcp bind failed\n")
            CookieCheckFunction(0)
            return 0
        
        if (listen(s, 0x10) == 0)
            CookieCheckFunction(s)
            return s
        
        sub_63b5f0("tcp listen failed\n")
        CookieCheckFunction(0)
        return 0
    
    char const* const var_30_2 = "WinsockNetworkInterface::TCPListenStart"
    var_34 = 0x111
    ecx = "socket != 0"
else
    char const* const var_30 = "WinsockNetworkInterface::TCPListenStart"
    var_34 = 0x10c
    ecx = "port != 0"

sub_63b870(s, &data_801800, ecx, "C:\x\ax2017\Engine\Windows\WindowsNetwork.cpp", var_34, 
    "WinsockNetworkInterface::TCPListenStart")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
