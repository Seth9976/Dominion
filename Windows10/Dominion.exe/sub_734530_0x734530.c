// 函数: sub_734530
// 地址: 0x734530
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
SOCKET s

if (arg1 != 1)
    int32_t var_1c_6
    char* ecx_1
    
    if (arg1 != 0)
        char const* const var_18_4 = "SocketCreate"
        var_1c_6 = 0x64
        ecx_1 = "Halt"
    label_734637:
        sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Windows\WindowsNetwork.cpp", 
            var_1c_6, "SocketCreate")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    s = WSASocketA(2, 2, 0x11, arg1, arg1, 1)
    
    if (s == 0xffffffff)
        return 0xffffffff
    
label_7345f2:
    uint32_t argp = 1
    eax = ioctlsocket(s, 0x8004667e, &argp)
    
    if (eax != 0xffffffff)
        return s
    
    char const* const var_18_3 = "SocketCreate"
    var_1c_6 = 0x69
    ecx_1 = "result != SOCKET_ERROR"
    goto label_734637

int32_t af
int32_t type
int32_t var_1c_3
uint32_t dwFlags
char const* const ecx

if (arg2 != arg1)
    if (arg2 == 2)
        dwFlags = 1
        int32_t var_1c_1 = 0
        int32_t var_20_2 = 0
        int32_t var_24_2 = 6
        type = 1
        af = 0x17
        goto label_73456e
    
    char const* const var_18_6 = "SocketCreate"
    var_1c_3 = 0x45
    ecx = "Halt"
label_734672:
    sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Windows\WindowsNetwork.cpp", var_1c_3, 
        "SocketCreate")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

dwFlags = arg1
int32_t var_1c = 0
int32_t var_20_1 = 0
int32_t var_24_1 = 6
type = arg1
af = 2
label_73456e:
s = WSASocketA(af, type, 6, nullptr, 0, dwFlags)

if (s == 0xffffffff)
    return 0xffffffff

int32_t optval = 1
eax = setsockopt(s, 6, 1, &optval, 4)

if (eax == 0xffffffff)
    char const* const var_18_1 = "SocketCreate"
    var_1c_3 = 0x4f
    ecx = "result != SOCKET_ERROR"
    goto label_734672

if (arg2 != 2)
    goto label_7345f2

optval = 0
eax = setsockopt(s, 0x29, 0x1b, &optval, 4)

if (eax != 0xffffffff)
    goto label_7345f2

char const* const var_18_5 = "SocketCreate"
var_1c_3 = 0x55
ecx = "result != SOCKET_ERROR"
goto label_734672
