// 函数: _ZNK5Botan9ASN1_Time19passes_sanity_checkEv
// 地址: 0xcb709c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int32_t x8_6 = *(entry_x0 + 8)

if (x8_6 - 0x79e u<= 0x47e)
    int32_t x9_1 = *(entry_x0 + 0xc)
    
    if (x9_1 - 1 u<= 0xb)
        int32_t x10_1 = *(entry_x0 + 0x10)
        
        if (x10_1 != 0 && x10_1 u<= *(&data_828f7c + (zx.q(x9_1 - 1) << 2)))
            if (x9_1 != 2 || x10_1 != 0x1d)
            label_cb7138:
                
                if (*(entry_x0 + 0x14) u<= 0x17 && *(entry_x0 + 0x18) u<= 0x3b)
                    int32_t x8_4 = *(entry_x0 + 0x1c)
                    
                    if (x8_4 u<= 0x3c)
                        return zx.q(x8_4 != 0x3c ? 1 : 0) | zx.q(*(entry_x0 + 0x20) != 0x17 ? 1 : 0)
            else if ((x8_6 & 3) == 0)
                int32_t x8 = x8_6 & 0xffff
                
                if (ror.d(x8 * 0xc28f5c29, 2) u> 0x28f5c28 || zx.d((x8 u% 0x190).w) == 0)
                    goto label_cb7138

return 0
