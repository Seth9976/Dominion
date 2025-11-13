// 函数: _ZN5Botan14Cert_Extension28Authority_Information_AccessD2Ev
// 地址: 0xee75cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Cert_Extension::Authority_Information_Access + 0x10

if (x20 != 0)
    char* x8_1 = entry_x0[5]
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
        
        x0_1 = entry_x0[4]
    
    entry_x0[5] = x20
    operator delete(x0_1)

if ((zx.d(entry_x0[1].b) & 1) != 0)
    return operator delete(entry_x0[3]) __tailcall
