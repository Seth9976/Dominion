// 函数: _Z15AttachIterFirstP12AttachmentID
// 地址: 0xf69d7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
entry_x8[1] = arg1
int32_t x9 = *arg1

if (x9 != 0)
    uint64_t x11_1 = zx.q(x9.w)
    int64_t* x10_2 = *(*gpGameData + 0x28)
    
    if (x11_1.d u< x10_2[1].d)
        void* x10_4 = *x10_2 + x11_1 * 0x34
        void* const x9_1
        
        if (*(x10_4 + 0x30) == x9)
            x9_1 = x10_4
        else
            x9_1 = nullptr
        
        *entry_x8 = x9_1
        entry_x8[2].b = 0
        return 

*entry_x8 = 0
entry_x8[2].b = 0
