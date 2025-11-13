// 函数: _ZN5Botan3TLS39Application_Layer_Protocol_NotificationD2Ev
// 地址: 0xee5f60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[1]
*entry_x0 = _vtable_for_Botan::TLS::Application_Layer_Protocol_Notification + 0x10

if (x20 == 0)
    return 

char* x8_1 = entry_x0[2]

if (x8_1 == x20)
    entry_x0[2] = x20
    return operator delete(x20) __tailcall

char* x21 = x8_1

do
    x21 = &x21[-0x18]
    
    if ((zx.d(*x21) & 1) != 0)
        operator delete(*(x8_1 - 8))
    
    x8_1 = x21
while (x20 != x21)

void* x0_1 = entry_x0[1]
entry_x0[2] = x20
return operator delete(x0_1) __tailcall
