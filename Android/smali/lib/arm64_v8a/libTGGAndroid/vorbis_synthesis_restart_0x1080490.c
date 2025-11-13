// 函数: vorbis_synthesis_restart
// 地址: 0x1080490
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x10_3 = *(arg1 + 8)
int64_t result = 0xffffffff

if (x10_3 != 0)
    void* x9_1 = *(arg1 + 0x88)
    
    if (x9_1 != 0)
        void* x10 = *(x10_3 + 0x30)
        result = 0xffffffff
        
        if (x10 != 0)
            uint64_t x11_1 = zx.q(*(x10 + 0x1690))
            int64_t x10_1 = *(x10 + 8)
            *(arg1 + 0x30) = 0
            int64_t x10_2 = x10_1 s>> zx.q(x11_1.d + 1)
            *(arg1 + 0x24) = (x10_2 s>> x11_1).d
            *(arg1 + 0x28) = 0xffffffff
            result = 0
            *(arg1 + 0x58) = -1
            *(arg1 + 0x60) = -1
            *(arg1 + 0x50) = x10_2
            *(x9_1 + 0xe0) = -1

return result
