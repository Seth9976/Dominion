// 函数: _ZN5Botan3TLS39Application_Layer_Protocol_NotificationD0Ev
// 地址: 0xee5fec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[1]
*entry_x0 = _vtable_for_Botan::TLS::Application_Layer_Protocol_Notification + 0x10

if (x20 != 0)
    char* x8_1 = entry_x0[2]
    void* x0_1
    
    if (x8_1 == x20)
        x0_1 = x20
    else
        char* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_1 = entry_x0[1]
    
    entry_x0[2] = x20
    operator delete(x0_1)

return operator delete(entry_x0) __tailcall
