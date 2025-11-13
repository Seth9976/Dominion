// 函数: _ZN10GameClientD2Ev
// 地址: 0x9a7d94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ClientLeaderboard::~ClientLeaderboard()
SharedSeedClientData::~SharedSeedClientData()
void* entry_x0
void* x8 = *(entry_x0 + 0x7590)

if (x8 != 0)
    void* x0_2 = *x8
    uint64_t x21_1 = 0
    
    if (x0_2 == 0)
        goto label_9a7df4
    
    int32_t x8_1
    
    while (true)
        void* x22_1 = *(x0_2 + 0x18)
        XPooledFree(x0_2, 0x20)
        x0_2 = x22_1
        
        if (x22_1 == 0)
            x8 = *(entry_x0 + 0x7590)
        label_9a7df4:
            *(x8 + (x21_1 << 3)) = 0
            x8_1 = *(entry_x0 + 0x7598)
            
            if (x21_1.d + 1 u> x8_1)
                break
            
            x0_2 = *(*(entry_x0 + 0x7590) + (zx.q(x21_1.d + 1) << 3))
            x21_1 = zx.q(x21_1.d + 1)
            
            if (x0_2 == 0)
                break
    
    *(entry_x0 + 0x759c) = 0
    XPooledFree(*(entry_x0 + 0x7590), (x8_1 << 3) + 8)
    *(entry_x0 + 0x7590) = 0

XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()

for (int64_t i = 0x5010; i != 0x10; i -= 0x20)
    XString::~XString()

return XString::~XString() __tailcall
