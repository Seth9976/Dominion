// 函数: _ZN5Botan14Cert_Extension18Extended_Key_UsageD0Ev
// 地址: 0xee6fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[1]
*entry_x0 = _vtable_for_Botan::Cert_Extension::Extended_Key_Usage + 0x10

if (x20 != 0)
    void** x8_1 = entry_x0[2]
    void* x0_1
    
    if (x8_1 == x20)
        x0_1 = x20
    else
        void** x22_1 = x8_1
        
        do
            x22_1 = &x22_1[-4]
            *x22_1 = _vtable_for_Botan::OID + 0x10
            void* x0 = x22_1[1]
            
            if (x0 != 0)
                x8_1[-2] = x0
                operator delete(x0)
            
            x8_1 = x22_1
        while (x20 != x22_1)
        
        x0_1 = entry_x0[1]
    
    entry_x0[2] = x20
    operator delete(x0_1)

return operator delete(entry_x0) __tailcall
