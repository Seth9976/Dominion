// 函数: vorbis_block_init
// 地址: 0x107ef4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(arg2, 0, 0xc0)
*(arg2 + 0x80) = 0
*(arg2 + 0x68) = arg1
*(arg2 + 0x70) = 0

if (*arg1 != 0)
    void* x0_1 = calloc(1, 0x88)
    *(arg2 + 0xb8) = x0_1
    *(x0_1 + 8) = 0xc61c3c00
    *(x0_1 + 0x10) = calloc(1, 0x28)
    oggpack_writeinit()
    *(x0_1 + 0x18) = calloc(1, 0x28)
    oggpack_writeinit()
    *(x0_1 + 0x20) = calloc(1, 0x28)
    oggpack_writeinit()
    *(x0_1 + 0x28) = calloc(1, 0x28)
    oggpack_writeinit()
    *(x0_1 + 0x30) = calloc(1, 0x28)
    oggpack_writeinit()
    *(x0_1 + 0x38) = calloc(1, 0x28)
    oggpack_writeinit()
    *(x0_1 + 0x40) = calloc(1, 0x28)
    oggpack_writeinit()
    
    for (int64_t i = 0; i != 0x40; i += 8)
        void* x0_9
        
        if (i == 0)
            *(x0_1 + 0x48) = arg2 + 8
            x0_9 = arg2 + 8
        else
            x0_9 = calloc(1, 0x28)
            *(x0_1 + 0x48 + i) = x0_9
        
        oggpack_writeinit(x0_9)

return 0
