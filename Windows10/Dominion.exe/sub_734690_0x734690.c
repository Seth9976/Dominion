// 函数: sub_734690
// 地址: 0x734690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
SOCKET s = WSASocketA(2, 2, 0x11, nullptr, 0, 1)

if (s != 0xffffffff)
    uint32_t var_20 = 1
    int32_t eax_2 = ioctlsocket(s, 0x8004667e, &var_20)
    
    if (eax_2 == 0xffffffff)
        sub_63b870(eax_2, &data_801800, "result != SOCKET_ERROR", 
            "C:\x\ax2017\Engine\Windows\WindowsNetwork.cpp", 0x69, "SocketCreate")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (arg2 != 0)
        var_20 = 1
        int32_t eax_3 = setsockopt(s, 0xffff, 0x20, &var_20, 4)
        
        if (eax_3 == 0xffffffff)
            sub_63b870(eax_3, &data_801800, "result != SOCKET_ERROR", 
                "C:\x\ax2017\Engine\Windows\WindowsNetwork.cpp", 0x82, 
                "WinsockNetworkInterface::UDPOpen")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    if (arg1 == 0)
        CookieCheckFunction(s)
        return s
    
    SOCKADDR name
    name.sa_family = 2
    uint32_t eax_4 = htonl(0)
    name.sa_data[2] = eax_4.b
    name.sa_data[3] = eax_4:1.b
    name.sa_data[4] = eax_4:2.b
    name.sa_data[5] = eax_4:3.b
    uint16_t eax_5 = htons(arg1)
    name.sa_data[0] = eax_5.b
    name.sa_data[1] = eax_5:1.b
    
    if (bind(s, &name, 0x10) != 0xffffffff)
        CookieCheckFunction(s)
        return s
    
    closesocket(s)

CookieCheckFunction(0xffffffff)
return 0xffffffff
