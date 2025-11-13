// 函数: _ZN5Botan3TLS15Handshake_State12server_certsEPNS0_11CertificateE
// 地址: 0xe6ad58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x20 = *(arg1 + 0x110)
int64_t entry_x1
*(arg1 + 0x110) = entry_x1

if (x20 != 0)
    void* x22_1 = x20[1]
    *x20 = _vtable_for_Botan::TLS::Certificate + 0x10
    
    if (x22_1 != 0)
        int64_t* x21_1 = x20[2]
        void* x0_1
        
        if (x21_1 == x22_1)
            x0_1 = x22_1
        else
            do
                x21_1 = &x21_1[-0x11]
                (*(*x21_1 + 0x10))(x21_1)
            while (x22_1 != x21_1)
            
            x0_1 = x20[1]
        
        x20[2] = x22_1
        operator delete(x0_1)
    
    operator delete(x20)
    *(arg1 + 0x110)

jump(*(**(arg1 + 8) + 0x70))
